// SPDX-License-Identifier: BSD-3-Clause
//
// Copyright(c) 2018 Intel Corporation. All rights reserved.
//
// Author: Slawomir Blauciak <slawomir.blauciak@linux.intel.com>

#include <sof/audio/component.h>
#include <sof/audio/buffer.h>
#include <sof/drivers/ipc.h>

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <math.h>
#include <stdint.h>
#include <cmocka.h>

#define __panic(...)

static void test_audio_buffer_copy_underrun(void **state)
{
	(void)state;

	struct sof_ipc_buffer test_buf_desc = {
		.size = 256
	};

	struct comp_buffer *src = buffer_new(&test_buf_desc);
	struct comp_buffer *snk = buffer_new(&test_buf_desc);

	assert_non_null(src);
	assert_non_null(snk);

	comp_update_buffer_produce(src, 10);

	assert_int_equal(src->avail, 10);
	assert_int_equal(comp_buffer_can_copy_bytes(src, snk, 16), -1);

	buffer_free(src);
	buffer_free(snk);
}

static void test_audio_buffer_copy_overrun(void **state)
{
	(void)state;

	struct sof_ipc_buffer test_buf_desc = {
		.size = 256
	};

	struct comp_buffer *src = buffer_new(&test_buf_desc);
	struct comp_buffer *snk = buffer_new(&test_buf_desc);

	assert_non_null(src);
	assert_non_null(snk);

	comp_update_buffer_produce(src, 16);
	comp_update_buffer_produce(snk, 246);

	assert_int_equal(src->avail, 16);
	assert_int_equal(snk->free, 10);
	assert_int_equal(comp_buffer_can_copy_bytes(src, snk, 16), 1);

	buffer_free(src);
	buffer_free(snk);
}

static void test_audio_buffer_copy_success(void **state)
{
	(void)state;

	struct sof_ipc_buffer test_buf_desc = {
		.size = 256
	};

	struct comp_buffer *src = buffer_new(&test_buf_desc);
	struct comp_buffer *snk = buffer_new(&test_buf_desc);

	assert_non_null(src);
	assert_non_null(snk);

	comp_update_buffer_produce(src, 10);

	assert_int_equal(src->avail, 10);
	assert_int_equal(comp_buffer_can_copy_bytes(src, snk, 0), 0);

	buffer_free(src);
	buffer_free(snk);
}

static void test_audio_buffer_copy_fit_space_constraint(void **state)
{
	(void)state;

	struct sof_ipc_buffer test_buf_desc = {
		.size = 256
	};

	struct comp_buffer *src = buffer_new(&test_buf_desc);
	struct comp_buffer *snk = buffer_new(&test_buf_desc);

	assert_non_null(src);
	assert_non_null(snk);

	comp_update_buffer_produce(src, 16);
	comp_update_buffer_produce(snk, 246);

	assert_int_equal(src->avail, 16);
	assert_int_equal(snk->free, 10);
	assert_int_equal(comp_buffer_get_copy_bytes(src, snk), 10);

	buffer_free(src);
	buffer_free(snk);
}

static void test_audio_buffer_copy_fit_no_space_constraint(void **state)
{
	(void)state;

	struct sof_ipc_buffer test_buf_desc = {
		.size = 256
	};

	struct comp_buffer *src = buffer_new(&test_buf_desc);
	struct comp_buffer *snk = buffer_new(&test_buf_desc);

	assert_non_null(src);
	assert_non_null(snk);

	comp_update_buffer_produce(src, 16);

	assert_int_equal(src->avail, 16);
	assert_int_equal(comp_buffer_get_copy_bytes(src, snk), 16);

	buffer_free(src);
	buffer_free(snk);
}

int main(void)
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_audio_buffer_copy_underrun),
		cmocka_unit_test(test_audio_buffer_copy_overrun),
		cmocka_unit_test(test_audio_buffer_copy_success),
		cmocka_unit_test(test_audio_buffer_copy_fit_space_constraint),
		cmocka_unit_test(test_audio_buffer_copy_fit_no_space_constraint)
	};

	cmocka_set_message_output(CM_OUTPUT_TAP);

	return cmocka_run_group_tests(tests, NULL, NULL);
}
