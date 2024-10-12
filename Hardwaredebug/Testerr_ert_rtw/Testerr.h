/*
 * File: Testerr.h
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

#ifndef Testerr_h_
#define Testerr_h_
#ifndef Testerr_COMMON_INCLUDES_
#define Testerr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "main.h"
#endif                                 /* Testerr_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "Testerr_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<S109>/If Action Subsystem6' */
typedef struct {
  int8_T IfActionSubsystem6_SubsysRanBC;/* '<S109>/If Action Subsystem6' */
} DW_IfActionSubsystem6_Testerr_T;

/* Block states (default storage) for system '<S109>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S109>/If Action Subsystem' */
} DW_IfActionSubsystem_Testerr_T;

/* Block signals for system '<S107>/Valid Halls' */
typedef struct {
  uint16_T Merge;                      /* '<S109>/Merge' */
  uint16_T Merge1;                     /* '<S109>/Merge1' */
  uint16_T Merge3;                     /* '<S109>/Merge3' */
  int16_T Merge2;                      /* '<S109>/Merge2' */
} B_ValidHalls_Testerr_T;

/* Block states (default storage) for system '<S107>/Valid Halls' */
typedef struct {
  int8_T ValidHalls_SubsysRanBC;       /* '<S107>/Valid Halls' */
  int8_T SwitchCaseActionSubsystem_Subsy;
                                     /* '<S109>/Switch Case Action Subsystem' */
  int8_T IfActionSubsystem8_SubsysRanBC;/* '<S109>/If Action Subsystem8' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem5;/* '<S109>/If Action Subsystem5' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem4;/* '<S109>/If Action Subsystem4' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem3;/* '<S109>/If Action Subsystem3' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem2;/* '<S109>/If Action Subsystem2' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem1;/* '<S109>/If Action Subsystem1' */
  DW_IfActionSubsystem_Testerr_T IfActionSubsystem;/* '<S109>/If Action Subsystem' */
  DW_IfActionSubsystem6_Testerr_T IfActionSubsystem7;/* '<S109>/If Action Subsystem7' */
  DW_IfActionSubsystem6_Testerr_T IfActionSubsystem6;/* '<S109>/If Action Subsystem6' */
} DW_ValidHalls_Testerr_T;

/* Block states (default storage) for system '<S107>/Bad hall (glitch or wrong connection)' */
typedef struct {
  int8_T Badhallglitchorwrongconnection_;
                            /* '<S107>/Bad hall (glitch or wrong connection)' */
} DW_Badhallglitchorwrongconnec_T;

/* Block states (default storage) for system '<S37>/Hall Value of 1' */
typedef struct {
  int8_T HallValueof1_SubsysRanBC;     /* '<S37>/Hall Value of 1' */
} DW_HallValueof1_Testerr_T;

