/*
 * File: STMF4Hall.c
 *
 * Code generated for Simulink model 'STMF4Hall'.
 *
 * Model version                  : 1.35
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Oct 10 15:17:45 2024
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
 *    '<S106>/If Action Subsystem6'
 *    '<S106>/If Action Subsystem7'
 *    '<S82>/If Action Subsystem6'
 *    '<S82>/If Action Subsystem7'
 *    '<S58>/If Action Subsystem6'
 *    '<S58>/If Action Subsystem7'
 */
void STMF4Hal_IfActionSubsystem6(int16_T *rty_direction, uint16_T
  *rty_sequence_check, P_IfActionSubsystem6_STMF4Hal_T *localP)
{
  /* SignalConversion generated from: '<S113>/direction' incorporates:
   *  Constant: '<S113>/Constant'
   */
  *rty_direction = localP->Constant_Value;

  /* SignalConversion generated from: '<S113>/sequence_check' incorporates:
   *  Constant: '<S113>/Constant1'
   */
  *rty_sequence_check = localP->Constant1_Value;
}

/*
 * Output and update for action system:
 *    '<S106>/If Action Subsystem'
 *    '<S106>/If Action Subsystem1'
 *    '<S106>/If Action Subsystem2'
 *    '<S106>/If Action Subsystem3'
 *    '<S106>/If Action Subsystem4'
 *    '<S106>/If Action Subsystem5'
 *    '<S82>/If Action Subsystem'
 *    '<S82>/If Action Subsystem1'
 *    '<S82>/If Action Subsystem2'
 *    '<S82>/If Action Subsystem3'
 *    ...
 */
void STMF4Hall_IfActionSubsystem(uint16_T *rty_Out1, uint16_T *rty_Out2,
  P_IfActionSubsystem_STMF4Hall_T *localP)
{
  /* SignalConversion generated from: '<S107>/Out1' incorporates:
   *  Constant: '<S107>/previous'
   */
  *rty_Out1 = localP->previous_Value;

  /* SignalConversion generated from: '<S107>/Out2' incorporates:
   *  Constant: '<S107>/next'
   */
  *rty_Out2 = localP->next_Value;
}

/*
 * System initialize for action system:
 *    '<S104>/Valid Halls'
 *    '<S80>/Valid Halls'
 *    '<S56>/Valid Halls'
 */
void STMF4Hall_ValidHalls_Init(B_ValidHalls_STMF4Hall_T *localB,
  P_ValidHalls_STMF4Hall_T *localP)
{
  /* SystemInitialize for Merge: '<S106>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge1' */
  localB->Merge1 = localP->Merge1_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge2' */
  localB->Merge2 = localP->Merge2_InitialOutput;

  /* SystemInitialize for Merge: '<S106>/Merge3' */
  localB->Merge3 = localP->Merge3_InitialOutput;
}

/*
 * Output and update for action system:
 *    '<S104>/Valid Halls'
 *    '<S80>/Valid Halls'
 *    '<S56>/Valid Halls'
 */
void STMF4Hall_ValidHalls(uint16_T rtu_hallReading, uint16_T rtu_previousState,
  int16_T rtu_previous_direction, boolean_T *rty_directional_speed_valid_fla,
  int16_T *rty_direction, uint16_T *rty_inValidHall, B_ValidHalls_STMF4Hall_T
  *localB, DW_ValidHalls_STMF4Hall_T *localDW, P_ValidHalls_STMF4Hall_T *localP)
{
  /* SwitchCase: '<S106>/Switch Case' */
  switch (rtu_hallReading) {
   case 5:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem' incorporates:
     *  ActionPort: '<S107>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S108>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem1' */
    break;

   case 6:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S109>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem2);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S110>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem4);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem4' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    STMF4Hall_IfActionSubsystem(&localB->Merge, &localB->Merge1,
      &localP->IfActionSubsystem5);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem5' */
    break;

   default:
    /* Update for IfAction SubSystem: '<S106>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    /* Update for SwitchCase: '<S106>/Switch Case' */
    localDW->SwitchCaseActionSubsystem_Subsy = 4;

    /* End of Update for SubSystem: '<S106>/Switch Case Action Subsystem' */
    break;
  }

  /* End of SwitchCase: '<S106>/Switch Case' */

  /* If: '<S106>/If' */
  if (rtu_previousState == localB->Merge) {
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    STMF4Hal_IfActionSubsystem6(&localB->Merge2, &localB->Merge3,
      &localP->IfActionSubsystem6);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem6' */
  } else if (rtu_previousState == localB->Merge1) {
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S114>/Action Port'
     */
    STMF4Hal_IfActionSubsystem6(&localB->Merge2, &localB->Merge3,
      &localP->IfActionSubsystem7);

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem7' */
  } else {
    /* Outputs for IfAction SubSystem: '<S106>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    /* Merge: '<S106>/Merge3' incorporates:
     *  Constant: '<S115>/Constant'
     *  SignalConversion generated from: '<S115>/sequence_check'
     */
    localB->Merge3 = localP->Constant_Value;

    /* End of Outputs for SubSystem: '<S106>/If Action Subsystem8' */

    /* Update for IfAction SubSystem: '<S106>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S115>/Action Port'
     */
    /* Update for If: '<S106>/If' */
    localDW->IfActionSubsystem8_SubsysRanBC = 4;

    /* End of Update for SubSystem: '<S106>/If Action Subsystem8' */
  }

  /* End of If: '<S106>/If' */

  /* SignalConversion: '<S106>/Signal Conversion' */
  *rty_inValidHall = localB->Merge3;

  /* SignalConversion: '<S106>/Signal Conversion1' */
  *rty_direction = localB->Merge2;

  /* Switch: '<S106>/Switch' incorporates:
   *  Constant: '<S106>/Constant'
   *  RelationalOperator: '<S106>/Relational Operator'
   */
  if (localB->Merge3 != 0) {
    *rty_directional_speed_valid_fla = localP->Constant_Value_m;
  } else {
    *rty_directional_speed_valid_fla = (localB->Merge2 == rtu_previous_direction);
  }

  /* End of Switch: '<S106>/Switch' */
}

/*
 * Output and update for action system:
 *    '<S104>/Bad hall (glitch or wrong connection)'
 *    '<S80>/Bad hall (glitch or wrong connection)'
 *    '<S56>/Bad hall (glitch or wrong connection)'
 */
