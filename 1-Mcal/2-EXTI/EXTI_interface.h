/********************************************************/                                                                          
/*************** Name     :ELabbas salah ****************/                                                                          
/*************** Date     :  17/09/2020  ****************/                                                                          
/*************** SWC      :   EXTI       ****************/                                                                          
/*************** Version  :    V1.0      ****************/                                                                          
/********************************************************/  

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_


#define EXTI_UINT8_FALLING_EDGE             1
#define EXTI_UINT8_RIASING_EDGE             2
#define EXTI_UINT8_LOW_LEVEL_EDGE           3
#define EXTI_UINT8_LOGICAL_CHANGE_EDGE      4

#define EXTI_UINT8_INT0     0
#define EXTI_UINT8_INT1     1
#define EXTI_UINT8_INT2     2 


CheckStatus EXTI_CheckStatusExtIntEnable(_uint8 Copy__Uint8ExtIntId, _uint8 Copy__Uint8ExtIntEdge);

CheckStatus EXTI_CheckStatusDisable(_uint8 Copy__Uint8ExtIntId);

CheckStatus EXTI_CheckStatusSetCallBackFunc( Void (*Copy_VoidPointerToFunction)(Void), _uint8 Copy__Uint8ExtiIndex);

#endif