/* Block signals (default storage) */
typedef struct {
  uint32_T speedCountDelay;            /* '<S19>/speedCountDelay' */
  real32_T degree;                     /* '<Root>/Rate Transition7' */
  real32_T Sum;                        /* '<S17>/Sum' */
  real32_T Merge;                      /* '<S35>/Merge' */
  uint16_T testct;                     /* '<Root>/Rate Transition' */
  uint16_T DelayOneStep;               /* '<S20>/Delay One Step' */
  uint16_T Output;                     /* '<S10>/Output' */
  boolean_T validityDelay;             /* '<S19>/validityDelay' */
  B_ValidHalls_Testerr_T ValidHalls_f; /* '<S57>/Valid Halls' */
  B_ValidHalls_Testerr_T ValidHalls_k; /* '<S82>/Valid Halls' */
  B_ValidHalls_Testerr_T ValidHalls;   /* '<S107>/Valid Halls' */
} B_Testerr_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S14>/Analog to Digital Converter' */
  stm32cube_blocks_TimerBlock_T_T obj_l;/* '<S56>/Timer' */
  stm32cube_blocks_TimerBlock_T_T obj_h;/* '<S81>/Timer' */
  stm32cube_blocks_TimerBlock_T_T obj_o;/* '<S106>/Timer' */
  stm32cube_blocks_PWMOutput_Te_T obj_ob;/* '<S137>/PWM Output' */
  real_T HallCcapture;                 /* '<Root>/Data Store Memory10' */
  real_T HallBcapture;                 /* '<Root>/Data Store Memory4' */
  real_T HallAcapture;                 /* '<Root>/Data Store Memory2' */
  int64_T Timehall;                    /* '<Root>/Data Store Memory3' */
  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S17>/Discrete-Time Integrator' */
  uint32_T speedCountDelay_DSTATE;     /* '<S19>/speedCountDelay' */
  uint32_T Delay_DSTATE;               /* '<S56>/Delay' */
  uint32_T Delay_DSTATE_i;             /* '<S81>/Delay' */
  uint32_T Delay_DSTATE_k;             /* '<S106>/Delay' */
  real32_T DiscreteTimeIntegrator_PREV_U;/* '<S17>/Discrete-Time Integrator' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  uint32_T Timercntprev;               /* '<Root>/Data Store Memory1' */
  uint32_T GlobalSpeedCount;           /* '<Root>/Data Store Memory6' */
  uint32_T ADCSIC_PREV_T;              /* '<Root>/ADC SIC' */
  uint16_T DelayOneStep_DSTATE;        /* '<S20>/Delay One Step' */
  uint16_T Output_DSTATE;              /* '<S10>/Output' */
  int16_T GlobalDirection;             /* '<Root>/Data Store Memory5' */
  uint16_T GlobalSpeedValidity;        /* '<Root>/Data Store Memory7' */
  uint16_T HallStateChangeFlag;        /* '<Root>/Data Store Memory8' */
  boolean_T validityDelay_DSTATE;      /* '<S19>/validityDelay' */
  boolean_T DelayOneStep1_DSTATE;      /* '<S20>/Delay One Step1' */
  int8_T ADCSIC_SubsysRanBC;           /* '<Root>/ADC SIC' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S17>/Discrete-Time Integrator' */
  int8_T SpeedanddirectionarenotvalidPos;
  /* '<S18>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */
  int8_T SpeedanddirectionarevalidUsespe;
  /* '<S18>/Speed and direction are valid Use speed to extrapolate position' */
  int8_T Subsystem1_SubsysRanBC;       /* '<S22>/Subsystem1' */
  int8_T first_order_SubsysRanBC;      /* '<S35>/first_order' */
  int8_T second_order_SubsysRanBC;     /* '<S35>/second_order' */
  int8_T veDirection_SubsysRanBC;      /* '<S35>/+ve Direction' */
  int8_T veDirection_SubsysRanBC_j;    /* '<S35>/-ve Direction' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S22>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S22>/If Action Subsystem' */
  int8_T HA_SubsysRanBC;               /* '<Root>/HA' */
  int8_T HB_SubsysRanBC;               /* '<Root>/HB' */
  int8_T HC_SubsysRanBC;               /* '<Root>/HC' */
  uint8_T GlobalHallState;             /* '<Root>/Data Store Memory' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S17>/Discrete-Time Integrator' */
  boolean_T ADCSIC_RESET_ELAPS_T;      /* '<Root>/ADC SIC' */
  DW_HallValueof1_Testerr_T HallValueof7_e;/* '<S25>/Hall Value of 7' */
  DW_HallValueof1_Testerr_T HallValueof6_a;/* '<S25>/Hall Value of 6' */
  DW_HallValueof1_Testerr_T HallValueof5_o;/* '<S25>/Hall Value of 5' */
  DW_HallValueof1_Testerr_T HallValueof4_o;/* '<S25>/Hall Value of 4' */
  DW_HallValueof1_Testerr_T HallValueof3_f;/* '<S25>/Hall Value of 3' */
  DW_HallValueof1_Testerr_T HallValueof2_d;/* '<S25>/Hall Value of 2' */
  DW_HallValueof1_Testerr_T HallValueof1_o;/* '<S25>/Hall Value of 1' */
  DW_HallValueof1_Testerr_T HallValueof7_o;/* '<S36>/Hall Value of 7' */
  DW_HallValueof1_Testerr_T HallValueof6_i;/* '<S36>/Hall Value of 6' */
  DW_HallValueof1_Testerr_T HallValueof5_n;/* '<S36>/Hall Value of 5' */
  DW_HallValueof1_Testerr_T HallValueof4_j;/* '<S36>/Hall Value of 4' */
  DW_HallValueof1_Testerr_T HallValueof3_b;/* '<S36>/Hall Value of 3' */
  DW_HallValueof1_Testerr_T HallValueof2_m;/* '<S36>/Hall Value of 2' */
  DW_HallValueof1_Testerr_T HallValueof1_g;/* '<S36>/Hall Value of 1' */
  DW_HallValueof1_Testerr_T HallValueof7;/* '<S37>/Hall Value of 7' */
  DW_HallValueof1_Testerr_T HallValueof6;/* '<S37>/Hall Value of 6' */
  DW_HallValueof1_Testerr_T HallValueof5;/* '<S37>/Hall Value of 5' */
  DW_HallValueof1_Testerr_T HallValueof4;/* '<S37>/Hall Value of 4' */
  DW_HallValueof1_Testerr_T HallValueof3;/* '<S37>/Hall Value of 3' */
  DW_HallValueof1_Testerr_T HallValueof2;/* '<S37>/Hall Value of 2' */
  DW_HallValueof1_Testerr_T HallValueof1;/* '<S37>/Hall Value of 1' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnectio_a;
                             /* '<S57>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_Testerr_T ValidHalls_f;/* '<S57>/Valid Halls' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnectio_i;
                             /* '<S82>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_Testerr_T ValidHalls_k;/* '<S82>/Valid Halls' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnection;
                            /* '<S107>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_Testerr_T ValidHalls;  /* '<S107>/Valid Halls' */
} DW_Testerr_T;

