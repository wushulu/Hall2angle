/*
 * File: STMF4Hall_types.h
 *
 * Code generated for Simulink model 'STMF4Hall'.
 *
 * Model version                  : 1.37
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Oct 10 21:19:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef STMF4Hall_types_h_
#define STMF4Hall_types_h_
#include "rtwtypes.h"
#include "stm_adc_ll.h"
#include "stm_timer_ll.h"
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

/* Custom Type definition for MATLABSystem: '<S16>/Analog to Digital Converter' */
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

/* Custom Type definition for MATLABSystem: '<Root>/Timer' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
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

#ifndef typedef_stm32cube_blocks_PWMOutput_ST_T
#define typedef_stm32cube_blocks_PWMOutput_ST_T

typedef struct tag_C3ug75osl8w3UN1OXa3ipB stm32cube_blocks_PWMOutput_ST_T;

#endif                             /* typedef_stm32cube_blocks_PWMOutput_ST_T */

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

#ifndef typedef_stm32cube_blocks_TimerBlock_S_T
#define typedef_stm32cube_blocks_TimerBlock_S_T

typedef struct tag_lVYsrGoTQYYB21wZ5vAzOC stm32cube_blocks_TimerBlock_S_T;

#endif                             /* typedef_stm32cube_blocks_TimerBlock_S_T */

/* Parameters for system: '<S110>/If Action Subsystem6' */
typedef struct P_IfActionSubsystem6_STMF4Hal_T_ P_IfActionSubsystem6_STMF4Hal_T;

/* Parameters for system: '<S110>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_STMF4Hall_T_ P_IfActionSubsystem_STMF4Hall_T;

/* Parameters for system: '<S108>/Valid Halls' */
typedef struct P_ValidHalls_STMF4Hall_T_ P_ValidHalls_STMF4Hall_T;

/* Parameters for system: '<S108>/Bad hall (glitch or wrong connection)' */
typedef struct P_Badhallglitchorwrongconnect_T_ P_Badhallglitchorwrongconnect_T;

/* Parameters for system: '<S41>/Hall Value of 1' */
typedef struct P_HallValueof1_STMF4Hall_T_ P_HallValueof1_STMF4Hall_T;

/* Parameters (default storage) */
typedef struct P_STMF4Hall_T_ P_STMF4Hall_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_STMF4Hall_T RT_MODEL_STMF4Hall_T;

#endif                                 /* STMF4Hall_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
