/*
 * Module1_Tester.c
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */


#include "Module1_Tester.h"


void copyArray_UnitTesting(int* ptr1, int* ptr2, int size)
{
	ERROR_STATUS ReturnedValue = copyArray(ptr1, ptr2, size);

	if(ReturnedValue == MODULE1_E_NULL_POINTER)
	{
		printf("Module 1 Error Detected, Null Pointer\n");
	}else if(ReturnedValue == MODULE1_E_INVALID_SIZE)
	{
		printf("Module 1 Error Detected, Invalid Size\n");
	}else
	{
		printf("Module 1 No Errors\n");
	}
}
