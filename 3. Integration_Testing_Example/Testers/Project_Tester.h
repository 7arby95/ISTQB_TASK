/*
 * Project_Tester.h
 *
 *  Created on: Mar 31, 2020
 *      Author: Youssef Harby
 */

#ifndef TESTERS_PROJECT_TESTER_H_
#define TESTERS_PROJECT_TESTER_H_


/************************************************************************/
/*								 Includes						        */
/************************************************************************/

#include "../std_types.h"
#include "../Module1_UpperLayer/Module1_UpperLayer.h"
#include "../Module1_UpperLayer/Module1_UpperLayer_Error_Table.h"
#include "../Module2_LowerLayer/Module2_LowerLayer.h"
#include "../Module2_LowerLayer/Module2_LowerLayer_Error_Table.h"


/************************************************************************/
/*							  Api's Declaration	    			        */
/************************************************************************/

void project_IntegrationTesting(int* ptr1, int* ptr2, int size);


#endif /* TESTERS_PROJECT_TESTER_H_ */
