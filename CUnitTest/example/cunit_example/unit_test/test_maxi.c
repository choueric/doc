/*
 * 定义test case
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include <CUnit/CUnit.h>

#include "maxi.h"

/* ----------------- test case functions ---------------- */ 
static void testIQJ()
{
	CU_ASSERT_EQUAL(maxi(1, 1), 1);
	CU_ASSERT_EQUAL(maxi(0, -0), 0);
}

static void testIGJ()
{
	CU_ASSERT_EQUAL(maxi(2, 1), 2);
	CU_ASSERT_EQUAL(maxi(0, -1), 0);
	CU_ASSERT_EQUAL(maxi(-1, -2), -1);
}

static void testILJ()
{
	CU_ASSERT_EQUAL(maxi(1, 2), 2);
	CU_ASSERT_EQUAL(maxi(-1, 0), 0);
	CU_ASSERT_EQUAL(maxi(-2, -1), -1);
}

static void testInterIQJ()
{
	CU_ASSERT_EQUAL(inter_maxi(1, 1), 1);
	CU_ASSERT_EQUAL(inter_maxi(0, -0), 0);
}

static void testInterIGJ()
{
	CU_ASSERT_EQUAL(inter_maxi(2, 1), 2);
	CU_ASSERT_EQUAL(inter_maxi(0, -1), 0);
	CU_ASSERT_EQUAL(inter_maxi(-1, -2), -1);
}

static void testInterILJ()
{
	CU_ASSERT_EQUAL(inter_maxi(1, 2), 2);
	CU_ASSERT_EQUAL(inter_maxi(-1, 0), 0);
	CU_ASSERT_EQUAL(inter_maxi(-2, -1), -1);
}


/* ----------------- test info array ---------------- */ 
static CU_TestInfo testcases[] = {
	{"Testing i equals j: ", testIQJ},
	{"Testing j greater than j: ", testIGJ},
	{"Testing i less than j: ", testILJ},
	{"Testing inter i equals j: ", testInterIQJ},
	{"Testing inter j greater than j: ", testInterIGJ},
	{"Testing inter i less than j: ", testInterILJ},
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
	{"Testing the function maxi: ", suite_success_init, suite_success_clean, testcases},
	CU_SUITE_INFO_NULL,
};




/* ------------------ setting enviroment - ------------- */
void test_maxi_AddSuites(void)
{
	assert(NULL != CU_get_registry());
	assert(!CU_is_test_running());

	if(CUE_SUCCESS != CU_register_suites(suites)){
		fprintf(stderr, "register suites failed - %s", CU_get_error_msg());
		exit(EXIT_FAILURE);
	}
}
