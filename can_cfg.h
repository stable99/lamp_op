#pragma once
/*
* can frame�� �����ϴ� type
*/

#include "stdio.h"
#include "inttypes.h"

/*
* signal ID : 001
* length : 64bit
* information
*	lamp on cmd
*	r
*	g
*	b
*/
typedef struct T_CAN001h
{
	uint8 lamp_on;
	uint8 red;
	uint8 blue;
	uint8 green;
}