void Badhallglitchorwrongconnect(int16_T rtu_previous_direction, uint16_T
  *rty_inValidHall, int16_T *rty_direction, boolean_T
  *rty_directional_speed_valid_fla, P_Badhallglitchorwrongconnect_T *localP)
{
  /* SignalConversion generated from: '<S105>/inValidHall' incorporates:
   *  Constant: '<S105>/Constant'
   */
  *rty_inValidHall = localP->Constant_Value;

  /* SignalConversion: '<S105>/Signal Conversion' */
  *rty_direction = rtu_previous_direction;

  /* SignalConversion generated from: '<S105>/directional_speed_valid_flag' incorporates:
   *  Constant: '<S105>/Constant1'
   */
  *rty_directional_speed_valid_fla = localP->Constant1_Value;
}

/*
 * Output and update for action system:
 *    '<S37>/Hall Value of 1'
 *    '<S37>/Hall Value of 2'
 *    '<S37>/Hall Value of 3'
 *    '<S37>/Hall Value of 4'
 *    '<S37>/Hall Value of 5'
 *    '<S37>/Hall Value of 6'
 *    '<S37>/Hall Value of 7'
 *    '<S36>/Hall Value of 1'
 *    '<S36>/Hall Value of 2'
 *    '<S36>/Hall Value of 3'
 *    ...
 */
void STMF4Hall_HallValueof1(real32_T *rty_position, P_HallValueof1_STMF4Hall_T
  *localP)
{
  /* SignalConversion generated from: '<S47>/position' incorporates:
   *  Constant: '<S47>/Constant'
   */
  *rty_position = localP->Constant_Value;
}

