/*
 * Module1_LowerLayer.h
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */

#ifndef MODULE1_LOWERLAYER_H_
#define MODULE1_LOWERLAYER_H_


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
 * Description: A function used to print an entire array.
 * Input:  		 size: size of the arrays.
 * 				 	   range: 1:10
 * Output: 		 Error status of the function execution.
 * Input/Output: ptr: A pointer to integer acting as the address of the first
 * 					  element of the array.
 */
ERROR_STATUS printArray(int* ptr, int size);


#endif /* MODULE1_LOWERLAYER_H_ */
