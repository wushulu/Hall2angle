/*
 * File: STMF4Hall_private.h
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

#ifndef STMF4Hall_private_h_
#define STMF4Hall_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "STMF4Hall.h"
#include "STMF4Hall_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
extern void STMF4Hal_IfActionSubsystem6(int16_T *rty_direction, uint16_T
  *rty_sequence_check, P_IfActionSubsystem6_STMF4Hal_T *localP);
extern void STMF4Hall_IfActionSubsystem(uint16_T *rty_Out1, uint16_T *rty_Out2,
  P_IfActionSubsystem_STMF4Hall_T *localP);
extern void STMF4Hall_ValidHalls_Init(B_ValidHalls_STMF4Hall_T *localB,
  P_ValidHalls_STMF4Hall_T *localP);
extern void STMF4Hall_ValidHalls(uint16_T rtu_hallReading, uint16_T
  rtu_previousState, int16_T rtu_previous_direction, boolean_T
  *rty_directional_speed_valid_fla, int16_T *rty_direction, uint16_T
  *rty_inValidHall, B_ValidHalls_STMF4Hall_T *localB, DW_ValidHalls_STMF4Hall_T *
  localDW, P_ValidHalls_STMF4Hall_T *localP);
extern void Badhallglitchorwrongconnect(int16_T rtu_previous_direction, uint16_T
  *rty_inValidHall, int16_T *rty_direction, boolean_T
  *rty_directional_speed_valid_fla, P_Badhallglitchorwrongconnect_T *localP);
extern void STMF4Hall_HallValueof1(real32_T *rty_position,
  P_HallValueof1_STMF4Hall_T *localP);

#endif                                 /* STMF4Hall_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
