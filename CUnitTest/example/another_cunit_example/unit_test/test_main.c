/*
 * 运行测试
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include <CUnit/CUnit.h>
#include <CUnit/Automated.h>
#include <CUnit/Basic.h>
#include <CUnit/Console.h>
//#include <CUnit/CUCurses.h>   //貌似没有这个头文件

/* ------------------ 需要添加修改 ------------------------ */
#include "test_maxi.h"
#include "test_mini.h"
/* -------------------------------------------------------- */

int main(int argc, char **argv)
{
	/* 初始化CUnit框架 */
	if(CU_initialize_registry()){
		fprintf(stderr, " Initialization of Test Registry failed\n");
		exit(EXIT_FAILURE);
	}

	/* 添加测试suite和test */
    /* ------------------ 需要添加修改 ------------------------ */
	test_maxi_AddSuites();
	test_mini_AddSuites();
    /* -------------------------------------------------------- */
	
	/* 设置输出模式 start */
#if 0  // Automated
	CU_set_output_filename("TestMax");
	CU_list_tests_to_file();
	CU_automated_run_tests();
#endif

#if 1   //basic
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
#endif

#if 0   //Console
	CU_console_run_tests();
#endif

#if 0 // Curses
	CU_curses_run_tests();
#endif
	/* 设置输出接口 end */


	CU_cleanup_registry();

	return 0;
}
