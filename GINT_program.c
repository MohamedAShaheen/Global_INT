/********************************************************************/
/********************************************************************/
/**************       Author : Moahmed A Shaheen     *****************/
/**************       Layer : MCAL                  *****************/
/**************       SWC:     DIO                  *****************/
/**************       Version : 1.0                 *****************/
/**************       Date : 25/4/2022              *****************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GINT_interface.h"
#include "GINT_register.h"
#include "GINT_private.h"
#include "GINT_config.h"



void GINT_voidEnable(void){
	
	SET_BIT(_SREG, _SREG_I);
}


void GINT_voidDisable(void){
	
	CLR_BIT(_SREG, _SREG_I);
}