/* Parameters for system: '<S109>/If Action Subsystem6' */
struct P_IfActionSubsystem6_Testerr_T_ {
  int16_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S116>/Constant'
                                        */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S116>/Constant1'
                                        */
};

/* Parameters for system: '<S109>/If Action Subsystem' */
struct P_IfActionSubsystem_Testerr_T_ {
  uint16_T previous_Value;             /* Computed Parameter: previous_Value
                                        * Referenced by: '<S110>/previous'
                                        */
  uint16_T next_Value;                 /* Computed Parameter: next_Value
                                        * Referenced by: '<S110>/next'
                                        */
};

/* Parameters for system: '<S107>/Valid Halls' */
struct P_ValidHalls_Testerr_T_ {
  int16_T Merge2_InitialOutput;      /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<S109>/Merge2'
                                      */
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S118>/Constant'
                                        */
  uint16_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S109>/Merge'
                                       */
  uint16_T Merge1_InitialOutput;     /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S109>/Merge1'
                                      */
  uint16_T Merge3_InitialOutput;     /* Computed Parameter: Merge3_InitialOutput
                                      * Referenced by: '<S109>/Merge3'
                                      */
  boolean_T Constant_Value_g;          /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S109>/Constant'
                                        */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem5;/* '<S109>/If Action Subsystem5' */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem4;/* '<S109>/If Action Subsystem4' */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem3;/* '<S109>/If Action Subsystem3' */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem2;/* '<S109>/If Action Subsystem2' */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem1;/* '<S109>/If Action Subsystem1' */
  P_IfActionSubsystem_Testerr_T IfActionSubsystem;/* '<S109>/If Action Subsystem' */
  P_IfActionSubsystem6_Testerr_T IfActionSubsystem7;/* '<S109>/If Action Subsystem7' */
  P_IfActionSubsystem6_Testerr_T IfActionSubsystem6;/* '<S109>/If Action Subsystem6' */
};

