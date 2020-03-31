/*
 * Module1_UpperLayer.h
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */

#ifndef MODULE1_UPPERLAYER_H_
#define MODULE1_UPPERLAYER_H_


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "../std_types.h"


/************************************************************************/
/*							Preprocessor Macros					        */
/************************************************************************/

#define ARRAY_SIZE					(4)
#define INDEX_OF_LAST_ELEMENT		(ARRAY_SIZE - 1)
#define MINIMUM_ARRAY_SIZE			(1)
#define MAXIMUM_ARRAY_SIZE			(10)


/************************************************************************/
/*							  Api's Declaration	    			        */
/************************************************************************/

/*
 * Description: A function used to copy an entire array into another.
 * Input:  		 size: size of the arrays.
 * 				 	   range: 1:10
 * Output: 		 Error status of the function execution.
 * Input/Output: ptr1, ptr2: two pointers to integers acting as the address of the first
 * 							 element of each array.
 */
ERROR_STATUS copyArray(int* ptr1, int* ptr2, int size);


#endif /* MODULE1_UPPERLAYER_H_ */
