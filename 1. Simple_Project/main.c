/*
 * main.c
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "Module1_UpperLayer/Module1_UpperLayer.h"
#include "Module2_LowerLayer/Module2_LowerLayer.h"


/************************************************************************/
/*							   Main Function	    			        */
/************************************************************************/

int main(void)
{
	int arr1[ARRAY_SIZE] = {1, 2, 3, 4};
	int arr2[ARRAY_SIZE];

	copyArray(arr1, arr2, ARRAY_SIZE);

	return 0;
}
