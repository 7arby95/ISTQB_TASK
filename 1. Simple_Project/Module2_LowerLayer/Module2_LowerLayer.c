/*
 * Module1_LowerLayer.c
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "Module2_LowerLayer.h"
#include "Module2_LowerLayer_Error_Table.h"


/************************************************************************/
/*							Api's Implementation				        */
/************************************************************************/

ERROR_STATUS printArray(int* ptr, int size)
{
	ERROR_STATUS errorStatus = MODULE2_E_OK;
	int counter;

	if(ptr == NULL_POINTER)
	{
		errorStatus = MODULE2_E_NULL_POINTER;
	}else if(size < MINIMUM_ARRAY_SIZE || size > MAXIMUM_ARRAY_SIZE)
	{
		errorStatus = MODULE2_E_INVALID_SIZE;
	}else
	{
		for(counter=0 ; counter<INDEX_OF_LAST_ELEMENT ; counter++)
		{
			printf("%d, ", ptr[counter]);
		}

		printf("%d\n", ptr[INDEX_OF_LAST_ELEMENT]);
	}

	return errorStatus;
}