static void STMF4Hall_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
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

  /* Start for MATLABSystem: '<S143>/PWM Output' */
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<S143>/PWM Output' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  enableTimerChannel1(obj->TimerHandle, ENABLE_CH_CHN);
  enableTimerChannel2(obj->TimerHandle, ENABLE_CH_CHN);
  enableTimerChannel3(obj->TimerHandle, ENABLE_CH_CHN);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<S143>/PWM Output' */
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

  /* RateTransition: '<Root>/RT6' */
  STMF4Hall_B.testcounter = STMF4Hall_B.Output;

  /* MATLABSystem: '<S143>/PWM Output' incorporates:
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

  /* MATLABSystem: '<S131>/Digital Port Write' */
  portNameLoc = GPIOA;
  if (rtb_PulseGenerator != 0.0) {
    c = 32;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 32U);

  /* End of MATLABSystem: '<S131>/Digital Port Write' */

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
  STMF4Hall_M->Sizes.checksums[0] = (1946916749U);
  STMF4Hall_M->Sizes.checksums[1] = (774289290U);
  STMF4Hall_M->Sizes.checksums[2] = (76477866U);
  STMF4Hall_M->Sizes.checksums[3] = (1330613602U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[99];
    STMF4Hall_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[2] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[3] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1_ar.HallValueof1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2_m.HallValueof1_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3_b.HallValueof1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4_f.HallValueof1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5_k.HallValueof1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6_j.HallValueof1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7_hc.HallValueof1_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&STMF4Hall_DW.SpeedanddirectionarenotvalidPos;
    systemRan[12] = (sysRanDType *)&STMF4Hall_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&STMF4Hall_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1_a.HallValueof1_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2_a.HallValueof1_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3_n.HallValueof1_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4_j.HallValueof1_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5_j.HallValueof1_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6_g.HallValueof1_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7_h.HallValueof1_SubsysRanBC;
    systemRan[21] = (sysRanDType *)&STMF4Hall_DW.veDirection_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof1.HallValueof1_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof2.HallValueof1_SubsysRanBC;
    systemRan[24] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof3.HallValueof1_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof4.HallValueof1_SubsysRanBC;
    systemRan[26] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof5.HallValueof1_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof6.HallValueof1_SubsysRanBC;
    systemRan[28] = (sysRanDType *)
      &STMF4Hall_DW.HallValueof7.HallValueof1_SubsysRanBC;
    systemRan[29] = (sysRanDType *)&STMF4Hall_DW.veDirection_SubsysRanBC_e;
    systemRan[30] = (sysRanDType *)&STMF4Hall_DW.first_order_SubsysRanBC;
    systemRan[31] = (sysRanDType *)&STMF4Hall_DW.second_order_SubsysRanBC;
    systemRan[32] = (sysRanDType *)&STMF4Hall_DW.Subsystem1_SubsysRanBC;
    systemRan[33] = (sysRanDType *)&STMF4Hall_DW.SpeedanddirectionarevalidUsespe;
    systemRan[34] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[35] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[36] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[37] = (sysRanDType *)&STMF4Hall_DW.ADCSIC_SubsysRanBC;
    systemRan[38] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnecti_nn.Badhallglitchorwrongconnection_;
    systemRan[39] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[40] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[41] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[42] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[43] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[44] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[45] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[46] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[47] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.IfActionSubsystem8_SubsysRanBC;
    systemRan[48] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.SwitchCaseActionSubsystem_Subsy;
    systemRan[49] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[50] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[51] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_i.ValidHalls_SubsysRanBC;
    systemRan[52] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[53] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[54] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[55] = (sysRanDType *)&STMF4Hall_DW.HA_SubsysRanBC;
    systemRan[56] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnectio_n.Badhallglitchorwrongconnection_;
    systemRan[57] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[58] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[59] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[60] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[61] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[62] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[63] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[64] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[65] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.IfActionSubsystem8_SubsysRanBC;
    systemRan[66] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.SwitchCaseActionSubsystem_Subsy;
    systemRan[67] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[68] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[69] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls_d.ValidHalls_SubsysRanBC;
    systemRan[70] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[71] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[72] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[73] = (sysRanDType *)&STMF4Hall_DW.HB_SubsysRanBC;
    systemRan[74] = (sysRanDType *)
      &STMF4Hall_DW.Badhallglitchorwrongconnection.Badhallglitchorwrongconnection_;
    systemRan[75] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[76] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[77] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[78] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[79] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[80] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[81] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem6.IfActionSubsystem6_SubsysRanBC;
    systemRan[82] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem7.IfActionSubsystem6_SubsysRanBC;
    systemRan[83] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.IfActionSubsystem8_SubsysRanBC;
    systemRan[84] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.SwitchCaseActionSubsystem_Subsy;
    systemRan[85] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[86] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[87] = (sysRanDType *)
      &STMF4Hall_DW.ValidHalls.ValidHalls_SubsysRanBC;
    systemRan[88] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[89] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[90] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[91] = (sysRanDType *)&STMF4Hall_DW.HC_SubsysRanBC;
    systemRan[92] = &rtAlwaysEnabled;
    systemRan[93] = &rtAlwaysEnabled;
    systemRan[94] = &rtAlwaysEnabled;
    systemRan[95] = &rtAlwaysEnabled;
    systemRan[96] = &rtAlwaysEnabled;
    systemRan[97] = &rtAlwaysEnabled;
    systemRan[98] = &rtAlwaysEnabled;
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

    /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
    STMF4Hall_DW.GlobalSpeedValidity = STMF4Hall_P.DataStoreMemory7_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    STMF4Hall_DW.GlobalHallState = STMF4Hall_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory12' */
    STMF4Hall_DW.HallCcapture = STMF4Hall_P.DataStoreMemory12_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
    STMF4Hall_DW.Timercntprev = STMF4Hall_P.DataStoreMemory3_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
    STMF4Hall_DW.GlobalDirection = STMF4Hall_P.DataStoreMemory5_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
    STMF4Hall_DW.GlobalSpeedCount = STMF4Hall_P.DataStoreMemory6_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.DataStoreMemory8_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
    STMF4Hall_DW.HallBcapture = STMF4Hall_P.DataStoreMemory11_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
    STMF4Hall_DW.HallAcapture = STMF4Hall_P.DataStoreMemory10_InitialValue;

    /* InitializeConditions for RateTransition: '<Root>/RT7' */
    STMF4Hall_DW.RT7_Buffer0 = STMF4Hall_P.RT7_InitialCondition;

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/ADC SIC'
     */

    /* System initialize for function-call system: '<Root>/ADC SIC' */
    STMF4Hall_M->Timing.clockTick5 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S19>/validityDelay' */
    STMF4Hall_DW.validityDelay_DSTATE =
      STMF4Hall_P.validityDelay_InitialCondition;

    /* InitializeConditions for Delay: '<S19>/speedCountDelay' */
    STMF4Hall_DW.speedCountDelay_DSTATE =
      STMF4Hall_P.speedCountDelay_InitialConditio;

    /* InitializeConditions for RelationalOperator: '<S24>/Compare' incorporates:
     *  Delay: '<S20>/Delay One Step1'
     */
    STMF4Hall_DW.DelayOneStep1_DSTATE =
      STMF4Hall_P.DelayOneStep1_InitialCondition;

    /* InitializeConditions for Delay: '<S20>/Delay One Step' */
    STMF4Hall_DW.DelayOneStep_DSTATE =
      STMF4Hall_P.SoftwareWatchdogTimer_maxCount;

    /* InitializeConditions for UnitDelay: '<S11>/Output' */
    STMF4Hall_DW.Output_DSTATE = STMF4Hall_P.Output_InitialCondition;

    /* SystemInitialize for IfAction SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' */
    /* SystemInitialize for Enabled SubSystem: '<S22>/Subsystem1' */
    /* SystemInitialize for Merge: '<S35>/Merge' */
    STMF4Hall_B.Merge = STMF4Hall_P.Merge_InitialOutput;

    /* End of SystemInitialize for SubSystem: '<S22>/Subsystem1' */
    /* End of SystemInitialize for SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' */

    /* Start for MATLABSystem: '<S15>/Analog to Digital Converter' */
    STMF4Hall_DW.obj.isInitialized = 0;
    STMF4Hall_DW.obj.matlabCodegenIsDeleted = false;
    STMF4Hall_SystemCore_setup(&STMF4Hall_DW.obj);

    /* SystemInitialize for Gain: '<S18>/PositionUnit' incorporates:
     *  Outport: '<S1>/Pos_PU'
     */
    STMF4Hall_B.PositionUnit = STMF4Hall_P.Pos_PU_Y0;

    /* SystemInitialize for UnitDelay: '<S11>/Output' incorporates:
     *  Outport: '<S1>/Out1'
     */
    STMF4Hall_B.Output = STMF4Hall_P.Out1_Y0_h;

    /* End of SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HC'
     */
    /* System initialize for function-call system: '<Root>/HC' */
    STMF4Hall_M->Timing.clockTick2 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S4>/Delay' */
    STMF4Hall_DW.Delay_DSTATE_j = STMF4Hall_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S4>/Delay1' */
    STMF4Hall_DW.Delay1_DSTATE_i = STMF4Hall_P.Delay1_InitialCondition;

    /* SystemInitialize for IfAction SubSystem: '<S104>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls, &STMF4Hall_P.ValidHalls);

    /* End of SystemInitialize for SubSystem: '<S104>/Valid Halls' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HB'
     */
    /* System initialize for function-call system: '<Root>/HB' */
    STMF4Hall_M->Timing.clockTick3 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S3>/Delay' */
    STMF4Hall_DW.Delay_DSTATE_h = STMF4Hall_P.Delay_InitialCondition_h;

    /* InitializeConditions for Delay: '<S3>/Delay1' */
    STMF4Hall_DW.Delay1_DSTATE_h = STMF4Hall_P.Delay1_InitialCondition_o;

    /* SystemInitialize for IfAction SubSystem: '<S80>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls_d,
      &STMF4Hall_P.ValidHalls_d);

    /* End of SystemInitialize for SubSystem: '<S80>/Valid Halls' */

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/HA'
     */

    /* System initialize for function-call system: '<Root>/HA' */
    STMF4Hall_M->Timing.clockTick4 = STMF4Hall_M->Timing.clockTick0;

    /* InitializeConditions for Delay: '<S2>/Delay' */
    STMF4Hall_DW.Delay_DSTATE = STMF4Hall_P.Delay_InitialCondition_hg;

    /* InitializeConditions for Delay: '<S2>/Delay1' */
    STMF4Hall_DW.Delay1_DSTATE = STMF4Hall_P.Delay1_InitialCondition_i;

    /* SystemInitialize for IfAction SubSystem: '<S56>/Valid Halls' */
    STMF4Hall_ValidHalls_Init(&STMF4Hall_B.ValidHalls_i,
      &STMF4Hall_P.ValidHalls_i);

    /* End of SystemInitialize for SubSystem: '<S56>/Valid Halls' */

    /* End of SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */

    /* Start for MATLABSystem: '<S143>/PWM Output' */
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
    /* MATLABSystem: '<S137>/Digital Port Read' */
    pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

    /* MATLABSystem: '<S139>/Digital Port Read' */
    pinReadLoc_0 = LL_GPIO_ReadInputPort(GPIOC);

    /* MATLABSystem: '<S141>/Digital Port Read' */
    pinReadLoc_1 = LL_GPIO_ReadInputPort(GPIOC);

    /* Sum: '<S132>/Sum' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write'
     *  Gain: '<S132>/Gain'
     *  Gain: '<S132>/Gain1'
     *  Gain: '<S132>/Gain2'
     *  MATLABSystem: '<S137>/Digital Port Read'
     *  MATLABSystem: '<S139>/Digital Port Read'
     *  MATLABSystem: '<S141>/Digital Port Read'
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
  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' */

  /* Terminate for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' incorporates:
   *  SubSystem: '<Root>/ADC SIC'
   */
  /* Termination for function-call system: '<Root>/ADC SIC' */

  /* Terminate for MATLABSystem: '<S15>/Analog to Digital Converter' */
  if (!STMF4Hall_DW.obj.matlabCodegenIsDeleted) {
    STMF4Hall_DW.obj.matlabCodegenIsDeleted = true;
    if ((STMF4Hall_DW.obj.isInitialized == 1) &&
        STMF4Hall_DW.obj.isSetupComplete) {
      ADC_Handle_Deinit(STMF4Hall_DW.obj.ADCHandle, ADC_INTERRUPT_MODE, 0);
    }
  }

  /* End of Terminate for MATLABSystem: '<S15>/Analog to Digital Converter' */

  /* End of Terminate for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' */

  /* Terminate for MATLABSystem: '<S143>/PWM Output' */
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

  /* End of Terminate for MATLABSystem: '<S143>/PWM Output' */
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

/* Hardware Interrupt Block: '<S127>/Hardware Interrupt' */
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

        /* S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HC' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick2 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S4>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S121>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S123>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S125>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S103>/Sum' incorporates:
           *  DataStoreWrite: '<S103>/Data Store Write'
           *  Gain: '<S103>/Gain'
           *  Gain: '<S103>/Gain1'
           *  Gain: '<S103>/Gain2'
           *  MATLABSystem: '<S121>/Digital Port Read'
           *  MATLABSystem: '<S123>/Digital Port Read'
           *  MATLABSystem: '<S125>/Digital Port Read'
           * */
          STMF4Hall_DW.GlobalHallState = (uint8_T)(((uint32_T)((pinReadLoc &
            1024U) != 0U ? STMF4Hall_P.Gain_Gain_f >> 5 : 0) + (uint32_T)
            ((pinReadLoc_p & 2048U) != 0U ? STMF4Hall_P.Gain1_Gain_a >> 6 : 0))
            + (uint32_T)((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain >>
                         7 : 0));

          /* SwitchCase: '<S102>/Detects if the halls reading is valid' incorporates:
           *  DataStoreWrite: '<S103>/Data Store Write'
           *  DataTypeConversion: '<S102>/Data Type Conversion1'
           */
          switch (STMF4Hall_DW.GlobalHallState) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S104>/Valid Halls' incorporates:
             *  ActionPort: '<S106>/Action Port'
             */
            /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S4>/Data Store Read2'
             *  DataTypeConversion: '<S102>/Data Type Conversion2'
             *  Delay: '<S4>/Delay'
             */
            STMF4Hall_ValidHalls((uint16_T)STMF4Hall_DW.GlobalHallState,
                                 (uint16_T)STMF4Hall_DW.Delay_DSTATE_j,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls,
                                 &STMF4Hall_DW.ValidHalls,
                                 &STMF4Hall_P.ValidHalls);

            /* End of Outputs for SubSystem: '<S104>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S104>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S105>/Action Port'
             */
            /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S4>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnection);

            /* End of Outputs for SubSystem: '<S104>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S102>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S4>/Data Type Conversion4' incorporates:
           *  DataStoreWrite: '<S4>/Data Store Write2'
           *  DataTypeConversion: '<S4>/Data Type Conversion'
           *  DataTypeConversion: '<S4>/Data Type Conversion1'
           *  Delay: '<S4>/Delay1'
           *  Sum: '<S4>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)((int32_T)STMF4Hall_B.RT7 -
            (int32_T)STMF4Hall_DW.Delay1_DSTATE_i);

          /* DataTypeConversion: '<S104>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S4>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S4>/Data Store Write4' incorporates:
           *  Constant: '<S102>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_g;

          /* DataStoreWrite: '<S4>/Data Store Write5' incorporates:
           *  DataStoreWrite: '<S4>/Data Store Write2'
           */
          STMF4Hall_DW.HallCcapture = STMF4Hall_DW.GlobalSpeedCount;

          /* Update for Delay: '<S4>/Delay' incorporates:
           *  DataStoreRead: '<S4>/Data Store Read'
           */
          STMF4Hall_DW.Delay_DSTATE_j = STMF4Hall_DW.GlobalHallState;

          /* Update for Delay: '<S4>/Delay1' incorporates:
           *  DataStoreRead: '<S4>/Data Store Read1'
           */
          STMF4Hall_DW.Delay1_DSTATE_i = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HC_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */
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

        /* S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HB' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick3 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S3>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S97>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S99>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S101>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S79>/Sum' incorporates:
           *  DataStoreWrite: '<S79>/Data Store Write'
           *  Gain: '<S79>/Gain'
           *  Gain: '<S79>/Gain1'
           *  Gain: '<S79>/Gain2'
           *  MATLABSystem: '<S101>/Digital Port Read'
           *  MATLABSystem: '<S97>/Digital Port Read'
           *  MATLABSystem: '<S99>/Digital Port Read'
           * */
          STMF4Hall_DW.GlobalHallState = (uint8_T)(((uint32_T)((pinReadLoc &
            1024U) != 0U ? STMF4Hall_P.Gain_Gain_c >> 5 : 0) + (uint32_T)
            ((pinReadLoc_p & 2048U) != 0U ? STMF4Hall_P.Gain1_Gain_c >> 6 : 0))
            + (uint32_T)((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain_d
                         >> 7 : 0));

          /* SwitchCase: '<S78>/Detects if the halls reading is valid' incorporates:
           *  DataStoreWrite: '<S79>/Data Store Write'
           *  DataTypeConversion: '<S78>/Data Type Conversion1'
           */
          switch (STMF4Hall_DW.GlobalHallState) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S80>/Valid Halls' incorporates:
             *  ActionPort: '<S82>/Action Port'
             */
            /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S3>/Data Store Read2'
             *  DataTypeConversion: '<S78>/Data Type Conversion2'
             *  Delay: '<S3>/Delay'
             */
            STMF4Hall_ValidHalls((uint16_T)STMF4Hall_DW.GlobalHallState,
                                 (uint16_T)STMF4Hall_DW.Delay_DSTATE_h,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls_d,
                                 &STMF4Hall_DW.ValidHalls_d,
                                 &STMF4Hall_P.ValidHalls_d);

            /* End of Outputs for SubSystem: '<S80>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S80>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S81>/Action Port'
             */
            /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S3>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnectio_n);

            /* End of Outputs for SubSystem: '<S80>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S78>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S3>/Data Type Conversion4' incorporates:
           *  DataStoreWrite: '<S3>/Data Store Write2'
           *  DataTypeConversion: '<S3>/Data Type Conversion'
           *  DataTypeConversion: '<S3>/Data Type Conversion1'
           *  Delay: '<S3>/Delay1'
           *  Sum: '<S3>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)((int32_T)STMF4Hall_B.RT7 -
            (int32_T)STMF4Hall_DW.Delay1_DSTATE_h);

          /* DataTypeConversion: '<S80>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S3>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S3>/Data Store Write4' incorporates:
           *  Constant: '<S78>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_l;

          /* DataStoreWrite: '<S3>/Data Store Write5' incorporates:
           *  DataStoreWrite: '<S3>/Data Store Write2'
           */
          STMF4Hall_DW.HallBcapture = STMF4Hall_DW.GlobalSpeedCount;

          /* Update for Delay: '<S3>/Delay' incorporates:
           *  DataStoreRead: '<S3>/Data Store Read'
           */
          STMF4Hall_DW.Delay_DSTATE_h = STMF4Hall_DW.GlobalHallState;

          /* Update for Delay: '<S3>/Delay1' incorporates:
           *  DataStoreRead: '<S3>/Data Store Read1'
           */
          STMF4Hall_DW.Delay1_DSTATE_h = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HB_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */
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

        /* S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/HA' */
        {
          uint32_T pinReadLoc;
          uint32_T pinReadLoc_e;
          uint32_T pinReadLoc_p;
          uint16_T rtb_Merge;
          boolean_T rtb_Merge3;
          STMF4Hall_M->Timing.clockTick4 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreWrite: '<S2>/Data Store Write' */
          STMF4Hall_DW.Timercntprev = STMF4Hall_B.RT7;

          /* MATLABSystem: '<S73>/Digital Port Read' */
          pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S75>/Digital Port Read' */
          pinReadLoc_p = LL_GPIO_ReadInputPort(GPIOC);

          /* MATLABSystem: '<S77>/Digital Port Read' */
          pinReadLoc_e = LL_GPIO_ReadInputPort(GPIOC);

          /* Sum: '<S55>/Sum' incorporates:
           *  DataStoreWrite: '<S55>/Data Store Write'
           *  Gain: '<S55>/Gain'
           *  Gain: '<S55>/Gain1'
           *  Gain: '<S55>/Gain2'
           *  MATLABSystem: '<S73>/Digital Port Read'
           *  MATLABSystem: '<S75>/Digital Port Read'
           *  MATLABSystem: '<S77>/Digital Port Read'
           * */
          STMF4Hall_DW.GlobalHallState = (uint8_T)(((uint32_T)((pinReadLoc &
            1024U) != 0U ? STMF4Hall_P.Gain_Gain_ca >> 5 : 0) + (uint32_T)
            ((pinReadLoc_p & 2048U) != 0U ? STMF4Hall_P.Gain1_Gain_i >> 6 : 0))
            + (uint32_T)((pinReadLoc_e & 4096U) != 0U ? STMF4Hall_P.Gain2_Gain_k
                         >> 7 : 0));

          /* SwitchCase: '<S54>/Detects if the halls reading is valid' incorporates:
           *  DataStoreWrite: '<S55>/Data Store Write'
           *  DataTypeConversion: '<S54>/Data Type Conversion1'
           */
          switch (STMF4Hall_DW.GlobalHallState) {
           case 5:
           case 4:
           case 6:
           case 2:
           case 3:
           case 1:
            /* Outputs for IfAction SubSystem: '<S56>/Valid Halls' incorporates:
             *  ActionPort: '<S58>/Action Port'
             */
            /* DataStoreWrite: '<S2>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S2>/Data Store Read2'
             *  DataTypeConversion: '<S54>/Data Type Conversion2'
             *  Delay: '<S2>/Delay'
             */
            STMF4Hall_ValidHalls((uint16_T)STMF4Hall_DW.GlobalHallState,
                                 (uint16_T)STMF4Hall_DW.Delay_DSTATE,
                                 STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
                                 &STMF4Hall_DW.GlobalDirection, &rtb_Merge,
                                 &STMF4Hall_B.ValidHalls_i,
                                 &STMF4Hall_DW.ValidHalls_i,
                                 &STMF4Hall_P.ValidHalls_i);

            /* End of Outputs for SubSystem: '<S56>/Valid Halls' */
            break;

           default:
            /* Outputs for IfAction SubSystem: '<S56>/Bad hall (glitch or wrong connection)' incorporates:
             *  ActionPort: '<S57>/Action Port'
             */
            /* DataStoreWrite: '<S2>/Data Store Write1' incorporates:
             *  DataStoreRead: '<S2>/Data Store Read2'
             */
            Badhallglitchorwrongconnect(STMF4Hall_DW.GlobalDirection, &rtb_Merge,
              &STMF4Hall_DW.GlobalDirection, &rtb_Merge3,
              &STMF4Hall_P.Badhallglitchorwrongconnecti_nn);

            /* End of Outputs for SubSystem: '<S56>/Bad hall (glitch or wrong connection)' */
            break;
          }

          /* End of SwitchCase: '<S54>/Detects if the halls reading is valid' */

          /* DataTypeConversion: '<S2>/Data Type Conversion4' incorporates:
           *  DataStoreWrite: '<S2>/Data Store Write2'
           *  DataTypeConversion: '<S2>/Data Type Conversion'
           *  DataTypeConversion: '<S2>/Data Type Conversion1'
           *  Delay: '<S2>/Delay1'
           *  Sum: '<S2>/Sum'
           */
          STMF4Hall_DW.GlobalSpeedCount = (uint32_T)((int32_T)STMF4Hall_B.RT7 -
            (int32_T)STMF4Hall_DW.Delay1_DSTATE);

          /* DataTypeConversion: '<S56>/Data Type Conversion' incorporates:
           *  DataStoreWrite: '<S2>/Data Store Write3'
           */
          STMF4Hall_DW.GlobalSpeedValidity = rtb_Merge3;

          /* DataStoreWrite: '<S2>/Data Store Write4' incorporates:
           *  Constant: '<S54>/Constant'
           */
          STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.Constant_Value_m;

          /* DataStoreWrite: '<S2>/Data Store Write5' incorporates:
           *  DataStoreWrite: '<S2>/Data Store Write2'
           */
          STMF4Hall_DW.HallAcapture = STMF4Hall_DW.GlobalSpeedCount;

          /* Update for Delay: '<S2>/Delay' incorporates:
           *  DataStoreRead: '<S2>/Data Store Read'
           */
          STMF4Hall_DW.Delay_DSTATE = STMF4Hall_DW.GlobalHallState;

          /* Update for Delay: '<S2>/Delay1' incorporates:
           *  DataStoreRead: '<S2>/Data Store Read1'
           */
          STMF4Hall_DW.Delay1_DSTATE = STMF4Hall_DW.Timercntprev;
          STMF4Hall_DW.HA_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S127>/Hardware Interrupt' */
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

/* Hardware Interrupt Block: '<S129>/Hardware Interrupt' */
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

        /* S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' */

        /* Output and update for function-call system: '<Root>/ADC SIC' */
        {
          real32_T rtb_Merge1_g;
          real32_T rtb_Merge1_nk;
          uint32_T rtb_Min;
          uint32_T tmp_p;
          uint16_T tmp[3];
          uint16_T Switch;
          uint16_T rtb_FixPtSum1;
          boolean_T OR;
          STMF4Hall_M->Timing.clockTick5 = STMF4Hall_M->Timing.clockTick0;

          /* DataStoreRead: '<S13>/Data Store Read6' */
          rtb_FixPtSum1 = STMF4Hall_DW.HallStateChangeFlag;

          /* Switch: '<S18>/Switch' incorporates:
           *  Constant: '<S18>/WatchDog'
           *  DataStoreRead: '<S13>/Data Store Read6'
           *  DataStoreWrite: '<S13>/Data Store Write3'
           */
          if (STMF4Hall_DW.HallStateChangeFlag != 0) {
            STMF4Hall_DW.HallStateChangeFlag = STMF4Hall_P.WatchDog_Value;
          }

          /* End of Switch: '<S18>/Switch' */

          /* Switch: '<S19>/Switch' incorporates:
           *  Constant: '<S19>/Order'
           */
          if (STMF4Hall_P.Order_Value > STMF4Hall_P.Switch_Threshold) {
            /* Switch: '<S19>/Switch' */
            Switch = rtb_FixPtSum1;
          } else {
            /* Switch: '<S19>/Switch' */
            Switch = STMF4Hall_P.Order_Value;
          }

          /* End of Switch: '<S19>/Switch' */

          /* Delay: '<S19>/validityDelay' incorporates:
           *  Delay: '<S19>/speedCountDelay'
           */
          if (Switch != 0) {
            /* Delay: '<S19>/validityDelay' */
            STMF4Hall_B.validityDelay = STMF4Hall_DW.validityDelay_DSTATE;

            /* Delay: '<S19>/speedCountDelay' */
            STMF4Hall_B.speedCountDelay = STMF4Hall_DW.speedCountDelay_DSTATE;
          }

          /* End of Delay: '<S19>/validityDelay' */

          /* MinMax: '<S13>/Min' incorporates:
           *  DataStoreRead: '<S13>/Data Store Read'
           *  DataStoreRead: '<S13>/Data Store Read2'
           *  DataStoreRead: '<S13>/Data Store Read7'
           */
          if (STMF4Hall_DW.HallAcapture <= STMF4Hall_DW.HallBcapture) {
            rtb_Min = STMF4Hall_DW.HallAcapture;
          } else {
            rtb_Min = STMF4Hall_DW.HallBcapture;
          }

          if (rtb_Min > STMF4Hall_DW.HallCcapture) {
            rtb_Min = STMF4Hall_DW.HallCcapture;
          }

          /* End of MinMax: '<S13>/Min' */

          /* Logic: '<S20>/OR' incorporates:
           *  DataTypeConversion: '<S18>/Data Type Conversion4'
           *  Delay: '<S20>/Delay One Step1'
           */
          OR = (STMF4Hall_DW.DelayOneStep1_DSTATE || (rtb_FixPtSum1 != 0));

          /* Delay: '<S20>/Delay One Step' incorporates:
           *  DataTypeConversion: '<S18>/Data Type Conversion4'
           */
          if (OR) {
            if (rtb_FixPtSum1 != 0) {
              STMF4Hall_DW.DelayOneStep_DSTATE =
                STMF4Hall_P.SoftwareWatchdogTimer_maxCount;
            }

            /* Delay: '<S20>/Delay One Step' incorporates:
             *  DataTypeConversion: '<S18>/Data Type Conversion4'
             */
            STMF4Hall_B.DelayOneStep = STMF4Hall_DW.DelayOneStep_DSTATE;
          }

          /* End of Delay: '<S20>/Delay One Step' */

          /* RelationalOperator: '<S24>/Compare' incorporates:
           *  Constant: '<S24>/Constant'
           */
          STMF4Hall_DW.DelayOneStep1_DSTATE = (STMF4Hall_B.DelayOneStep >
            STMF4Hall_P.Constant_Value_dk);

          /* Switch: '<S23>/watchdog check' incorporates:
           *  Constant: '<S23>/Constant'
           */
          if (STMF4Hall_DW.DelayOneStep1_DSTATE) {
            /* MinMax: '<S23>/Max' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read3'
             */
            if (STMF4Hall_DW.GlobalSpeedCount >= rtb_Min) {
              tmp_p = STMF4Hall_DW.GlobalSpeedCount;
            } else {
              tmp_p = rtb_Min;
            }

            /* Switch: '<S23>/speed check' incorporates:
             *  Constant: '<S23>/Constant'
             *  DataStoreRead: '<S13>/Data Store Read5'
             *  DataTypeConversion: '<S19>/Data Type Conversion'
             *  Logic: '<S19>/Logical Operator'
             *  MinMax: '<S23>/Max'
             */
            if (tmp_p >= STMF4Hall_P.speedcheck_Threshold) {
              rtb_FixPtSum1 = STMF4Hall_P.Constant_Value_lo;
            } else {
              rtb_FixPtSum1 = (uint16_T)((STMF4Hall_DW.GlobalSpeedValidity != 0)
                || STMF4Hall_B.validityDelay);
            }

            /* End of Switch: '<S23>/speed check' */
          } else {
            rtb_FixPtSum1 = STMF4Hall_P.Constant_Value_lo;
          }

          /* End of Switch: '<S23>/watchdog check' */

          /* If: '<S18>/If' incorporates:
           *  Constant: '<S22>/PositionEnable'
           */
          if (rtb_FixPtSum1 != 0) {
            /* Outputs for IfAction SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' incorporates:
             *  ActionPort: '<S22>/Action Port'
             */
            /* If: '<S22>/If' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read4'
             */
            if (STMF4Hall_DW.GlobalDirection > 0) {
              /* Update for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
               *  ActionPort: '<S33>/Action Port'
               */
              /* Update for If: '<S22>/If' */
              STMF4Hall_DW.IfActionSubsystem_SubsysRanBC = 4;

              /* End of Update for SubSystem: '<S22>/If Action Subsystem' */
            } else {
              /* Update for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
               *  ActionPort: '<S34>/Action Port'
               */
              /* Update for If: '<S22>/If' */
              STMF4Hall_DW.IfActionSubsystem1_SubsysRanBC = 4;

              /* End of Update for SubSystem: '<S22>/If Action Subsystem1' */
            }

            /* End of If: '<S22>/If' */

            /* Outputs for Enabled SubSystem: '<S22>/Subsystem1' incorporates:
             *  EnablePort: '<S35>/Enable'
             */
            if (STMF4Hall_P.PositionEnable_Value > 0) {
              /* If: '<S35>/If1' incorporates:
               *  Constant: '<S35>/Constant'
               */
              if (STMF4Hall_P.Constant_Value > 1.0) {
                /* Outputs for IfAction SubSystem: '<S35>/second_order' incorporates:
                 *  ActionPort: '<S39>/Action Port'
                 */
                /* Product: '<S39>/Divide1' incorporates:
                 *  DataStoreRead: '<S13>/Data Store Read3'
                 *  DataTypeConversion: '<S39>/countData'
                 *  DataTypeConversion: '<S39>/currentSpeedData'
                 */
                rtb_Merge1_g = (real32_T)rtb_Min / (real32_T)
                  STMF4Hall_DW.GlobalSpeedCount;

                /* Gain: '<S39>/Gain' incorporates:
                 *  Constant: '<S39>/Constant'
                 *  DataTypeConversion: '<S39>/countData'
                 *  DataTypeConversion: '<S39>/previousSpeedData'
                 *  Gain: '<S39>/Gain1'
                 *  Product: '<S39>/Divide'
                 *  Product: '<S39>/Product'
                 *  Sum: '<S39>/Sum'
                 *  Sum: '<S39>/Sum1'
                 */
                rtb_Merge1_g = ((rtb_Merge1_g - (real32_T)rtb_Min / (real32_T)
                                 STMF4Hall_B.speedCountDelay) *
                                STMF4Hall_P.Gain1_Gain +
                                STMF4Hall_P.Constant_Value_f) * rtb_Merge1_g *
                  STMF4Hall_P.Gain_Gain;

                /* End of Outputs for SubSystem: '<S35>/second_order' */

                /* Update for IfAction SubSystem: '<S35>/second_order' incorporates:
                 *  ActionPort: '<S39>/Action Port'
                 */
                /* Update for If: '<S35>/If1' */
                STMF4Hall_DW.second_order_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S35>/second_order' */
              } else {
                /* Outputs for IfAction SubSystem: '<S35>/first_order' incorporates:
                 *  ActionPort: '<S38>/Action Port'
                 */
                /* Gain: '<S38>/Gain' incorporates:
                 *  DataStoreRead: '<S13>/Data Store Read3'
                 *  DataTypeConversion: '<S38>/countData'
                 *  DataTypeConversion: '<S38>/currentSpeedData'
                 *  Product: '<S38>/Divide'
                 */
                rtb_Merge1_g = (real32_T)rtb_Min / (real32_T)
                  STMF4Hall_DW.GlobalSpeedCount * STMF4Hall_P.Gain_Gain_o;

                /* End of Outputs for SubSystem: '<S35>/first_order' */

                /* Update for IfAction SubSystem: '<S35>/first_order' incorporates:
                 *  ActionPort: '<S38>/Action Port'
                 */
                /* Update for If: '<S35>/If1' */
                STMF4Hall_DW.first_order_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S35>/first_order' */
              }

              /* End of If: '<S35>/If1' */

              /* Saturate: '<S35>/Saturation' */
              if (rtb_Merge1_g > STMF4Hall_P.Saturation_UpperSat) {
                rtb_Merge1_g = STMF4Hall_P.Saturation_UpperSat;
              } else if (rtb_Merge1_g < STMF4Hall_P.Saturation_LowerSat) {
                rtb_Merge1_g = STMF4Hall_P.Saturation_LowerSat;
              }

              /* End of Saturate: '<S35>/Saturation' */

              /* If: '<S35>/If' incorporates:
               *  DataStoreRead: '<S13>/Data Store Read4'
               */
              if (STMF4Hall_DW.GlobalDirection != 1) {
                /* Outputs for IfAction SubSystem: '<S35>/-ve Direction' incorporates:
                 *  ActionPort: '<S37>/Action Port'
                 */
                /* SwitchCase: '<S37>/Switch Case' incorporates:
                 *  DataStoreRead: '<S13>/Data Store Read1'
                 */
                switch (STMF4Hall_DW.GlobalHallState) {
                 case 5:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 1' incorporates:
                   *  ActionPort: '<S47>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof1);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 1' */
                  break;

                 case 4:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 2' incorporates:
                   *  ActionPort: '<S48>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof2);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 2' */
                  break;

                 case 6:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 3' incorporates:
                   *  ActionPort: '<S49>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof3);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 3' */
                  break;

                 case 2:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 4' incorporates:
                   *  ActionPort: '<S50>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof4);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 4' */
                  break;

                 case 3:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 5' incorporates:
                   *  ActionPort: '<S51>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof5);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 5' */
                  break;

                 case 1:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 6' incorporates:
                   *  ActionPort: '<S52>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof6);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 6' */
                  break;

                 default:
                  /* Outputs for IfAction SubSystem: '<S37>/Hall Value of 7' incorporates:
                   *  ActionPort: '<S53>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof7);

                  /* End of Outputs for SubSystem: '<S37>/Hall Value of 7' */
                  break;
                }

                /* End of SwitchCase: '<S37>/Switch Case' */

                /* Merge: '<S35>/Merge' incorporates:
                 *  Sum: '<S37>/Sum'
                 */
                STMF4Hall_B.Merge = rtb_Merge1_nk - rtb_Merge1_g;

                /* End of Outputs for SubSystem: '<S35>/-ve Direction' */

                /* Update for IfAction SubSystem: '<S35>/-ve Direction' incorporates:
                 *  ActionPort: '<S37>/Action Port'
                 */
                /* Update for If: '<S35>/If' */
                STMF4Hall_DW.veDirection_SubsysRanBC_e = 4;

                /* End of Update for SubSystem: '<S35>/-ve Direction' */
              } else {
                /* Outputs for IfAction SubSystem: '<S35>/+ve Direction' incorporates:
                 *  ActionPort: '<S36>/Action Port'
                 */
                /* SwitchCase: '<S36>/Switch Case' incorporates:
                 *  DataStoreRead: '<S13>/Data Store Read1'
                 */
                switch (STMF4Hall_DW.GlobalHallState) {
                 case 5:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 1' incorporates:
                   *  ActionPort: '<S40>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof1_a);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 1' */
                  break;

                 case 4:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 2' incorporates:
                   *  ActionPort: '<S41>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof2_a);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 2' */
                  break;

                 case 6:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 3' incorporates:
                   *  ActionPort: '<S42>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof3_n);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 3' */
                  break;

                 case 2:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 4' incorporates:
                   *  ActionPort: '<S43>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof4_j);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 4' */
                  break;

                 case 3:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 5' incorporates:
                   *  ActionPort: '<S44>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof5_j);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 5' */
                  break;

                 case 1:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 6' incorporates:
                   *  ActionPort: '<S45>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof6_g);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 6' */
                  break;

                 default:
                  /* Outputs for IfAction SubSystem: '<S36>/Hall Value of 7' incorporates:
                   *  ActionPort: '<S46>/Action Port'
                   */
                  STMF4Hall_HallValueof1(&rtb_Merge1_nk,
                    &STMF4Hall_P.HallValueof7_h);

                  /* End of Outputs for SubSystem: '<S36>/Hall Value of 7' */
                  break;
                }

                /* End of SwitchCase: '<S36>/Switch Case' */

                /* Merge: '<S35>/Merge' incorporates:
                 *  Sum: '<S36>/Sum'
                 */
                STMF4Hall_B.Merge = rtb_Merge1_nk + rtb_Merge1_g;

                /* End of Outputs for SubSystem: '<S35>/+ve Direction' */

                /* Update for IfAction SubSystem: '<S35>/+ve Direction' incorporates:
                 *  ActionPort: '<S36>/Action Port'
                 */
                /* Update for If: '<S35>/If' */
                STMF4Hall_DW.veDirection_SubsysRanBC = 4;

                /* End of Update for SubSystem: '<S35>/+ve Direction' */
              }

              /* End of If: '<S35>/If' */
              STMF4Hall_DW.Subsystem1_SubsysRanBC = 4;
            }

            /* End of Outputs for SubSystem: '<S22>/Subsystem1' */

            /* SignalConversion generated from: '<S22>/rawPosition' incorporates:
             *  Constant: '<S22>/PositionEnable'
             */
            rtb_Merge1_g = STMF4Hall_B.Merge;

            /* End of Outputs for SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' */

            /* Update for IfAction SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' incorporates:
             *  ActionPort: '<S22>/Action Port'
             */
            /* Update for If: '<S18>/If' */
            STMF4Hall_DW.SpeedanddirectionarevalidUsespe = 4;

            /* End of Update for SubSystem: '<S18>/Speed and direction are valid Use speed to extrapolate position' */
          } else {
            /* Outputs for IfAction SubSystem: '<S18>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' incorporates:
             *  ActionPort: '<S21>/Action Port'
             */
            /* SwitchCase: '<S25>/Switch Case' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read1'
             */
            switch (STMF4Hall_DW.GlobalHallState) {
             case 5:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 1' incorporates:
               *  ActionPort: '<S26>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof1_ar);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 1' */
              break;

             case 4:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 2' incorporates:
               *  ActionPort: '<S27>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof2_m);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 2' */
              break;

             case 6:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 3' incorporates:
               *  ActionPort: '<S28>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof3_b);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 3' */
              break;

             case 2:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 4' incorporates:
               *  ActionPort: '<S29>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof4_f);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 4' */
              break;

             case 3:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 5' incorporates:
               *  ActionPort: '<S30>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof5_k);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 5' */
              break;

             case 1:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 6' incorporates:
               *  ActionPort: '<S31>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof6_j);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 6' */
              break;

             default:
              /* Outputs for IfAction SubSystem: '<S25>/Hall Value of 7' incorporates:
               *  ActionPort: '<S32>/Action Port'
               */
              STMF4Hall_HallValueof1(&rtb_Merge1_g, &STMF4Hall_P.HallValueof7_hc);

              /* End of Outputs for SubSystem: '<S25>/Hall Value of 7' */
              break;
            }

            /* End of SwitchCase: '<S25>/Switch Case' */
            /* End of Outputs for SubSystem: '<S18>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */

            /* Update for IfAction SubSystem: '<S18>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' incorporates:
             *  ActionPort: '<S21>/Action Port'
             */
            /* Update for If: '<S18>/If' */
            STMF4Hall_DW.SpeedanddirectionarenotvalidPos = 4;

            /* End of Update for SubSystem: '<S18>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */
          }

          /* End of If: '<S18>/If' */

          /* Gain: '<S18>/PositionUnit' */
          STMF4Hall_B.PositionUnit = STMF4Hall_P.PositionUnit_Gain *
            rtb_Merge1_g;

          /* UnitDelay: '<S11>/Output' */
          STMF4Hall_B.Output = STMF4Hall_DW.Output_DSTATE;

          /* Sum: '<S16>/FixPt Sum1' incorporates:
           *  Constant: '<S16>/FixPt Constant'
           */
          rtb_FixPtSum1 = (uint16_T)((uint32_T)STMF4Hall_B.Output +
            STMF4Hall_P.FixPtConstant_Value);

          /* MATLABSystem: '<S15>/Analog to Digital Converter' */
          injectedReadADCIntr(STMF4Hall_DW.obj.ADCHandle, ADC_READ, &tmp[0]);

          /* Update for Delay: '<S19>/validityDelay' incorporates:
           *  DataStoreRead: '<S13>/Data Store Read3'
           *  DataStoreRead: '<S13>/Data Store Read5'
           *  DataTypeConversion: '<S19>/Data Type Conversion'
           *  Delay: '<S19>/speedCountDelay'
           */
          if (Switch != 0) {
            STMF4Hall_DW.validityDelay_DSTATE =
              (STMF4Hall_DW.GlobalSpeedValidity != 0);
            STMF4Hall_DW.speedCountDelay_DSTATE = STMF4Hall_DW.GlobalSpeedCount;
          }

          /* End of Update for Delay: '<S19>/validityDelay' */

          /* Update for Delay: '<S20>/Delay One Step' incorporates:
           *  Constant: '<S20>/Constant2'
           *  Sum: '<S20>/Sum'
           */
          if (OR) {
            STMF4Hall_DW.DelayOneStep_DSTATE = (uint16_T)((uint32_T)
              STMF4Hall_B.DelayOneStep - STMF4Hall_P.Constant2_Value);
          }

          /* End of Update for Delay: '<S20>/Delay One Step' */

          /* Switch: '<S17>/FixPt Switch' */
          if (rtb_FixPtSum1 > STMF4Hall_P.WrapToZero_Threshold) {
            /* Update for UnitDelay: '<S11>/Output' incorporates:
             *  Constant: '<S17>/Constant'
             */
            STMF4Hall_DW.Output_DSTATE = STMF4Hall_P.Constant_Value_o;
          } else {
            /* Update for UnitDelay: '<S11>/Output' */
            STMF4Hall_DW.Output_DSTATE = rtb_FixPtSum1;
          }

          /* End of Switch: '<S17>/FixPt Switch' */
          STMF4Hall_DW.ADCSIC_SubsysRanBC = 4;
        }

        /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S129>/Hardware Interrupt' */
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
