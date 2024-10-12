/*
 * File: STMF4Hall.c
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

#include "STMF4Hall.h"
#include "rtwtypes.h"
#include "STMF4Hall_types.h"
#include "STMF4Hall_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "stm_adc_ll.h"
#include <stddef.h>
#include "stm_timer_ll.h"
#include "xcp.h"
#include "ext_mode.h"

extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T) 0;

/* Block signals (default storage) */
B_STMF4Hall_T STMF4Hall_B;

/* Block states (default storage) */
DW_STMF4Hall_T STMF4Hall_DW;

/* Real-time model */
static RT_MODEL_STMF4Hall_T STMF4Hall_M_;
RT_MODEL_STMF4Hall_T *const STMF4Hall_M = &STMF4Hall_M_;

/* Forward declaration for local functions */
static void STMF4Hall_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj);

/* Forward declaration for local functions */
static void STMF4Hall_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_ST_T *obj);
static void STMF4Hall_SystemCore_setup_o(stm32cube_blocks_TimerBlock_S_T *obj);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void STMF4Hall_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(STMF4Hall_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (STMF4Hall_M->Timing.TaskCounters.TID[1])++;
  if ((STMF4Hall_M->Timing.TaskCounters.TID[1]) > 1999) {/* Sample time: [0.1s, 0.0s] */
    STMF4Hall_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S110>/If Action Subsystem6'
 *    '<S110>/If Action Subsystem7'
 *    '<S86>/If Action Subsystem6'
 *    '<S86>/If Action Subsystem7'
 *    '<S62>/If Action Subsystem6'
 *    '<S62>/If Action Subsystem7'
 */
void STMF4Hal_IfActionSubsystem6(int16_T *rty_direction, uint16_T
  *rty_sequence_check, P_IfActionSubsystem6_STMF4Hal_T *localP)
{
  /* SignalConversion generated from: '<S117>/direction' incorporates:
   *  Constant: '<S117>/Constant'
   */
  *rty_direction = localP->Constant_Value;

  /* SignalConversion generated from: '<S117>/sequence_check' incorporates:
   *  Constant: '<S117>/Constant1'
   */
  *rty_sequence_check = localP->Constant1_Value;
}

/*
 * Output and update for action system:
 *    '<S110>/If Action Subsystem'
 *    '<S110>/If Action Subsystem1'
 *    '<S110>/If Action Subsystem2'
 *    '<S110>/If Action Subsystem3'
 *    '<S110>/If Action Subsystem4'
 *    '<S110>/If Action Subsystem5'
 *    '<S86>/If Action Subsystem'
 *    '<S86>/If Action Subsystem1'
 *    '<S86>/If Action Subsystem2'
 *    '<S86>/If Action Subsystem3'
 *    ...
 */
void STMF4Hall_IfActionSubsystem(uint16_T *rty_Out1, uint16_T *rty_Out2,
  P_IfActionSubsystem_STMF4Hall_T *localP)
{
  /* SignalConversion generated from: '<S111>/Out1' incorporates:
   *  Constant: '<S111>/previous'
   */
  *rty_Out1 = localP->previous_Value;

  /* SignalConversion generated from: '<S111>/Out2' incorporates:
   *  Constant: '<S111>/next'
   */
  *rty_Out2 = localP->next_Value;
}

/*
 * System initialize for action system:
 *    '<S108>/Valid Halls'
 *    '<S84>/Valid Halls'
 *    '<S60>/Valid Halls'
 */
void STMF4Hall_ValidHalls_Init(B_ValidHalls_STMF4Hall_T *localB,
  P_ValidHalls_STMF4Hall_T *localP)
{
  /* SystemInitialize for Merge: '<S110>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;

  /* SystemInitialize for Merge: '<S110>/Merge1' */
  localB->Merge1 = localP->Merge1_InitialOutput;

  /* SystemInitialize for Merge: '<S110>/Merge2' */
  localB->Merge2 = localP->Merge2_InitialOutput;

  /* SystemInitialize for Merge: '<S110>/Merge3' */
  localB->Merge3 = localP->Merge3_InitialOutput;
}

/*
 * Output and update for action system:
 *    '<S108>/Valid Halls'
 *    '<S84>/Valid Halls'
 *    '<S60>/Valid Halls'
 */
void STMF4Hall_ValidHalls(uint16_T rtu_hallReading, uint16_T rtu_previousState,
  int16_T rtu_previous_direction, boolean_T *rty_directional_speed_valid_fla,
  int16_T *rty_direction, uint16_T *rty_inValidHall, B_ValidHalls_STMF4Hall_T
  *localB, DW_ValidHalls_STMF4Hall_T *localDW, P_ValidHalls_STMF4Hall_T *localP)
{
  /* SwitchCase: '<S110>/Switch Case' */
  switch (rtu_hallReading) {
   case 5:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem1' */
    break;

   case 6:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem2);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S114>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem4);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem4' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem5);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem5' */
    break;

   default:
    /* Update for IfAction SubSystem: '<S110>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S120>/Action Port'
     */
    /* Update for SwitchCase: '<S110>/Switch Case' */
    localDW->SwitchCaseActionSubsystem_Subsy = 4;

    /* End of Update for SubSystem: '<S110>/Switch Case Action Subsystem' */
    break;
  }

  /* End of SwitchCase: '<S110>/Switch Case' */

  /* If: '<S110>/If' */
  if (rtu_previousState == localB->Merge) {
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */
    STMF4Hal_IfActionSubsystem6(&localB->Merge2, &localB->Merge3,
      &localP->IfActionSubsystem6);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem6' */
  } else if (rtu_previousState == localB->Merge1) {
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    STMF4Hal_IfActionSubsystem6(&localB->Merge2, &localB->Merge3,
      &localP->IfActionSubsystem7);

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem7' */
  } else {
    /* Outputs for IfAction SubSystem: '<S110>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S119>/Action Port'
     */
    /* Merge: '<S110>/Merge3' incorporates:
     *  Constant: '<S119>/Constant'
     *  SignalConversion generated from: '<S119>/sequence_check'
     */
    localB->Merge3 = localP->Constant_Value;

    /* End of Outputs for SubSystem: '<S110>/If Action Subsystem8' */

    /* Update for IfAction SubSystem: '<S110>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S119>/Action Port'
     */
    /* Update for If: '<S110>/If' */
    localDW->IfActionSubsystem8_SubsysRanBC = 4;

    /* End of Update for SubSystem: '<S110>/If Action Subsystem8' */
  }

  /* End of If: '<S110>/If' */

  /* SignalConversion: '<S110>/Signal Conversion' */
  *rty_inValidHall = localB->Merge3;

  /* SignalConversion: '<S110>/Signal Conversion1' */
  *rty_direction = localB->Merge2;

  /* Switch: '<S110>/Switch' incorporates:
   *  Constant: '<S110>/Constant'
   *  RelationalOperator: '<S110>/Relational Operator'
   */
  if (localB->Merge3 != 0) {
    *rty_directional_speed_valid_fla = localP->Constant_Value_m;
  } else {
    *rty_directional_speed_valid_fla = (localB->Merge2 == rtu_previous_direction);
  }

  /* End of Switch: '<S110>/Switch' */
}

/*
 * Output and update for action system:
 *    '<S108>/Bad hall (glitch or wrong connection)'
 *    '<S84>/Bad hall (glitch or wrong connection)'
 *    '<S60>/Bad hall (glitch or wrong connection)'
 */
void Badhallglitchorwrongconnect(int16_T rtu_previous_direction, uint16_T
  *rty_inValidHall, int16_T *rty_direction, boolean_T
  *rty_directional_speed_valid_fla, P_Badhallglitchorwrongconnect_T *localP)
{
  /* SignalConversion generated from: '<S109>/inValidHall' incorporates:
   *  Constant: '<S109>/Constant'
   */
  *rty_inValidHall = localP->Constant_Value;

  /* SignalConversion: '<S109>/Signal Conversion' */
  *rty_direction = rtu_previous_direction;

  /* SignalConversion generated from: '<S109>/directional_speed_valid_flag' incorporates:
   *  Constant: '<S109>/Constant1'
   */
  *rty_directional_speed_valid_fla = localP->Constant1_Value;
}