/* Parameters for system: '<S107>/Bad hall (glitch or wrong connection)' */
struct P_Badhallglitchorwrongconnect_T_ {
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S108>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S108>/Constant1'
                                        */
};

/* Parameters for system: '<S37>/Hall Value of 1' */
struct P_HallValueof1_Testerr_T_ {
  real32_T Constant_Value;             /* Expression: single(0.16667)
                                        * Referenced by: '<S47>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_Testerr_T_ {
  uint16_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S16>/FixPt Switch'
                                        */
  uint16_T SoftwareWatchdogTimer_maxCount;
                               /* Mask Parameter: SoftwareWatchdogTimer_maxCount
                                * Referenced by: '<S20>/Delay One Step'
                                */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant1_Value_i;            /* Expression: 100
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant1_Value_n;            /* Expression: 100
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: EnableSecondOrder
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S17>/Discrete-Time Integrator'
                            */
  real_T Constant1_Value_na;           /* Expression: 20
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T DataStoreMemory9_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory9'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 10
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T DataStoreMemory10_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory10'
                                         */
  real_T DataStoreMemory4_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory4'
                                        */
  real_T DataStoreMemory2_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  int64_T Out1_Y0;                     /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S4>/Out1'
                                        */
  int64_T Out1_Y0_j;                   /* Computed Parameter: Out1_Y0_j
                                        * Referenced by: '<S3>/Out1'
                                        */
  int64_T Out1_Y0_i;                   /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S2>/Out1'
                                        */
  int64_T DataStoreMemory3_InitialValue;
                            /* Computed Parameter: DataStoreMemory3_InitialValue
                             * Referenced by: '<Root>/Data Store Memory3'
                             */
  int32_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  int32_T Gain_Gain_b;                 /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S3>/Gain'
                                        */
  int32_T Gain_Gain_i;                 /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S2>/Gain'
                                        */
  real32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S39>/Constant'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S39>/Gain1'
                                        */
  real32_T Gain_Gain_g;                /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S39>/Gain'
                                        */
  real32_T Gain_Gain_n;                /* Computed Parameter: Gain_Gain_n
                                        * Referenced by: '<S38>/Gain'
                                        */
  real32_T Saturation_UpperSat;        /* Expression: single(0.16667)
                                        * Referenced by: '<S35>/Saturation'
                                        */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S35>/Saturation'
                                       */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S35>/Merge'
                                       */
  real32_T SpeedGain_Gain;             /* Expression: single(6*MinSpeed)
                                        * Referenced by: '<S22>/SpeedGain'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S21>/Constant'
                                        */
  real32_T Posdegree_Y0;               /* Computed Parameter: Posdegree_Y0
                                        * Referenced by: '<S1>/Posdegree'
                                        */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S17>/Discrete-Time Integrator'
                                 */
  real32_T DiscreteTimeIntegrator_UpperSat;
                          /* Computed Parameter: DiscreteTimeIntegrator_UpperSat
                           * Referenced by: '<S17>/Discrete-Time Integrator'
                           */
  real32_T DiscreteTimeIntegrator_LowerSat;
                          /* Computed Parameter: DiscreteTimeIntegrator_LowerSat
                           * Referenced by: '<S17>/Discrete-Time Integrator'
                           */
  real32_T Gain_Gain_bb;               /* Computed Parameter: Gain_Gain_bb
                                        * Referenced by: '<S17>/Gain'
                                        */
  real32_T PositionUnit_Gain;          /* Expression: single(360)
                                        * Referenced by: '<S18>/PositionUnit'
                                        */
  uint32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S106>/Delay'
                                    */
  uint32_T Delay_InitialCondition_p;
                                 /* Computed Parameter: Delay_InitialCondition_p
                                  * Referenced by: '<S81>/Delay'
                                  */
  uint32_T Delay_InitialCondition_b;
                                 /* Computed Parameter: Delay_InitialCondition_b
                                  * Referenced by: '<S56>/Delay'
                                  */
  uint32_T SpeedConst_Value;
                          /* Expression: uint32(30*ClkFreq/(PolePairs*MinSpeed))
                           * Referenced by: '<S22>/SpeedConst'
                           */
  uint32_T speedcheck_Threshold;     /* Computed Parameter: speedcheck_Threshold
                                      * Referenced by: '<S23>/speed check'
                                      */
  uint32_T speedCountDelay_InitialConditio;
                          /* Computed Parameter: speedCountDelay_InitialConditio
                           * Referenced by: '<S19>/speedCountDelay'
                           */
  uint32_T DataStoreMemory1_InitialValue;
                            /* Computed Parameter: DataStoreMemory1_InitialValue
                             * Referenced by: '<Root>/Data Store Memory1'
                             */
  uint32_T DataStoreMemory6_InitialValue;
                            /* Computed Parameter: DataStoreMemory6_InitialValue
                             * Referenced by: '<Root>/Data Store Memory6'
                             */
  int16_T DataStoreMemory5_InitialValue;
                            /* Computed Parameter: DataStoreMemory5_InitialValue
                             * Referenced by: '<Root>/Data Store Memory5'
                             */
  uint16_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S104>/Constant'
                                        */
  uint16_T Constant_Value_jq;          /* Computed Parameter: Constant_Value_jq
                                        * Referenced by: '<S79>/Constant'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S54>/Constant'
                                        */
  uint16_T Constant_Value_c2;          /* Computed Parameter: Constant_Value_c2
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint16_T PositionEnable_Value;     /* Computed Parameter: PositionEnable_Value
                                      * Referenced by: '<S22>/PositionEnable'
                                      */
  uint16_T WatchDog_Value;             /* Computed Parameter: WatchDog_Value
                                        * Referenced by: '<S18>/WatchDog'
                                        */
  uint16_T ct_Y0;                      /* Computed Parameter: ct_Y0
                                        * Referenced by: '<S1>/ct'
                                        */
  uint16_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S24>/Constant'
                                        */
  uint16_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S23>/Constant'
                                        */
  uint16_T Order_Value;                /* Computed Parameter: Order_Value
                                        * Referenced by: '<S19>/Order'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S19>/Switch'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S20>/Constant2'
                                        */
  uint16_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S15>/FixPt Constant'
                                       */
  uint16_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S10>/Output'
                                   */
  uint16_T DataStoreMemory7_InitialValue;
                            /* Computed Parameter: DataStoreMemory7_InitialValue
                             * Referenced by: '<Root>/Data Store Memory7'
                             */
  uint16_T DataStoreMemory8_InitialValue;
                            /* Computed Parameter: DataStoreMemory8_InitialValue
                             * Referenced by: '<Root>/Data Store Memory8'
                             */
  boolean_T validityDelay_InitialCondition;
                           /* Computed Parameter: validityDelay_InitialCondition
                            * Referenced by: '<S19>/validityDelay'
                            */
  boolean_T DelayOneStep1_InitialCondition;
                           /* Computed Parameter: DelayOneStep1_InitialCondition
                            * Referenced by: '<S20>/Delay One Step1'
                            */
  uint8_T Gain_Gain_k;                 /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S105>/Gain'
                                        */
  uint8_T Gain_Gain_ko;                /* Computed Parameter: Gain_Gain_ko
                                        * Referenced by: '<S80>/Gain'
                                        */
  uint8_T Gain_Gain_f;                 /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S55>/Gain'
                                        */
  uint8_T Gain1_Gain_g;                /* Computed Parameter: Gain1_Gain_g
                                        * Referenced by: '<S105>/Gain1'
                                        */
  uint8_T Gain1_Gain_o;                /* Computed Parameter: Gain1_Gain_o
                                        * Referenced by: '<S80>/Gain1'
                                        */
  uint8_T Gain1_Gain_l;                /* Computed Parameter: Gain1_Gain_l
                                        * Referenced by: '<S55>/Gain1'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S105>/Gain2'
                                        */
  uint8_T Gain2_Gain_b;                /* Computed Parameter: Gain2_Gain_b
                                        * Referenced by: '<S80>/Gain2'
                                        */
  uint8_T Gain2_Gain_j;                /* Computed Parameter: Gain2_Gain_j
                                        * Referenced by: '<S55>/Gain2'
                                        */
  uint8_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<Root>/Data Store Memory'
                              */
  P_HallValueof1_Testerr_T HallValueof7_e;/* '<S25>/Hall Value of 7' */
  P_HallValueof1_Testerr_T HallValueof6_a;/* '<S25>/Hall Value of 6' */
  P_HallValueof1_Testerr_T HallValueof5_o;/* '<S25>/Hall Value of 5' */
  P_HallValueof1_Testerr_T HallValueof4_o;/* '<S25>/Hall Value of 4' */
  P_HallValueof1_Testerr_T HallValueof3_f;/* '<S25>/Hall Value of 3' */
  P_HallValueof1_Testerr_T HallValueof2_d;/* '<S25>/Hall Value of 2' */
  P_HallValueof1_Testerr_T HallValueof1_o;/* '<S25>/Hall Value of 1' */
  P_HallValueof1_Testerr_T HallValueof7_o;/* '<S36>/Hall Value of 7' */
  P_HallValueof1_Testerr_T HallValueof6_i;/* '<S36>/Hall Value of 6' */
  P_HallValueof1_Testerr_T HallValueof5_n;/* '<S36>/Hall Value of 5' */
  P_HallValueof1_Testerr_T HallValueof4_j;/* '<S36>/Hall Value of 4' */
  P_HallValueof1_Testerr_T HallValueof3_b;/* '<S36>/Hall Value of 3' */
  P_HallValueof1_Testerr_T HallValueof2_m;/* '<S36>/Hall Value of 2' */
  P_HallValueof1_Testerr_T HallValueof1_g;/* '<S36>/Hall Value of 1' */
  P_HallValueof1_Testerr_T HallValueof7;/* '<S37>/Hall Value of 7' */
  P_HallValueof1_Testerr_T HallValueof6;/* '<S37>/Hall Value of 6' */
  P_HallValueof1_Testerr_T HallValueof5;/* '<S37>/Hall Value of 5' */
  P_HallValueof1_Testerr_T HallValueof4;/* '<S37>/Hall Value of 4' */
  P_HallValueof1_Testerr_T HallValueof3;/* '<S37>/Hall Value of 3' */
  P_HallValueof1_Testerr_T HallValueof2;/* '<S37>/Hall Value of 2' */
  P_HallValueof1_Testerr_T HallValueof1;/* '<S37>/Hall Value of 1' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnectio_a;
                             /* '<S57>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_Testerr_T ValidHalls_f; /* '<S57>/Valid Halls' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnectio_i;
                             /* '<S82>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_Testerr_T ValidHalls_k; /* '<S82>/Valid Halls' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnection;
                            /* '<S107>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_Testerr_T ValidHalls;   /* '<S107>/Valid Halls' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Testerr_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTick2;
    uint32_T clockTick3;
    uint32_T clockTick4;
    uint32_T clockTick5;
    uint32_T clockTick6;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Testerr_T Testerr_P;

/* Block signals (default storage) */
extern B_Testerr_T Testerr_B;

/* Block states (default storage) */
extern DW_Testerr_T Testerr_DW;

/* External function called from main */
extern void Testerr_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Testerr_initialize(void);
extern void Testerr_step0(void);
extern void Testerr_step1(void);
extern void Testerr_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Testerr_T *const Testerr_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  void ADC_IRQHandler(void);
  void EXTI15_10_IRQHandler(void);
  void Testerr_configure_interrupts (void);
  void Testerr_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S11>/Data Type' : Unused code path elimination
 * Block '<S11>/Number of pole pairs' : Unused code path elimination
 * Block '<S11>/PWM Frequency' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S4>/Constant' : Unused code path elimination
 * Block '<S8>/Data Type' : Unused code path elimination
 * Block '<S8>/Number of pole pairs' : Unused code path elimination
 * Block '<S8>/PWM Frequency' : Unused code path elimination
 * Block '<S18>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S18>/counterSize2' : Eliminate redundant data type conversion
 * Block '<S2>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S2>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S54>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S79>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S104>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Testerr'
 * '<S1>'   : 'Testerr/ADC SIC'
 * '<S2>'   : 'Testerr/HA'
 * '<S3>'   : 'Testerr/HB'
 * '<S4>'   : 'Testerr/HC'
 * '<S5>'   : 'Testerr/Hardware Interrupt'
 * '<S6>'   : 'Testerr/Hardware Interrupt2'
 * '<S7>'   : 'Testerr/Heartbeat LED'
 * '<S8>'   : 'Testerr/Parameters'
 * '<S9>'   : 'Testerr/ADC SIC/Analog to Digital Converter'
 * '<S10>'  : 'Testerr/ADC SIC/Counter Limited1'
 * '<S11>'  : 'Testerr/ADC SIC/Parameters'
 * '<S12>'  : 'Testerr/ADC SIC/Subsystem'
 * '<S13>'  : 'Testerr/ADC SIC/Analog to Digital Converter/ECSoC'
 * '<S14>'  : 'Testerr/ADC SIC/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S15>'  : 'Testerr/ADC SIC/Counter Limited1/Increment Real World'
 * '<S16>'  : 'Testerr/ADC SIC/Counter Limited1/Wrap To Zero'
 * '<S17>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1'
 * '<S18>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1'
 * '<S19>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/ExtrapolationOrder'
 * '<S20>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Software Watchdog Timer'
 * '<S21>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant'
 * '<S22>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position'
 * '<S23>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/VaidityCheck'
 * '<S24>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Software Watchdog Timer/Compare To Zero'
 * '<S25>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction'
 * '<S26>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 1'
 * '<S27>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 2'
 * '<S28>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 3'
 * '<S29>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 4'
 * '<S30>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 5'
 * '<S31>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 6'
 * '<S32>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 7'
 * '<S33>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem'
 * '<S34>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem1'
 * '<S35>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1'
 * '<S36>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction'
 * '<S37>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction'
 * '<S38>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/first_order'
 * '<S39>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/second_order'
 * '<S40>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 1'
 * '<S41>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 2'
 * '<S42>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 3'
 * '<S43>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 4'
 * '<S44>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 5'
 * '<S45>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 6'
 * '<S46>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 7'
 * '<S47>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 1'
 * '<S48>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 2'
 * '<S49>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 3'
 * '<S50>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 4'
 * '<S51>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 5'
 * '<S52>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 6'
 * '<S53>'  : 'Testerr/ADC SIC/Subsystem/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 7'
 * '<S54>'  : 'Testerr/HA/Hall Validity'
 * '<S55>'  : 'Testerr/HA/Hallstation'
 * '<S56>'  : 'Testerr/HA/Subsystem'
 * '<S57>'  : 'Testerr/HA/Hall Validity/Subsystem'
 * '<S58>'  : 'Testerr/HA/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S59>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls'
 * '<S60>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S61>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S62>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S63>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S64>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S65>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S66>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S67>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S68>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S69>'  : 'Testerr/HA/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S70>'  : 'Testerr/HA/Hallstation/Digital Port Read'
 * '<S71>'  : 'Testerr/HA/Hallstation/Digital Port Read1'
 * '<S72>'  : 'Testerr/HA/Hallstation/Digital Port Read2'
 * '<S73>'  : 'Testerr/HA/Hallstation/Digital Port Read/ECSoC'
 * '<S74>'  : 'Testerr/HA/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S75>'  : 'Testerr/HA/Hallstation/Digital Port Read1/ECSoC'
 * '<S76>'  : 'Testerr/HA/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S77>'  : 'Testerr/HA/Hallstation/Digital Port Read2/ECSoC'
 * '<S78>'  : 'Testerr/HA/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S79>'  : 'Testerr/HB/Hall Validity'
 * '<S80>'  : 'Testerr/HB/Hallstation'
 * '<S81>'  : 'Testerr/HB/Subsystem'
 * '<S82>'  : 'Testerr/HB/Hall Validity/Subsystem'
 * '<S83>'  : 'Testerr/HB/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S84>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls'
 * '<S85>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S86>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S87>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S88>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S89>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S90>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S91>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S92>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S93>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S94>'  : 'Testerr/HB/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S95>'  : 'Testerr/HB/Hallstation/Digital Port Read'
 * '<S96>'  : 'Testerr/HB/Hallstation/Digital Port Read1'
 * '<S97>'  : 'Testerr/HB/Hallstation/Digital Port Read2'
 * '<S98>'  : 'Testerr/HB/Hallstation/Digital Port Read/ECSoC'
 * '<S99>'  : 'Testerr/HB/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S100>' : 'Testerr/HB/Hallstation/Digital Port Read1/ECSoC'
 * '<S101>' : 'Testerr/HB/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S102>' : 'Testerr/HB/Hallstation/Digital Port Read2/ECSoC'
 * '<S103>' : 'Testerr/HB/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S104>' : 'Testerr/HC/Hall Validity'
 * '<S105>' : 'Testerr/HC/Hallstation'
 * '<S106>' : 'Testerr/HC/Subsystem'
 * '<S107>' : 'Testerr/HC/Hall Validity/Subsystem'
 * '<S108>' : 'Testerr/HC/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S109>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls'
 * '<S110>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S111>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S112>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S113>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S114>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S115>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S116>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S117>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S118>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S119>' : 'Testerr/HC/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S120>' : 'Testerr/HC/Hallstation/Digital Port Read'
 * '<S121>' : 'Testerr/HC/Hallstation/Digital Port Read1'
 * '<S122>' : 'Testerr/HC/Hallstation/Digital Port Read2'
 * '<S123>' : 'Testerr/HC/Hallstation/Digital Port Read/ECSoC'
 * '<S124>' : 'Testerr/HC/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S125>' : 'Testerr/HC/Hallstation/Digital Port Read1/ECSoC'
 * '<S126>' : 'Testerr/HC/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S127>' : 'Testerr/HC/Hallstation/Digital Port Read2/ECSoC'
 * '<S128>' : 'Testerr/HC/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S129>' : 'Testerr/Hardware Interrupt/ECSoC'
 * '<S130>' : 'Testerr/Hardware Interrupt/ECSoC/ECSimCodegen'
 * '<S131>' : 'Testerr/Hardware Interrupt2/ECSoC'
 * '<S132>' : 'Testerr/Hardware Interrupt2/ECSoC/ECSimCodegen'
 * '<S133>' : 'Testerr/Heartbeat LED/ECSoC'
 * '<S134>' : 'Testerr/Heartbeat LED/ECSoC/ECSimCodegen'
 * '<S135>' : 'Testerr/Parameters/PWM Output'
 * '<S136>' : 'Testerr/Parameters/PWM Output/ECSoC'
 * '<S137>' : 'Testerr/Parameters/PWM Output/ECSoC/ECSimCodegen'
 */
#endif                                 /* Testerr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
