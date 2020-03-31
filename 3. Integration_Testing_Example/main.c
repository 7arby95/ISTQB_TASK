/*
 * main.c
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "Testers/Project_Tester.h"


/************************************************************************/
/*							   Main Function	    			        */
/************************************************************************/

int main(void)
{
	int arr1[ARRAY_SIZE] = {1, 2, 3, 4};
	int arr2[ARRAY_SIZE];

	project_IntegrationTesting(arr1, arr2, ARRAY_SIZE);

	return 0;
}