/*
 * Output and update for action system:
 *    '<S41>/Hall Value of 1'
 *    '<S41>/Hall Value of 2'
 *    '<S41>/Hall Value of 3'
 *    '<S41>/Hall Value of 4'
 *    '<S41>/Hall Value of 5'
 *    '<S41>/Hall Value of 6'
 *    '<S41>/Hall Value of 7'
 *    '<S40>/Hall Value of 1'
 *    '<S40>/Hall Value of 2'
 *    '<S40>/Hall Value of 3'
 *    ...
 */
void STMF4Hall_HallValueof1(real32_T *rty_position, P_HallValueof1_STMF4Hall_T
  *localP)
{
  /* SignalConversion generated from: '<S51>/position' incorporates:
   *  Constant: '<S51>/Constant'
   */
  *rty_position = localP->Constant_Value;
}

static void STMF4Hall_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S16>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S16>/Analog to Digital Converter' */
  adcStructLoc.RegularNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC1;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 3U;
  adcStructLoc.InjectedNoOfConversion = 3U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_INTERRUPT_MODE, 0,
    ADC_READ, LL_ADC_INJ_SEQ_SCAN_ENABLE_3RANKS);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 0);
  obj->isSetupComplete = true;
}

static void STMF4Hall_PWMOutput_setupImpl(stm32cube_blocks_PWMOutput_ST_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<S147>/PWM Output' */
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S147>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH_CHN);
  enableTimerChannel2(obj->TimerHandle, ENABLE_CH_CHN);
  enableTimerChannel3(obj->TimerHandle, ENABLE_CH_CHN);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S147>/PWM Output' */
    enableCounter(obj->TimerHandle, true);
  }
}

