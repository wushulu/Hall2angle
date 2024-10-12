/*
 * File: Testerr_types.h
 *
 * Code generated for Simulink model 'Testerr'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Oct 12 15:25:15 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Testerr_types_h_
#define Testerr_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_wiywjhRn0JhvylthmapQgB
#define struct_tag_wiywjhRn0JhvylthmapQgB

struct tag_wiywjhRn0JhvylthmapQgB
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_wiywjhRn0JhvylthmapQgB */

#ifndef typedef_stm32cube_blocks_DigitalPortR_T
#define typedef_stm32cube_blocks_DigitalPortR_T

typedef struct tag_wiywjhRn0JhvylthmapQgB stm32cube_blocks_DigitalPortR_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortR_T */

/* Custom Type definition for MATLABSystem: '<S106>/Timer' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_lVYsrGoTQYYB21wZ5vAzOC
#define struct_tag_lVYsrGoTQYYB21wZ5vAzOC

struct tag_lVYsrGoTQYYB21wZ5vAzOC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_lVYsrGoTQYYB21wZ5vAzOC */

#ifndef typedef_stm32cube_blocks_TimerBlock_T_T
#define typedef_stm32cube_blocks_TimerBlock_T_T

typedef struct tag_lVYsrGoTQYYB21wZ5vAzOC stm32cube_blocks_TimerBlock_T_T;

#endif                             /* typedef_stm32cube_blocks_TimerBlock_T_T */

/* Custom Type definition for MATLABSystem: '<S14>/Analog to Digital Converter' */
#include "stm_adc_ll.h"
#include "stm_adc_ll.h"
#ifndef struct_tag_ryp2yWF35eJG09Km2BkoGG
#define struct_tag_ryp2yWF35eJG09Km2BkoGG

struct tag_ryp2yWF35eJG09Km2BkoGG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  ADC_Type_T* ADCHandle;
};

#endif                                 /* struct_tag_ryp2yWF35eJG09Km2BkoGG */

#ifndef typedef_stm32cube_blocks_AnalogInput__T
#define typedef_stm32cube_blocks_AnalogInput__T

typedef struct tag_ryp2yWF35eJG09Km2BkoGG stm32cube_blocks_AnalogInput__T;

#endif                             /* typedef_stm32cube_blocks_AnalogInput__T */

#ifndef struct_tag_S5MMpcz8vT0FlmhmEl4q5C
#define struct_tag_S5MMpcz8vT0FlmhmEl4q5C

struct tag_S5MMpcz8vT0FlmhmEl4q5C
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_S5MMpcz8vT0FlmhmEl4q5C */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_S5MMpcz8vT0FlmhmEl4q5C stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

#ifndef struct_tag_C3ug75osl8w3UN1OXa3ipB
#define struct_tag_C3ug75osl8w3UN1OXa3ipB

struct tag_C3ug75osl8w3UN1OXa3ipB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_C3ug75osl8w3UN1OXa3ipB */

#ifndef typedef_stm32cube_blocks_PWMOutput_Te_T
#define typedef_stm32cube_blocks_PWMOutput_Te_T

typedef struct tag_C3ug75osl8w3UN1OXa3ipB stm32cube_blocks_PWMOutput_Te_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_Te_T */

/* Parameters for system: '<S109>/If Action Subsystem6' */
typedef struct P_IfActionSubsystem6_Testerr_T_ P_IfActionSubsystem6_Testerr_T;

/* Parameters for system: '<S109>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_Testerr_T_ P_IfActionSubsystem_Testerr_T;

/* Parameters for system: '<S107>/Valid Halls' */
typedef struct P_ValidHalls_Testerr_T_ P_ValidHalls_Testerr_T;

/* Parameters for system: '<S107>/Bad hall (glitch or wrong connection)' */
typedef struct P_Badhallglitchorwrongconnect_T_ P_Badhallglitchorwrongconnect_T;

/* Parameters for system: '<S37>/Hall Value of 1' */
typedef struct P_HallValueof1_Testerr_T_ P_HallValueof1_Testerr_T;

/* Parameters (default storage) */
typedef struct P_Testerr_T_ P_Testerr_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Testerr_T RT_MODEL_Testerr_T;

#endif                                 /* Testerr_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
