/*
 * Module1_UpperLayer.c
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "Module1_UpperLayer.h"
#include "Module1_UpperLayer_Error_Table.h"
#include "../Module2_LowerLayer/Module2_LowerLayer.h"


/************************************************************************/
/*							Api's Implementation				        */
/************************************************************************/

ERROR_STATUS copyArray(int* ptr1, int* ptr2, int size)
{
	ERROR_STATUS errorStatus = MODULE1_E_OK;
	int counter;

	if(ptr1 == NULL_POINTER || ptr2 == NULL_POINTER)
	{
		errorStatus = MODULE1_E_NULL_POINTER;
	}else if(size < MINIMUM_ARRAY_SIZE || size > MAXIMUM_ARRAY_SIZE)
	{
		errorStatus = MODULE1_E_INVALID_SIZE;
	}else
	{
		for(counter=0 ; counter<size ; counter++)
		{
			/* Copy each element in array2 to array1 */
			*ptr2 = *ptr1;
			/* Increment both pointers to get the next array element */
			ptr1++;
			ptr2++;
		}

		errorStatus = printArray(ptr2, size);
	}

	return errorStatus;
}