static void STMF4Hall_SystemCore_setup_o(stm32cube_blocks_TimerBlock_S_T *obj)
{
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Timer' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM2;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Timer' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Timer' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function for TID0 */
void STMF4Hall_step0(void)             /* Sample time: [5.0E-5s, 0.0s] */
{
  uint32_T rtb_Timer;

  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<Root>/RT1' */
  STMF4Hall_B.pos = STMF4Hall_B.PositionUnit;

  /* RateTransition: '<Root>/RT2' incorporates:
   *  UnitDelay: '<S21>/Unit Delay'
   */
  STMF4Hall_B.posw = STMF4Hall_DW.UnitDelay_DSTATE;

  /* RateTransition: '<Root>/RT6' */
  STMF4Hall_B.testcounter = STMF4Hall_B.Output;

  /* MATLABSystem: '<S147>/PWM Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  setDutyCycleInPercentageChannel1(STMF4Hall_DW.obj_l.TimerHandle,
    STMF4Hall_P.Constant_Value_d);
  setDutyCycleInPercentageChannel2(STMF4Hall_DW.obj_l.TimerHandle,
    STMF4Hall_P.Constant_Value_d);
  setDutyCycleInPercentageChannel3(STMF4Hall_DW.obj_l.TimerHandle,
    STMF4Hall_P.Constant_Value_d);

  /* DataStoreRead: '<Root>/Data Store Read' */
  STMF4Hall_B.speedval = STMF4Hall_DW.GlobalSpeedValidity;

  /* DataStoreRead: '<Root>/Data Store Read1' */
  STMF4Hall_B.hallct = STMF4Hall_DW.HallAcapture;

  /* DataStoreRead: '<Root>/Data Store Read2' */
  STMF4Hall_B.derection = STMF4Hall_DW.GlobalDirection;

  /* MATLABSystem: '<Root>/Timer' */
  rtb_Timer = getTimerCounterValue(STMF4Hall_DW.obj_a.TimerHandle);

  /* RateTransition: '<Root>/RT7' */
  STMF4Hall_DW.RT7_Buffer0 = rtb_Timer;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  STMF4Hall_M->Timing.taskTime0 =
    ((time_T)(++STMF4Hall_M->Timing.clockTick0)) * STMF4Hall_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void STMF4Hall_step1(void)             /* Sample time: [0.1s, 0.0s] */
{
  GPIO_TypeDef * portNameLoc;
  real_T rtb_PulseGenerator;
  int32_T c;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (STMF4Hall_DW.clockTickCounter <
                        STMF4Hall_P.PulseGenerator_Duty) &&
    (STMF4Hall_DW.clockTickCounter >= 0) ? STMF4Hall_P.PulseGenerator_Amp : 0.0;
  if (STMF4Hall_DW.clockTickCounter >= STMF4Hall_P.PulseGenerator_Period - 1.0)
  {
    STMF4Hall_DW.clockTickCounter = 0;
  } else {
    STMF4Hall_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<S135>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (rtb_PulseGenerator != 0.0) {
    c = 32;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 32U);

  /* End of MATLABSystem: '<S135>/Digital Port Write' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  STMF4Hall_M->Timing.clockTick1++;
}

/* Model initialize function */
void STMF4Hall_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(STMF4Hall_M, -1);
  STMF4Hall_M->Timing.stepSize0 = 5.0E-5;

  /* External mode info */
  STMF4Hall_M->Sizes.checksums[0] = (3229423124U);
  STMF4Hall_M->Sizes.checksums[1] = (2458587892U);
  STMF4Hall_M->Sizes.checksums[2] = (3455748418U);
  STMF4Hall_M->Sizes.checksums[3] = (3205918579U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[101];
    STMF4Hall_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[2] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[3] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1_ar.HallValueof1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2_m.HallValueof1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3_b.HallValueof1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4_f.HallValueof1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5_k.HallValueof1_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6_j.HallValueof1_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7_hc.HallValueof1_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&STMF4Hall_DW.SpeedanddirectionarenotvalidPos;
    systemRan[14] = (sysRanDType *)&STMF4Hall_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[15] = (sysRanDType *)&STMF4Hall_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1_a.HallValueof1_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2_a.HallValueof1_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3_n.HallValueof1_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4_j.HallValueof1_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5_j.HallValueof1_SubsysRanBC;
    systemRan[21] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6_g.HallValueof1_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7_h.HallValueof1_SubsysRanBC;
    systemRan[23] = (sysRanDType *)&STMF4Hall_DW.veDirection_SubsysRanBC;
    systemRan[24] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1.HallValueof1_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2.HallValueof1_SubsysRanBC;
    systemRan[26] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3.HallValueof1_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4.HallValueof1_SubsysRanBC;
    systemRan[28] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5.HallValueof1_SubsysRanBC;
    systemRan[29] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6.HallValueof1_SubsysRanBC;
    systemRan[30] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7.HallValueof1_SubsysRanBC;
    systemRan[31] = (sysRanDType *)&STMF4Hall_DW.veDirection_SubsysRanBC_e;
    systemRan[32] = (sysRanDType *)&STMF4Hall_DW.first_order_SubsysRanBC;
    systemRan[33] = (sysRanDType *)&STMF4Hall_DW.second_order_SubsysRanBC;
    systemRan[34] = (sysRanDType *)&STMF4Hall_DW.Subsystem1_SubsysRanBC;
    systemRan[35] = (sysRanDType *)&STMF4Hall_DW.SpeedanddirectionarevalidUsespe;
    systemRan[36] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[37] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[38] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[39] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[40] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnecti_nn.Badhallglitchorwrongconnection_;
    systemRan[41] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[42] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[43] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[44] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[45] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[46] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[47] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[48] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[49] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem8_SubsysRanBC;
    systemRan[50] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.SwitchCaseActionSubsystem_Subsy;
    systemRan[51] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[52] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[53] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[54] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[55] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[56] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[57] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[58] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnectio_n.Badhallglitchorwrongconnection_;
    systemRan[59] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[60] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[61] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[62] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[63] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[64] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[65] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[66] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[67] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem8_SubsysRanBC;
    systemRan[68] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.SwitchCaseActionSubsystem_Subsy;
    systemRan[69] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[70] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[71] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[72] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[73] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[74] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[75] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[76] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnection.Badhallglitchorwrongconnection_;
    systemRan[77] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[78] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[79] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[80] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[81] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[82] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[83] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[84] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[85] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem8_SubsysRanBC;
    systemRan[86] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.SwitchCaseActionSubsystem_Subsy;
    systemRan[87] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[88] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[89] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[90] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[91] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[92] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[93] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[94] = &rtAlwaysEnabled;
    systemRan[95] = &rtAlwaysEnabled;
    systemRan[96] = &rtAlwaysEnabled;
    systemRan[97] = &rtAlwaysEnabled;
    systemRan[98] = &rtAlwaysEnabled;
    systemRan[99] = &rtAlwaysEnabled;
    systemRan[100] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(STMF4Hall_M->extModeInfo,
      &STMF4Hall_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(STMF4Hall_M->extModeInfo, STMF4Hall_M->Sizes.checksums);
    rteiSetTPtr(STMF4Hall_M->extModeInfo, rtmGetTPtr(STMF4Hall_M));
  }

  {
    uint32_T pinReadLoc;
    uint32_T pinReadLoc_0;
    uint32_T pinReadLoc_1;

    /* Start for RateTransition: '<Root>/RT7' */
    STMF4Hall_B.RT7 = STMF4Hall_P.RT7_InitialCondition;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
    STMF4Hall_DW.HallAcapture = STMF4Hall_P.DataStoreMemory10_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
    STMF4Hall_DW.GlobalDirection = STMF4Hall_P.DataStoreMemory5_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
    STMF4Hall_DW.GlobalSpeedValidity = STMF4Hall_P.DataStoreMemory7_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    STMF4Hall_DW.GlobalHallState = STMF4Hall_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory12' */
    STMF4Hall_DW.HallCcapture = STMF4Hall_P.DataStoreMemory12_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
    STMF4Hall_DW.Timercntprev = STMF4Hall_P.DataStoreMemory3_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
    STMF4Hall_DW.GlobalSpeedCount = STMF4Hall_P.DataStoreMemory6_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.DataStoreMemory8_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
    STMF4Hall_DW.HallBcapture = STMF4Hall_P.DataStoreMemory11_InitialValue;

    /* InitializeConditions for RateTransition: '<Root>/RT7' */
    STMF4Hall_DW.RT7_Buffer0 = STMF4Hall_P.RT7_InitialCondition;

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/ADC SIC'
     */

    /* System initialize for function-call system: '<Root>/ADC SIC' */
    STMF4Hall_M->Timing.clockTick5 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S23>/validityDelay' */
    STMF4Hall_DW.validityDelay_DSTATE =
      STMF4Hall_P.validityDelay_InitialCondition;

    /* InitializeConditions for Delay: '<S23>/speedCountDelay' */
    STMF4Hall_DW.speedCountDelay_DSTATE =
      STMF4Hall_P.speedCountDelay_InitialConditio;

    /* InitializeConditions for RelationalOperator: '<S28>/Compare' incorporates:
     *  Delay: '<S24>/Delay One Step1'
     */
    STMF4Hall_DW.DelayOneStep1_DSTATE =
      STMF4Hall_P.DelayOneStep1_InitialCondition;

    /* InitializeConditions for Delay: '<S24>/Delay One Step' */
    STMF4Hall_DW.DelayOneStep_DSTATE =
      STMF4Hall_P.SoftwareWatchdogTimer_maxCount;

    /* InitializeConditions for UnitDelay: '<S11>/Output' */
    STMF4Hall_DW.Output_DSTATE = STMF4Hall_P.Output_InitialCondition;

    /* SystemInitialize for IfAction SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' */
    /* SystemInitialize for Enabled SubSystem: '<S26>/Subsystem1' */
    /* SystemInitialize for Merge: '<S39>/Merge' */
    STMF4Hall_B.Merge = STMF4Hall_P.Merge_InitialOutput;

    /* End of SystemInitialize for SubSystem: '<S26>/Subsystem1' */
    /* End of SystemInitialize for SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' */

    /* Start for MATLABSystem: '<S16>/Analog to Digital Converter' */
    STMF4Hall_DW.obj.isInitialized = 0;
    STMF4Hall_DW.obj.matlabCodegenIsDeleted = false;
    STMF4Hall_SystemCore_setup(&STMF4Hall_DW.obj);

    /* SystemInitialize for Gain: '<S22>/PositionUnit' incorporates:
     *  Outport: '<S1>/Pos_PU'
     */
    STMF4Hall_B.PositionUnit = STMF4Hall_P.Pos_PU_Y0;

    /* SystemInitialize for UnitDelay: '<S11>/Output' incorporates:
     *  Outport: '<S1>/Out1'
     */
    STMF4Hall_B.Output = STMF4Hall_P.Out1_Y0_h;

    /* SystemInitialize for Outport: '<S1>/Pos_w' incorporates:
     *  Sum: '<S21>/Add1'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    STMF4Hall_DW.UnitDelay_DSTATE = STMF4Hall_P.Pos_w_Y0;

    /* End of SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HC'
     */
    /* System initialize for function-call system: '<Root>/HC' */
    STMF4Hall_M->Timing.clockTick2 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S4>/Delay' */
    STMF4Hall_DW.Delay_DSTATE_k = STMF4Hall_P.Delay_InitialCondition;

    /* SystemInitialize for IfAction SubSystem: '<S108>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls, &STMF4Hall_P.ValidHalls);

    /* End of SystemInitialize for SubSystem: '<S108>/Valid Halls' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HB'
     */
    /* System initialize for function-call system: '<Root>/HB' */
    STMF4Hall_M->Timing.clockTick3 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S3>/Delay' */
    STMF4Hall_DW.Delay_DSTATE_e = STMF4Hall_P.Delay_InitialCondition_c;

    /* SystemInitialize for IfAction SubSystem: '<S84>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls_d,
      &STMF4Hall_P.ValidHalls_d);

    /* End of SystemInitialize for SubSystem: '<S84>/Valid Halls' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HA'
     */

    /* System initialize for function-call system: '<Root>/HA' */
    STMF4Hall_M->Timing.clockTick4 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S2>/Delay' */
    STMF4Hall_DW.Delay_DSTATE = STMF4Hall_P.Delay_InitialCondition_f;

    /* SystemInitialize for IfAction SubSystem: '<S60>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls_i,
      &STMF4Hall_P.ValidHalls_i);

    /* End of SystemInitialize for SubSystem: '<S60>/Valid Halls' */

    /* End of SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */

    /* Start for MATLABSystem: '<S147>/PWM Output' */
    STMF4Hall_DW.obj_l.matlabCodegenIsDeleted = false;
    STMF4Hall_DW.obj_l.isSetupComplete = false;
    STMF4Hall_DW.obj_l.isInitialized = 1;
    STMF4Hall_PWMOutput_setupImpl(&STMF4Hall_DW.obj_l);
    STMF4Hall_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Timer' */
    STMF4Hall_DW.obj_a.isInitialized = 0;
    STMF4Hall_DW.obj_a.matlabCodegenIsDeleted = false;
    STMF4Hall_SystemCore_setup_o(&STMF4Hall_DW.obj_a);

    /* Outputs for Atomic SubSystem: '<Root>/Initialize Function' */
    /* MATLABSystem: '<S141>/Digital Port Read' */
    pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

    /* MATLABSystem: '<S143>/Digital Port Read' */
    pinReadLoc_0 = LL_GPIO_ReadInputPort(GPIOC);

    /* MATLABSystem: '<S145>/Digital Port Read' */
    pinReadLoc_1 = LL_GPIO_ReadInputPort(GPIOC);

    /* Sum: '<S136>/Sum' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write'
     *  Gain: '<S136>/Gain'
     *  Gain: '<S136>/Gain1'
     *  Gain: '<S136>/Gain2'
     *  MATLABSystem: '<S141>/Digital Port Read'
     *  MATLABSystem: '<S143>/Digital Port Read'
     *  MATLABSystem: '<S145>/Digital Port Read'
     * */
    STMF4Hall_DW.GlobalHallState = (uint8_T)(((uint32_T)((pinReadLoc & 1024U) !=
      0U ? STMF4Hall_P.Gain_Gain_m >> 5 : 0) + (uint32_T)((pinReadLoc_0 & 2048U)
      != 0U ? STMF4Hall_P.Gain1_Gain_p >> 6 : 0)) + (uint32_T)((pinReadLoc_1 &
      4096U) != 0U ? STMF4Hall_P.Gain2_Gain_n >> 7 : 0));

    /* End of Outputs for SubSystem: '<Root>/Initialize Function' */
  }
}

/* Model terminate function */
void STMF4Hall_terminate(void)
{
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/ADC SIC'
   */
  /* Termination for function-call system: '<Root>/ADC SIC' */

  /* Terminate for MATLABSystem: '<S16>/Analog to Digital Converter' */
  if (!STMF4Hall_DW.obj.matlabCodegenIsDeleted) {
    STMF4Hall_DW.obj.matlabCodegenIsDeleted = true;
    if ((STMF4Hall_DW.obj.isInitialized == 1) &&
        STMF4Hall_DW.obj.isSetupComplete) {
      ADC_Handle_Deinit(STMF4Hall_DW.obj.ADCHandle, ADC_INTERRUPT_MODE, 0);
    }
  }

  /* End of Terminate for MATLABSystem: '<S16>/Analog to Digital Converter' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' */

  /* Terminate for MATLABSystem: '<S147>/PWM Output' */
  if (!STMF4Hall_DW.obj_l.matlabCodegenIsDeleted) {
    STMF4Hall_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((STMF4Hall_DW.obj_l.isInitialized == 1) &&
        STMF4Hall_DW.obj_l.isSetupComplete) {
      disableCounter(STMF4Hall_DW.obj_l.TimerHandle);
      disableTimerInterrupts(STMF4Hall_DW.obj_l.TimerHandle, 0);
      disableTimerChannel1(STMF4Hall_DW.obj_l.TimerHandle, ENABLE_CH_CHN);
      disableTimerChannel2(STMF4Hall_DW.obj_l.TimerHandle, ENABLE_CH_CHN);
      disableTimerChannel3(STMF4Hall_DW.obj_l.TimerHandle, ENABLE_CH_CHN);
    }
  }

  /* End of Terminate for MATLABSystem: '<S147>/PWM Output' */
  /* Terminate for MATLABSystem: '<Root>/Timer' */
  if (!STMF4Hall_DW.obj_a.matlabCodegenIsDeleted) {
    STMF4Hall_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((STMF4Hall_DW.obj_a.isInitialized == 1) &&
        STMF4Hall_DW.obj_a.isSetupComplete) {
      disableCounter(STMF4Hall_DW.obj_a.TimerHandle);
      disableTimerInterrupts(STMF4Hall_DW.obj_a.TimerHandle, 0);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Timer' */
}

void STMF4Hall_configure_interrupts(void)
{
  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(33,&ADC_IRQHandler,2);
  MW_NVIC_EnableIRQ(33);

  /* Register interrupt service routine */
  MW_NVIC_ConfigureIRQ(55,&EXTI15_10_IRQHandler,2);
  MW_NVIC_EnableIRQ(55);
}

/* Hardware Interrupt Block: '<S131>/Hardware Interrupt' */
void EXTI15_10_IRQHandler(void)
{
  uint32_T priority_mask;
  priority_mask = MW_HWI_MaskInterrupt();

  /* Event: EXTI12 Event */
  /* Check event EXTI12 Event occurred */
  if (0 != ((0 != LL_EXTI_IsEnabledIT_0_31(LL_EXTI_LINE_12)) && (0 !=
        LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_12)))) {
    /* Clear occurred EXTI12 Event event */
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_12);
    if (1 == runModel) {
      {
        /* Reset subsysRan breadcrumbs */
        srClearBC
          (STMF4Hall_DW.ValidHalls.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.ValidHalls.IfActionSubsystem8_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC
          (STMF4Hall_DW.ValidHalls.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.ValidHalls.SwitchCaseActionSubsystem_Subsy);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC
          (STMF4Hall_DW.Badhallglitchorwrongconnection.Badhallglitchorwrongconnection_);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.HC_SubsysRanBC);

        /* RateTransition: '<Root>/RT7' */
        STMF4Hall_B.RT7 = STMF4Hall_DW.RT7_Buffer0;

        /* S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HC' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          uint8_T rtb_Hallsum;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick2 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S4>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S125>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S127>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S129>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S107>/Sum' incorporates:
           *  Gain: '<S107>/Gain'
           *  Gain: '<S107>/Gain1'
           *  Gain: '<S107>/Gain2'
           *  MATLABSystem: '<S125>/Digital Port Read'
           *  MATLABSystem: '<S127>/Digital Port Read'
           *  MATLABSystem: '<S129>/Digital Port Read'
           * */
          rtb_Hallsum = (uint8_T)(((uint32_T)((pinReadLoc & 1024U) != 0U ?
            STMF4Hall_P.Gain_Gain_f >> 5 : 0) + (uint32_T)((pinReadLoc_p & 2048U)
            != 0U ? STMF4Hall_P.Gain1_Gain_a >> 6 : 0)) + (uint32_T)
            ((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain >> 7 : 0));

          /* SwitchCase: '<S106>/Detects if the halls reading is valid' incorporates:
           *  DataTypeConversion: '<S106>/Data Type Conversion1'
           */
          switch (rtb_Hallsum) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S108>/Valid Halls' incorporates:
             *  ActionPort: '<S110>/Action Port'
             */
            /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S4>/Data Store Read'
             *  DataStoreRead: '<S4>/Data Store Read2'
             *  DataTypeConversion: '<S106>/Data Type Conversion2'
             */
            STMF4Hall_ValidHalls((uint16_T)rtb_Hallsum, (uint16_T)
                                 STMF4Hall_DW.GlobalHallState,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls,
                                 &STMF4Hall_DW.ValidHalls,
                                 &STMF4Hall_P.ValidHalls);

            /* End of Outputs for SubSystem: '<S108>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S108>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S109>/Action Port'
             */
            /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S4>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnection);

            /* End of Outputs for SubSystem: '<S108>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S106>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S106>/counterSize' incorporates:
           *  DataStoreWrite: '<S4>/Data Store Write2'
           *  DataTypeConversion: '<S4>/Data Type Conversion'
           *  DataTypeConversion: '<S4>/Data Type Conversion1'
           *  DataTypeConversion: '<S4>/Data Type Conversion4'
           *  Delay: '<S4>/Delay'
           *  Gain: '<S4>/Gain'
           *  Sum: '<S4>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)(((uint64_T)(uint32_T)
            ((int32_T)STMF4Hall_B.RT7 - (int32_T)STMF4Hall_DW.Delay_DSTATE_k) *
            STMF4Hall_P.Gain_Gain_j) >> 31);

          /* DataTypeConversion: '<S108>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S4>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S4>/Data Store Write4' incorporates:
           *  Constant: '<S106>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_g;

          /* DataStoreWrite: '<S4>/Data Store Write6' */
          STMF4Hall_DW.GlobalHallState = rtb_Hallsum;

          /* DataStoreWrite: '<S4>/Data Store Write5' incorporates:
           *  Constant: '<S4>/Constant1'
           */
          STMF4Hall_DW.HallCcapture = STMF4Hall_P.Constant1_Value;

          /* Update for Delay: '<S4>/Delay' incorporates:
           *  DataStoreRead: '<S4>/Data Store Read1'
           */
          STMF4Hall_DW.Delay_DSTATE_k = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HC_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */
      }

      currentTime = (extmodeSimulationTime_T) ((STMF4Hall_M->Timing.clockTick2) *
        5.0E-5);
      extmodeEvent(2,currentTime);
    }
  }

  /* Event: EXTI11 Event */
  /* Check event EXTI11 Event occurred */
  if (0 != ((0 != LL_EXTI_IsEnabledIT_0_31(LL_EXTI_LINE_11)) && (0 !=
        LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_11)))) {
    /* Clear occurred EXTI11 Event event */
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_11);
    if (1 == runModel) {
      {
        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.HB_SubsysRanBC);

        /* RateTransition: '<Root>/RT7' */
        STMF4Hall_B.RT7 = STMF4Hall_DW.RT7_Buffer0;

        /* S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HB' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          uint8_T rtb_Hallsum;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick3 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S3>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S101>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S103>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S105>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S83>/Sum' incorporates:
           *  Gain: '<S83>/Gain'
           *  Gain: '<S83>/Gain1'
           *  Gain: '<S83>/Gain2'
           *  MATLABSystem: '<S101>/Digital Port Read'
           *  MATLABSystem: '<S103>/Digital Port Read'
           *  MATLABSystem: '<S105>/Digital Port Read'
           * */
          rtb_Hallsum = (uint8_T)(((uint32_T)((pinReadLoc & 1024U) != 0U ?
            STMF4Hall_P.Gain_Gain_c >> 5 : 0) + (uint32_T)((pinReadLoc_p & 2048U)
            != 0U ? STMF4Hall_P.Gain1_Gain_c >> 6 : 0)) + (uint32_T)
            ((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain_d >> 7 : 0));

          /* SwitchCase: '<S82>/Detects if the halls reading is valid' incorporates:
           *  DataTypeConversion: '<S82>/Data Type Conversion1'
           */
          switch (rtb_Hallsum) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S84>/Valid Halls' incorporates:
             *  ActionPort: '<S86>/Action Port'
             */
            /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S3>/Data Store Read'
             *  DataStoreRead: '<S3>/Data Store Read2'
             *  DataTypeConversion: '<S82>/Data Type Conversion2'
             */
            STMF4Hall_ValidHalls((uint16_T)rtb_Hallsum, (uint16_T)
                                 STMF4Hall_DW.GlobalHallState,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls_d,
                                 &STMF4Hall_DW.ValidHalls_d,
                                 &STMF4Hall_P.ValidHalls_d);

            /* End of Outputs for SubSystem: '<S84>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S84>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S85>/Action Port'
             */
            /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S3>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnectio_n);

            /* End of Outputs for SubSystem: '<S84>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S82>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S82>/counterSize' incorporates:
           *  DataStoreWrite: '<S3>/Data Store Write2'
           *  DataTypeConversion: '<S3>/Data Type Conversion'
           *  DataTypeConversion: '<S3>/Data Type Conversion1'
           *  DataTypeConversion: '<S3>/Data Type Conversion4'
           *  Delay: '<S3>/Delay'
           *  Gain: '<S3>/Gain'
           *  Sum: '<S3>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)(((uint64_T)(uint32_T)
            ((int32_T)STMF4Hall_B.RT7 - (int32_T)STMF4Hall_DW.Delay_DSTATE_e) *
            STMF4Hall_P.Gain_Gain_i) >> 31);

          /* DataTypeConversion: '<S84>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S3>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S3>/Data Store Write4' incorporates:
           *  Constant: '<S82>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_l;

          /* DataStoreWrite: '<S3>/Data Store Write6' */
          STMF4Hall_DW.GlobalHallState = rtb_Hallsum;

          /* DataStoreWrite: '<S3>/Data Store Write5' incorporates:
           *  Constant: '<S3>/Constant1'
           */
          STMF4Hall_DW.HallBcapture = STMF4Hall_P.Constant1_Value_a;

          /* Update for Delay: '<S3>/Delay' incorporates:
           *  DataStoreRead: '<S3>/Data Store Read1'
           */
          STMF4Hall_DW.Delay_DSTATE_e = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HB_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */
      }

      currentTime = (extmodeSimulationTime_T) ((STMF4Hall_M->Timing.clockTick3) *
        5.0E-5);
      extmodeEvent(3,currentTime);
    }
  }

  /* Event: EXTI10 Event */
  /* Check event EXTI10 Event occurred */
  if (0 != ((0 != LL_EXTI_IsEnabledIT_0_31(LL_EXTI_LINE_10)) && (0 !=
        LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_10)))) {
    /* Clear occurred EXTI10 Event event */
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_10);
    if (1 == runModel) {
      {
        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.HA_SubsysRanBC);

        /* RateTransition: '<Root>/RT7' */
        STMF4Hall_B.RT7 = STMF4Hall_DW.RT7_Buffer0;

        /* S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HA' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          uint8_T rtb_Hallsum;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick4 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S2>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S77>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S79>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S81>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S59>/Sum' incorporates:
           *  Gain: '<S59>/Gain'
           *  Gain: '<S59>/Gain1'
           *  Gain: '<S59>/Gain2'
           *  MATLABSystem: '<S77>/Digital Port Read'
           *  MATLABSystem: '<S79>/Digital Port Read'
           *  MATLABSystem: '<S81>/Digital Port Read'
           * */
          rtb_Hallsum = (uint8_T)(((uint32_T)((pinReadLoc & 1024U) != 0U ?
            STMF4Hall_P.Gain_Gain_ca >> 5 : 0) + (uint32_T)((pinReadLoc_p &
            2048U) != 0U ? STMF4Hall_P.Gain1_Gain_i >> 6 : 0)) + (uint32_T)
            ((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain_k >> 7 : 0));

          /* SwitchCase: '<S58>/Detects if the halls reading is valid' incorporates:
           *  DataTypeConversion: '<S58>/Data Type Conversion1'
           */
          switch (rtb_Hallsum) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S60>/Valid Halls' incorporates:
             *  ActionPort: '<S62>/Action Port'
             */
            /* DataStoreWrite: '<S2>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S2>/Data Store Read'
             *  DataStoreRead: '<S2>/Data Store Read2'
             *  DataTypeConversion: '<S58>/Data Type Conversion2'
             */
            STMF4Hall_ValidHalls((uint16_T)rtb_Hallsum, (uint16_T)
                                 STMF4Hall_DW.GlobalHallState,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls_i,
                                 &STMF4Hall_DW.ValidHalls_i,
                                 &STMF4Hall_P.ValidHalls_i);

            /* End of Outputs for SubSystem: '<S60>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S60>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S61>/Action Port'
             */
            /* DataStoreWrite: '<S2>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S2>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnecti_nn);

            /* End of Outputs for SubSystem: '<S60>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S58>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S58>/counterSize' incorporates:
           *  DataStoreWrite: '<S2>/Data Store Write2'
           *  DataTypeConversion: '<S2>/Data Type Conversion'
           *  DataTypeConversion: '<S2>/Data Type Conversion1'
           *  DataTypeConversion: '<S2>/Data Type Conversion4'
           *  Delay: '<S2>/Delay'
           *  Gain: '<S2>/Gain'
           *  Sum: '<S2>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)(((uint64_T)(uint32_T)
            ((int32_T)STMF4Hall_B.RT7 - (int32_T)STMF4Hall_DW.Delay_DSTATE) *
            STMF4Hall_P.Gain_Gain_p) >> 31);

          /* DataTypeConversion: '<S60>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S2>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S2>/Data Store Write4' incorporates:
           *  Constant: '<S58>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_m;

          /* DataStoreWrite: '<S2>/Data Store Write6' */
          STMF4Hall_DW.GlobalHallState = rtb_Hallsum;

          /* DataStoreWrite: '<S2>/Data Store Write5' incorporates:
           *  Constant: '<S2>/Constant1'
           */
          STMF4Hall_DW.HallAcapture = STMF4Hall_P.Constant1_Value_d;

          /* Update for Delay: '<S2>/Delay' incorporates:
           *  DataStoreRead: '<S2>/Data Store Read1'
           */
          STMF4Hall_DW.Delay_DSTATE = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HA_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S131>/Hardware Interrupt' */
      }

      currentTime = (extmodeSimulationTime_T) ((STMF4Hall_M->Timing.clockTick4) *
        5.0E-5);
      extmodeEvent(4,currentTime);
    }
  }

  __ISB();
  __DSB();
  MW_HWI_UnMaskInterrupt(priority_mask);
}

