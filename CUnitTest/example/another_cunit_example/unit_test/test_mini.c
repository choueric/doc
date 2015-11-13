/*
 * 定义test case
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include <CUnit/CUnit.h>
#include <CUnit/Automated.h>

#include "mini.h"

/* ----------------- test case functions ---------------- */ 
static void testIQJ()
{
	CU_ASSERT_EQUAL(mini(1, 1), 1);
	CU_ASSERT_EQUAL(mini(0, -0), 0);
}

static void testIGJ()
{
	CU_ASSERT_EQUAL(mini(2, 1), 1);
	CU_ASSERT_EQUAL(mini(0, -1), -1);
	CU_ASSERT_EQUAL(mini(-1, -2), -2);
}

static void testILJ()
{
	CU_ASSERT_EQUAL(mini(1, 2), 1);
	CU_ASSERT_EQUAL(mini(-1, 0), -1);
	CU_ASSERT_EQUAL(mini(-2, -1), -2);
}


/* ----------------- test info array ---------------- */ 
static CU_TestInfo testcases[] = {
	{"Testing i equals j: ", testIQJ},
	{"Testing j greater than j: ", testIGJ},
	{"Testing i less than j: ", testILJ},
	CU_TEST_INFO_NULL,
};


/* ------------------ test suites -------------------- */
static int suite_success_init(void)
{
	return 0;
}

static int suite_success_clean(void)
{
	return 0;
}




/* ------------------ suite info array ---------------- */
static CU_SuiteInfo suites[] = {
	{"Testing the function mini: ", suite_success_init, suite_success_clean, testcases},
	CU_SUITE_INFO_NULL,
};




/* ------------------ setting enviroment - ------------- */
void test_mini_AddSuites(void)
{
	assert(NULL != CU_get_registry());
	assert(!CU_is_test_running());

	if(CUE_SUCCESS != CU_register_suites(suites)){
		fprintf(stderr, "register suites failed - %s", CU_get_error_msg());
		exit(EXIT_FAILURE);
	}
}