/* Hardware Interrupt Block: '<S133>/Hardware Interrupt' */
void ADC_IRQHandler(void)
{
  uint32_T priority_mask;
  priority_mask = MW_HWI_MaskInterrupt();

  /* Event: ADC1 Inj EoCS */
  /* Check event ADC1 Inj EoCS occurred */
  if (0 != (
#if defined(MW_ADC1_ENABLED) && (defined(MW_ADC1_INJ_IRQ_ENABLED) && (MW_ADC1_INJ_IRQ_ENABLED==1))
            (0 != LL_ADC_IsEnabledIT_JEOS(ADC1)) && (0 != ADC_IsActiveFlagJEOS
        (&(MW_ADC1_VAR)))
#else
            (0 != LL_ADC_IsEnabledIT_JEOS(ADC1)) && (0 !=
        LL_ADC_IsActiveFlag_JEOS(ADC1))
#endif
            )) {
    /* Clear occurred ADC1 Inj EoCS event */
    LL_ADC_ClearFlag_JEOS(ADC1);
    if (1 == runModel) {
      {
        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.IfActionSubsystem_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.IfActionSubsystem1_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.HallValueof1.HallValueof1_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.veDirection_SubsysRanBC_e);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.veDirection_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.second_order_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.first_order_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.Subsystem1_SubsysRanBC);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.SpeedanddirectionarevalidUsespe);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.SpeedanddirectionarenotvalidPos);

        /* Reset subsysRan breadcrumbs */
        srClearBC(STMF4Hall_DW.ADCSIC_SubsysRanBC);

        /* S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/ADC SIC' */
        {
          real_T tmp_p;
          real32_T rtb_Merge1_hg;
          real32_T rtb_Product1;
          real32_T rtb_Product_f;
          uint32_T rtb_counterSize1;
          uint32_T tmp_e;
          uint16_T tmp[3];
          uint16_T Switch;
          uint16_T rtb_FixPtSum1;
          boolean_T OR;
          STMF4Hall_M->Timing.clockTick5 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreRead: '<S14>/Data Store Read6' */
          rtb_FixPtSum1 = STMF4Hall_DW.HallStateChangeFlag;

          /* Switch: '<S22>/Switch' incorporates:
           *  Constant: '<S22>/WatchDog'
           *  DataStoreRead: '<S14>/Data Store Read6'
           *  DataStoreWrite: '<S14>/Data Store Write3'
           */
          if (STMF4Hall_DW.HallStateChangeFlag != 0) {
            STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.WatchDog_Value;
          }

          /* End of Switch: '<S22>/Switch' */

          /* Switch: '<S23>/Switch' incorporates:
           *  Constant: '<S23>/Order'
           */
          if (STMF4Hall_P.Order_Value > STMF4Hall_P.Switch_Threshold) {
            /* Switch: '<S23>/Switch' */
            Switch = rtb_FixPtSum1;
          } else {
            /* Switch: '<S23>/Switch' */
            Switch = STMF4Hall_P.Order_Value;
          }

          /* End of Switch: '<S23>/Switch' */

          /* Delay: '<S23>/validityDelay' incorporates:
           *  Delay: '<S23>/speedCountDelay'
           */
          if (Switch != 0) {
            /* Delay: '<S23>/validityDelay' */
            STMF4Hall_B.validityDelay = STMF4Hall_DW.validityDelay_DSTATE;

            /* Delay: '<S23>/speedCountDelay' */
            STMF4Hall_B.speedCountDelay = STMF4Hall_DW.speedCountDelay_DSTATE;
          }

          /* End of Delay: '<S23>/validityDelay' */

          /* DataTypeConversion: '<S22>/counterSize1' incorporates:
           *  DataStoreRead: '<S14>/Data Store Read'
           *  DataStoreRead: '<S14>/Data Store Read2'
           *  DataStoreRead: '<S14>/Data Store Read7'
           *  MinMax: '<S14>/Min'
           */
          tmp_p = floor(fmin(fmin(STMF4Hall_DW.HallAcapture,
            STMF4Hall_DW.HallBcapture), STMF4Hall_DW.HallCcapture));
          if (rtIsNaN(tmp_p) || rtIsInf(tmp_p)) {
            tmp_p = 0.0;
          } else {
            tmp_p = fmod(tmp_p, 4.294967296E+9);
          }

          rtb_counterSize1 = tmp_p < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp_p :
            (uint32_T)tmp_p;

          /* End of DataTypeConversion: '<S22>/counterSize1' */

          /* Logic: '<S24>/OR' incorporates:
           *  DataTypeConversion: '<S22>/Data Type Conversion4'
           *  Delay: '<S24>/Delay One Step1'
           */
          OR = (STMF4Hall_DW.DelayOneStep1_DSTATE || (rtb_FixPtSum1 != 0));

          /* Delay: '<S24>/Delay One Step' incorporates:
           *  DataTypeConversion: '<S22>/Data Type Conversion4'
           */
          if (OR) {
            if (rtb_FixPtSum1 != 0) {
              STMF4Hall_DW.DelayOneStep_DSTATE =
                STMF4Hall_P.SoftwareWatchdogTimer_maxCount;
            }

            /* Delay: '<S24>/Delay One Step' incorporates:
             *  DataTypeConversion: '<S22>/Data Type Conversion4'
             */
            STMF4Hall_B.DelayOneStep = STMF4Hall_DW.DelayOneStep_DSTATE;
          }

          /* End of Delay: '<S24>/Delay One Step' */

          /* RelationalOperator: '<S28>/Compare' incorporates:
           *  Constant: '<S28>/Constant'
           */
          STMF4Hall_DW.DelayOneStep1_DSTATE = (STMF4Hall_B.DelayOneStep >
            STMF4Hall_P.Constant_Value_dk);

          /* Switch: '<S27>/watchdog check' incorporates:
           *  Constant: '<S27>/Constant'
           */
          if (STMF4Hall_DW.DelayOneStep1_DSTATE) {
            /* MinMax: '<S27>/Max' incorporates:
             *  DataStoreRead: '<S14>/Data Store Read3'
             */
            if (STMF4Hall_DW.GlobalSpeedCount >= rtb_counterSize1) {
              tmp_e = STMF4Hall_DW.GlobalSpeedCount;
            } else {
              tmp_e = rtb_counterSize1;
            }

            /* Switch: '<S27>/speed check' incorporates:
             *  Constant: '<S27>/Constant'
             *  DataStoreRead: '<S14>/Data Store Read5'
             *  DataTypeConversion: '<S23>/Data Type Conversion'
             *  Logic: '<S23>/Logical Operator'
             *  MinMax: '<S27>/Max'
             */
            if (tmp_e >= STMF4Hall_P.speedcheck_Threshold) {
              rtb_FixPtSum1 = STMF4Hall_P.Constant_Value_lo;
            } else {
              rtb_FixPtSum1 = (uint16_T)((STMF4Hall_DW.GlobalSpeedValidity != 0)
                || STMF4Hall_B.validityDelay);
            }

            /* End of Switch: '<S27>/speed check' */
          } else {
            rtb_FixPtSum1 = STMF4Hall_P.Constant_Value_lo;
          }

          /* End of Switch: '<S27>/watchdog check' */

          /* If: '<S22>/If' incorporates:
           *  Constant: '<S26>/PositionEnable'
           */
          if (rtb_FixPtSum1 != 0) {
            /* Outputs for IfAction SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* If: '<S26>/If' incorporates:
             *  DataStoreRead: '<S14>/Data Store Read4'
             */
            if (STMF4Hall_DW.GlobalDirection > 0) {
              /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem' incorporates:
               *  ActionPort: '<S37>/Action Port'
               */
              /* SignalConversion generated from: '<S37>/In1' incorporates:
               *  Constant: '<S26>/SpeedConst'
               *  DataStoreRead: '<S14>/Data Store Read3'
               *  DataTypeConversion: '<S26>/SpeedConstData'
               *  DataTypeConversion: '<S26>/currentSpeedData'
               *  Gain: '<S26>/SpeedGain'
               *  Product: '<S26>/Divide'
               */
              rtb_Product_f = (real32_T)STMF4Hall_P.SpeedConst_Value / (real32_T)
                STMF4Hall_DW.GlobalSpeedCount * STMF4Hall_P.SpeedGain_Gain;

              /* End of Outputs for SubSystem: '<S26>/If Action Subsystem' */

              /* Update for IfAction SubSystem: '<S26>/If Action Subsystem' incorporates:
               *  ActionPort: '<S37>/Action Port'
               */
              /* Update for If: '<S26>/If' */
              STMF4Hall_DW.IfActionSubsystem_SubsysRanBC = 4;

              /* End of Update for SubSystem: '<S26>/If Action Subsystem' */
            } else {
              /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
               *  ActionPort: '<S38>/Action Port'
               */
              /* UnaryMinus: '<S38>/Unary Minus' incorporates:
               *  Constant: '<S26>/SpeedConst'
               *  DataStoreRead: '<S14>/Data Store Read3'
               *  DataTypeConversion: '<S26>/SpeedConstData'
               *  DataTypeConversion: '<S26>/currentSpeedData'
               *  Gain: '<S26>/SpeedGain'
               *  Product: '<S26>/Divide'
               */
              rtb_Product_f = -((real32_T)STMF4Hall_P.SpeedConst_Value /
                                (real32_T)STMF4Hall_DW.GlobalSpeedCount *
                                STMF4Hall_P.SpeedGain_Gain);

              /* End of Outputs for SubSystem: '<S26>/If Action Subsystem1' */

              /* Update for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
               *  ActionPort: '<S38>/Action Port'
               */
              /* Update for If: '<S26>/If' */
              STMF4Hall_DW.IfActionSubsystem1_SubsysRanBC = 4;

              /* End of Update for SubSystem: '<S26>/If Action Subsystem1' */
            }

            /* End of If: '<S26>/If' */

            /* Outputs for Enabled SubSystem: '<S26>/Subsystem1' incorporates:
             *  EnablePort: '<S39>/Enable'
             */
            if (STMF4Hall_P.PositionEnable_Value > 0) {
              /* If: '<S39>/If1' incorporates:
               *  Constant: '<S39>/Constant'
               */
              if (STMF4Hall_P.Constant_Value > 1.0) {
                /* Outputs for IfAction SubSystem: '<S39>/second_order' incorporates:
                 *  ActionPort: '<S43>/Action Port'
                 */
                /* Product: '<S43>/Divide1' incorporates:
                 *  DataStoreRead: '<S14>/Data Store Read3'
                 *  DataTypeConversion: '<S43>/countData'
                 *  DataTypeConversion: '<S43>/currentSpeedData'
                 */
                rtb_Product1 = (real32_T)rtb_counterSize1 / (real32_T)
                  STMF4Hall_DW.GlobalSpeedCount;

                /* Gain: '<S43>/Gain' incorporates:
                 *  Constant: '<S43>/Constant'
                 *  DataTypeConversion: '<S43>/countData'
                 *  DataTypeConversion: '<S43>/previousSpeedData'
                 *  Gain: '<S43>/Gain1'
                 *  Product: '<S43>/Divide'
                 *  Product: '<S43>/Product'
                 *  Sum: '<S43>/Sum'
                 *  Sum: '<S43>/Sum1'
                 */
                rtb_Product1 = ((rtb_Product1 - (real32_T)rtb_counterSize1 /
                                 (real32_T)STMF4Hall_B.speedCountDelay) *
                                STMF4Hall_P.Gain1_Gain +
                                STMF4Hall_P.Constant_Value_f) * rtb_Product1 *
                  STMF4Hall_P.Gain_Gain;

                /* End of Outputs for SubSystem: '<S39>/second_order' */

                /* Update for IfAction SubSystem: '<S39>/second_order' incorporates:
                 *  ActionPort: '<S43>/Action Port'
                 */
                /* Update for If: '<S39>/If1' */
                STMF4Hall_DW.second_order_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S39>/second_order' */
              } else {
                /* Outputs for IfAction SubSystem: '<S39>/first_order' incorporates:
                 *  ActionPort: '<S42>/Action Port'
                 */
                /* Gain: '<S42>/Gain' incorporates:
                 *  DataStoreRead: '<S14>/Data Store Read3'
                 *  DataTypeConversion: '<S42>/countData'
                 *  DataTypeConversion: '<S42>/currentSpeedData'
                 *  Product: '<S42>/Divide'
                 */
                rtb_Product1 = (real32_T)rtb_counterSize1 / (real32_T)
                  STMF4Hall_DW.GlobalSpeedCount * STMF4Hall_P.Gain_Gain_o;

                /* End of Outputs for SubSystem: '<S39>/first_order' */

                /* Update for IfAction SubSystem: '<S39>/first_order' incorporates:
                 *  ActionPort: '<S42>/Action Port'
                 */
                /* Update for If: '<S39>/If1' */
                STMF4Hall_DW.first_order_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S39>/first_order' */
              }

              /* End of If: '<S39>/If1' */

              /* Saturate: '<S39>/Saturation' */
              if (rtb_Product1 > STMF4Hall_P.Saturation_UpperSat) {
                rtb_Product1 = STMF4Hall_P.Saturation_UpperSat;
              } else if (rtb_Product1 < STMF4Hall_P.Saturation_LowerSat) {
                rtb_Product1 = STMF4Hall_P.Saturation_LowerSat;
              }

              /* End of Saturate: '<S39>/Saturation' */

              /* If: '<S39>/If' incorporates:
               *  DataStoreRead: '<S14>/Data Store Read4'
               */
              if (STMF4Hall_DW.GlobalDirection != 1) {
                /* Outputs for IfAction SubSystem: '<S39>/-ve Direction' incorporates:
                 *  ActionPort: '<S41>/Action Port'
                 */
                /* SwitchCase: '<S41>/Switch Case' incorporates:
                 *  DataStoreRead: '<S14>/Data Store Read1'
                 */
                switch (STMF4Hall_DW.GlobalHallState) {
                 case 5:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 1' incorporates:
                   *  ActionPort: '<S51>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof1);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 1' */
                  break;

                 case 4:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 2' incorporates:
                   *  ActionPort: '<S52>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof2);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 2' */
                  break;

                 case 6:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 3' incorporates:
                   *  ActionPort: '<S53>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof3);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 3' */
                  break;

                 case 2:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 4' incorporates:
                   *  ActionPort: '<S54>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof4);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 4' */
                  break;

                 case 3:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 5' incorporates:
                   *  ActionPort: '<S55>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof5);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 5' */
                  break;

                 case 1:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 6' incorporates:
                   *  ActionPort: '<S56>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof6);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 6' */
                  break;

                 default:
                  /* Outputs for IfAction SubSystem: '<S41>/Hall Value of 7' incorporates:
                   *  ActionPort: '<S57>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof7);

                  /* End of Outputs for SubSystem: '<S41>/Hall Value of 7' */
                  break;
                }

                /* End of SwitchCase: '<S41>/Switch Case' */

                /* Merge: '<S39>/Merge' incorporates:
                 *  Sum: '<S41>/Sum'
                 */
                STMF4Hall_B.Merge = rtb_Merge1_hg - rtb_Product1;

                /* End of Outputs for SubSystem: '<S39>/-ve Direction' */

                /* Update for IfAction SubSystem: '<S39>/-ve Direction' incorporates:
                 *  ActionPort: '<S41>/Action Port'
                 */
                /* Update for If: '<S39>/If' */
                STMF4Hall_DW.veDirection_SubsysRanBC_e = 4;

                /* End of Update for SubSystem: '<S39>/-ve Direction' */
              } else {
                /* Outputs for IfAction SubSystem: '<S39>/+ve Direction' incorporates:
                 *  ActionPort: '<S40>/Action Port'
                 */
                /* SwitchCase: '<S40>/Switch Case' incorporates:
                 *  DataStoreRead: '<S14>/Data Store Read1'
                 */
                switch (STMF4Hall_DW.GlobalHallState) {
                 case 5:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 1' incorporates:
                   *  ActionPort: '<S44>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof1_a);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 1' */
                  break;

                 case 4:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 2' incorporates:
                   *  ActionPort: '<S45>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof2_a);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 2' */
                  break;

                 case 6:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 3' incorporates:
                   *  ActionPort: '<S46>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof3_n);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 3' */
                  break;

                 case 2:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 4' incorporates:
                   *  ActionPort: '<S47>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof4_j);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 4' */
                  break;

                 case 3:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 5' incorporates:
                   *  ActionPort: '<S48>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof5_j);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 5' */
                  break;

                 case 1:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 6' incorporates:
                   *  ActionPort: '<S49>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof6_g);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 6' */
                  break;

                 default:
                  /* Outputs for IfAction SubSystem: '<S40>/Hall Value of 7' incorporates:
                   *  ActionPort: '<S50>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_hg,
                    &STMF4Hall_P.HallValueof7_h);

                  /* End of Outputs for SubSystem: '<S40>/Hall Value of 7' */
                  break;
                }

                /* End of SwitchCase: '<S40>/Switch Case' */

                /* Merge: '<S39>/Merge' incorporates:
                 *  Sum: '<S40>/Sum'
                 */
                STMF4Hall_B.Merge = rtb_Merge1_hg + rtb_Product1;

                /* End of Outputs for SubSystem: '<S39>/+ve Direction' */

                /* Update for IfAction SubSystem: '<S39>/+ve Direction' incorporates:
                 *  ActionPort: '<S40>/Action Port'
                 */
                /* Update for If: '<S39>/If' */
                STMF4Hall_DW.veDirection_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S39>/+ve Direction' */
              }

              /* End of If: '<S39>/If' */
              STMF4Hall_DW.Subsystem1_SubsysRanBC = 4;
            }

            /* End of Outputs for SubSystem: '<S26>/Subsystem1' */

            /* SignalConversion generated from: '<S26>/rawPosition' incorporates:
             *  Constant: '<S26>/PositionEnable'
             */
            rtb_Product1 = STMF4Hall_B.Merge;

            /* End of Outputs for SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' */

            /* Update for IfAction SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            /* Update for If: '<S22>/If' */
            STMF4Hall_DW.SpeedanddirectionarevalidUsespe = 4;

            /* End of Update for SubSystem: '<S22>/Speed and direction are valid Use speed to extrapolate position' */
          } else {
            /* Outputs for IfAction SubSystem: '<S22>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' incorporates:
             *  ActionPort: '<S25>/Action Port'
             */
            /* SwitchCase: '<S29>/Switch Case' incorporates:
             *  DataStoreRead: '<S14>/Data Store Read1'
             */
            switch (STMF4Hall_DW.GlobalHallState) {
             case 5:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 1' incorporates:
               *  ActionPort: '<S30>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof1_ar);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 1' */
              break;

             case 4:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 2' incorporates:
               *  ActionPort: '<S31>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof2_m);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 2' */
              break;

             case 6:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 3' incorporates:
               *  ActionPort: '<S32>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof3_b);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 3' */
              break;

             case 2:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 4' incorporates:
               *  ActionPort: '<S33>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof4_f);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 4' */
              break;

             case 3:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 5' incorporates:
               *  ActionPort: '<S34>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof5_k);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 5' */
              break;

             case 1:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 6' incorporates:
               *  ActionPort: '<S35>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof6_j);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 6' */
              break;

             default:
              /* Outputs for IfAction SubSystem: '<S29>/Hall Value of 7' incorporates:
               *  ActionPort: '<S36>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Product1, &STMF4Hall_P.HallValueof7_hc);

              /* End of Outputs for SubSystem: '<S29>/Hall Value of 7' */
              break;
            }

            /* End of SwitchCase: '<S29>/Switch Case' */

            /* SignalConversion generated from: '<S25>/Speed(r.p.m)' incorporates:
             *  Constant: '<S25>/Constant'
             */
            rtb_Product_f = STMF4Hall_P.Constant_Value_a;

            /* End of Outputs for SubSystem: '<S22>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */

            /* Update for IfAction SubSystem: '<S22>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' incorporates:
             *  ActionPort: '<S25>/Action Port'
             */
            /* Update for If: '<S22>/If' */
            STMF4Hall_DW.SpeedanddirectionarenotvalidPos = 4;

            /* End of Update for SubSystem: '<S22>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */
          }

          /* End of If: '<S22>/If' */

          /* Gain: '<S22>/PositionUnit' */
          STMF4Hall_B.PositionUnit = STMF4Hall_P.PositionUnit_Gain *
            rtb_Product1;

          /* Switch: '<S12>/Switch1' incorporates:
           *  Constant: '<S12>/FilterConstant'
           *  Constant: '<S12>/One'
           *  Constant: '<S12>/OneMinusFilterConstant'
           *  Constant: '<S12>/UseInputPort'
           *  Constant: '<S12>/a'
           *  Sum: '<S12>/Sum'
           */
          if (STMF4Hall_P.UseInputPort_Value > STMF4Hall_P.Switch1_Threshold) {
            rtb_Product1 = STMF4Hall_P.a_Value;
            rtb_Merge1_hg = STMF4Hall_P.One_Value - STMF4Hall_P.a_Value;
          } else {
            rtb_Product1 = STMF4Hall_P.FilterConstant_Value;
            rtb_Merge1_hg = STMF4Hall_P.OneMinusFilterConstant_Value;
          }

          /* End of Switch: '<S12>/Switch1' */

          /* Sum: '<S21>/Add1' incorporates:
           *  Product: '<S21>/Product'
           *  Product: '<S21>/Product1'
           *  UnitDelay: '<S21>/Unit Delay'
           */
          STMF4Hall_DW.UnitDelay_DSTATE = rtb_Product_f * rtb_Product1 +
            rtb_Merge1_hg * STMF4Hall_DW.UnitDelay_DSTATE;

          /* UnitDelay: '<S11>/Output' */
          STMF4Hall_B.Output = STMF4Hall_DW.Output_DSTATE;

          /* Sum: '<S17>/FixPt Sum1' incorporates:
           *  Constant: '<S17>/FixPt Constant'
           */
          rtb_FixPtSum1 = (uint16_T)((uint32_T)STMF4Hall_B.Output +
            STMF4Hall_P.FixPtConstant_Value);

          /* MATLABSystem: '<S16>/Analog to Digital Converter' */
          injectedReadADCIntr(STMF4Hall_DW.obj.ADCHandle, ADC_READ, &tmp[0]);

          /* Update for Delay: '<S23>/validityDelay' incorporates:
           *  DataStoreRead: '<S14>/Data Store Read3'
           *  DataStoreRead: '<S14>/Data Store Read5'
           *  DataTypeConversion: '<S23>/Data Type Conversion'
           *  Delay: '<S23>/speedCountDelay'
           */
          if (Switch != 0) {
            STMF4Hall_DW.validityDelay_DSTATE =
              (STMF4Hall_DW.GlobalSpeedValidity != 0);
            STMF4Hall_DW.speedCountDelay_DSTATE = STMF4Hall_DW.GlobalSpeedCount;
          }

          /* End of Update for Delay: '<S23>/validityDelay' */

          /* Update for Delay: '<S24>/Delay One Step' incorporates:
           *  Constant: '<S24>/Constant2'
           *  Sum: '<S24>/Sum'
           */
          if (OR) {
            STMF4Hall_DW.DelayOneStep_DSTATE = (uint16_T)((uint32_T)
              STMF4Hall_B.DelayOneStep - STMF4Hall_P.Constant2_Value);
          }

          /* End of Update for Delay: '<S24>/Delay One Step' */

          /* Switch: '<S18>/FixPt Switch' */
          if (rtb_FixPtSum1 > STMF4Hall_P.WrapToZero_Threshold) {
            /* Update for UnitDelay: '<S11>/Output' incorporates:
             *  Constant: '<S18>/Constant'
             */
            STMF4Hall_DW.Output_DSTATE = STMF4Hall_P.Constant_Value_o;
          } else {
            /* Update for UnitDelay: '<S11>/Output' */
            STMF4Hall_DW.Output_DSTATE = rtb_FixPtSum1;
          }

          /* End of Switch: '<S18>/FixPt Switch' */
          STMF4Hall_DW.ADCSIC_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S133>/Hardware Interrupt' */
      }

      currentTime = (extmodeSimulationTime_T) ((STMF4Hall_M->Timing.clockTick5) *
        5.0E-5);
      extmodeEvent(5,currentTime);
    }
  }

  __ISB();
  __DSB();
  MW_HWI_UnMaskInterrupt(priority_mask);
}

void STMF4Hall_unconfigure_interrupts (void)
{
  MW_NVIC_DisableIRQ(33);
  MW_NVIC_DisableIRQ(55);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
