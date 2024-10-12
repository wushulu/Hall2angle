/*
 * File: STMF4Hall.h
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

#ifndef STMF4Hall_h_
#define STMF4Hall_h_
#ifndef STMF4Hall_COMMON_INCLUDES_
#define STMF4Hall_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "main.h"
#endif                                 /* STMF4Hall_COMMON_INCLUDES_ */

#include "mw_stm32_nvic.h"
#include "STMF4Hall_types.h"
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

/* Block states (default storage) for system '<S110>/If Action Subsystem6' */
typedef struct {
  int8_T IfActionSubsystem6_SubsysRanBC;/* '<S110>/If Action Subsystem6' */
} DW_IfActionSubsystem6_STMF4Ha_T;

/* Block states (default storage) for system '<S110>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S110>/If Action Subsystem' */
} DW_IfActionSubsystem_STMF4Hal_T;

/* Block signals for system '<S108>/Valid Halls' */
typedef struct {
  uint16_T Merge;                      /* '<S110>/Merge' */
  uint16_T Merge1;                     /* '<S110>/Merge1' */
  uint16_T Merge3;                     /* '<S110>/Merge3' */
  int16_T Merge2;                      /* '<S110>/Merge2' */
} B_ValidHalls_STMF4Hall_T;

/* Block states (default storage) for system '<S108>/Valid Halls' */
typedef struct {
  int8_T ValidHalls_SubsysRanBC;       /* '<S108>/Valid Halls' */
  int8_T SwitchCaseActionSubsystem_Subsy;
                                     /* '<S110>/Switch Case Action Subsystem' */
  int8_T IfActionSubsystem8_SubsysRanBC;/* '<S110>/If Action Subsystem8' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem5;/* '<S110>/If Action Subsystem5' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem4;/* '<S110>/If Action Subsystem4' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem3;/* '<S110>/If Action Subsystem3' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem2;/* '<S110>/If Action Subsystem2' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem1;/* '<S110>/If Action Subsystem1' */
  DW_IfActionSubsystem_STMF4Hal_T IfActionSubsystem;/* '<S110>/If Action Subsystem' */
  DW_IfActionSubsystem6_STMF4Ha_T IfActionSubsystem7;/* '<S110>/If Action Subsystem7' */
  DW_IfActionSubsystem6_STMF4Ha_T IfActionSubsystem6;/* '<S110>/If Action Subsystem6' */
} DW_ValidHalls_STMF4Hall_T;

/* Block states (default storage) for system '<S108>/Bad hall (glitch or wrong connection)' */
typedef struct {
  int8_T Badhallglitchorwrongconnection_;
                            /* '<S108>/Bad hall (glitch or wrong connection)' */
} DW_Badhallglitchorwrongconnec_T;

/* Block states (default storage) for system '<S41>/Hall Value of 1' */
typedef struct {
  int8_T HallValueof1_SubsysRanBC;     /* '<S41>/Hall Value of 1' */
} DW_HallValueof1_STMF4Hall_T;

/* Block signals (default storage) */
typedef struct {
  real_T hallct;                       /* '<Root>/Data Store Read1' */
  uint32_T RT7;                        /* '<Root>/RT7' */
  uint32_T speedCountDelay;            /* '<S23>/speedCountDelay' */
  real32_T pos;                        /* '<Root>/RT1' */
  real32_T posw;                       /* '<Root>/RT2' */
  real32_T PositionUnit;               /* '<S22>/PositionUnit' */
  real32_T Merge;                      /* '<S39>/Merge' */
  uint16_T testcounter;                /* '<Root>/RT6' */
  uint16_T speedval;                   /* '<Root>/Data Store Read' */
  uint16_T DelayOneStep;               /* '<S24>/Delay One Step' */
  uint16_T Output;                     /* '<S11>/Output' */
  int16_T derection;                   /* '<Root>/Data Store Read2' */
  boolean_T validityDelay;             /* '<S23>/validityDelay' */
  B_ValidHalls_STMF4Hall_T ValidHalls_i;/* '<S60>/Valid Halls' */
  B_ValidHalls_STMF4Hall_T ValidHalls_d;/* '<S84>/Valid Halls' */
  B_ValidHalls_STMF4Hall_T ValidHalls; /* '<S108>/Valid Halls' */
} B_STMF4Hall_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S16>/Analog to Digital Converter' */
  stm32cube_blocks_PWMOutput_ST_T obj_l;/* '<S147>/PWM Output' */
  stm32cube_blocks_TimerBlock_S_T obj_a;/* '<Root>/Timer' */
  real_T HallAcapture;                 /* '<Root>/Data Store Memory10' */
  real_T HallCcapture;                 /* '<Root>/Data Store Memory12' */
  real_T HallBcapture;                 /* '<Root>/Data Store Memory11' */
  real32_T UnitDelay_DSTATE;           /* '<S21>/Unit Delay' */
  uint32_T speedCountDelay_DSTATE;     /* '<S23>/speedCountDelay' */
  uint32_T Delay_DSTATE;               /* '<S2>/Delay' */
  uint32_T Delay_DSTATE_e;             /* '<S3>/Delay' */
  uint32_T Delay_DSTATE_k;             /* '<S4>/Delay' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  volatile uint32_T RT7_Buffer0;       /* '<Root>/RT7' */
  uint32_T Timercntprev;               /* '<Root>/Data Store Memory3' */
  uint32_T GlobalSpeedCount;           /* '<Root>/Data Store Memory6' */
  uint16_T DelayOneStep_DSTATE;        /* '<S24>/Delay One Step' */
  uint16_T Output_DSTATE;              /* '<S11>/Output' */
  int16_T GlobalDirection;             /* '<Root>/Data Store Memory5' */
  uint16_T GlobalSpeedValidity;        /* '<Root>/Data Store Memory7' */
  uint16_T HallStateChangeFlag;        /* '<Root>/Data Store Memory8' */
  boolean_T validityDelay_DSTATE;      /* '<S23>/validityDelay' */
  boolean_T DelayOneStep1_DSTATE;      /* '<S24>/Delay One Step1' */
  int8_T ADCSIC_SubsysRanBC;           /* '<Root>/ADC SIC' */
  int8_T SpeedanddirectionarenotvalidPos;
  /* '<S22>/Speed and direction are not valid Position will be set to the middle of the Hall quadrant' */
  int8_T SpeedanddirectionarevalidUsespe;
  /* '<S22>/Speed and direction are valid Use speed to extrapolate position' */
  int8_T Subsystem1_SubsysRanBC;       /* '<S26>/Subsystem1' */
  int8_T first_order_SubsysRanBC;      /* '<S39>/first_order' */
  int8_T second_order_SubsysRanBC;     /* '<S39>/second_order' */
  int8_T veDirection_SubsysRanBC;      /* '<S39>/+ve Direction' */
  int8_T veDirection_SubsysRanBC_e;    /* '<S39>/-ve Direction' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S26>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S26>/If Action Subsystem' */
  int8_T HA_SubsysRanBC;               /* '<Root>/HA' */
  int8_T HB_SubsysRanBC;               /* '<Root>/HB' */
  int8_T HC_SubsysRanBC;               /* '<Root>/HC' */
  uint8_T GlobalHallState;             /* '<Root>/Data Store Memory' */
  DW_HallValueof1_STMF4Hall_T HallValueof7_hc;/* '<S29>/Hall Value of 7' */
  DW_HallValueof1_STMF4Hall_T HallValueof6_j;/* '<S29>/Hall Value of 6' */
  DW_HallValueof1_STMF4Hall_T HallValueof5_k;/* '<S29>/Hall Value of 5' */
  DW_HallValueof1_STMF4Hall_T HallValueof4_f;/* '<S29>/Hall Value of 4' */
  DW_HallValueof1_STMF4Hall_T HallValueof3_b;/* '<S29>/Hall Value of 3' */
  DW_HallValueof1_STMF4Hall_T HallValueof2_m;/* '<S29>/Hall Value of 2' */
  DW_HallValueof1_STMF4Hall_T HallValueof1_ar;/* '<S29>/Hall Value of 1' */
  DW_HallValueof1_STMF4Hall_T HallValueof7_h;/* '<S40>/Hall Value of 7' */
  DW_HallValueof1_STMF4Hall_T HallValueof6_g;/* '<S40>/Hall Value of 6' */
  DW_HallValueof1_STMF4Hall_T HallValueof5_j;/* '<S40>/Hall Value of 5' */
  DW_HallValueof1_STMF4Hall_T HallValueof4_j;/* '<S40>/Hall Value of 4' */
  DW_HallValueof1_STMF4Hall_T HallValueof3_n;/* '<S40>/Hall Value of 3' */
  DW_HallValueof1_STMF4Hall_T HallValueof2_a;/* '<S40>/Hall Value of 2' */
  DW_HallValueof1_STMF4Hall_T HallValueof1_a;/* '<S40>/Hall Value of 1' */
  DW_HallValueof1_STMF4Hall_T HallValueof7;/* '<S41>/Hall Value of 7' */
  DW_HallValueof1_STMF4Hall_T HallValueof6;/* '<S41>/Hall Value of 6' */
  DW_HallValueof1_STMF4Hall_T HallValueof5;/* '<S41>/Hall Value of 5' */
  DW_HallValueof1_STMF4Hall_T HallValueof4;/* '<S41>/Hall Value of 4' */
  DW_HallValueof1_STMF4Hall_T HallValueof3;/* '<S41>/Hall Value of 3' */
  DW_HallValueof1_STMF4Hall_T HallValueof2;/* '<S41>/Hall Value of 2' */
  DW_HallValueof1_STMF4Hall_T HallValueof1;/* '<S41>/Hall Value of 1' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnecti_nn;
                             /* '<S60>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_STMF4Hall_T ValidHalls_i;/* '<S60>/Valid Halls' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnectio_n;
                             /* '<S84>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_STMF4Hall_T ValidHalls_d;/* '<S84>/Valid Halls' */
  DW_Badhallglitchorwrongconnec_T Badhallglitchorwrongconnection;
                            /* '<S108>/Bad hall (glitch or wrong connection)' */
  DW_ValidHalls_STMF4Hall_T ValidHalls;/* '<S108>/Valid Halls' */
} DW_STMF4Hall_T;

/* Parameters for system: '<S110>/If Action Subsystem6' */
struct P_IfActionSubsystem6_STMF4Hal_T_ {
  int16_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S117>/Constant'
                                        */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S117>/Constant1'
                                        */
};

/* Parameters for system: '<S110>/If Action Subsystem' */
struct P_IfActionSubsystem_STMF4Hall_T_ {
  uint16_T previous_Value;             /* Computed Parameter: previous_Value
                                        * Referenced by: '<S111>/previous'
                                        */
  uint16_T next_Value;                 /* Computed Parameter: next_Value
                                        * Referenced by: '<S111>/next'
                                        */
};

/* Parameters for system: '<S108>/Valid Halls' */
struct P_ValidHalls_STMF4Hall_T_ {
  int16_T Merge2_InitialOutput;      /* Computed Parameter: Merge2_InitialOutput
                                      * Referenced by: '<S110>/Merge2'
                                      */
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S119>/Constant'
                                        */
  uint16_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S110>/Merge'
                                       */
  uint16_T Merge1_InitialOutput;     /* Computed Parameter: Merge1_InitialOutput
                                      * Referenced by: '<S110>/Merge1'
                                      */
  uint16_T Merge3_InitialOutput;     /* Computed Parameter: Merge3_InitialOutput
                                      * Referenced by: '<S110>/Merge3'
                                      */
  boolean_T Constant_Value_m;          /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S110>/Constant'
                                        */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem5;/* '<S110>/If Action Subsystem5' */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem4;/* '<S110>/If Action Subsystem4' */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem3;/* '<S110>/If Action Subsystem3' */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem2;/* '<S110>/If Action Subsystem2' */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem1;/* '<S110>/If Action Subsystem1' */
  P_IfActionSubsystem_STMF4Hall_T IfActionSubsystem;/* '<S110>/If Action Subsystem' */
  P_IfActionSubsystem6_STMF4Hal_T IfActionSubsystem7;/* '<S110>/If Action Subsystem7' */
  P_IfActionSubsystem6_STMF4Hal_T IfActionSubsystem6;/* '<S110>/If Action Subsystem6' */
};

/* Parameters for system: '<S108>/Bad hall (glitch or wrong connection)' */
struct P_Badhallglitchorwrongconnect_T_ {
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S109>/Constant'
                                        */
  boolean_T Constant1_Value;           /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S109>/Constant1'
                                        */
};

/* Parameters for system: '<S41>/Hall Value of 1' */
struct P_HallValueof1_STMF4Hall_T_ {
  real32_T Constant_Value;             /* Expression: single(0.16667)
                                        * Referenced by: '<S51>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_STMF4Hall_T_ {
  uint16_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S18>/FixPt Switch'
                                        */
  uint16_T SoftwareWatchdogTimer_maxCount;
                               /* Mask Parameter: SoftwareWatchdogTimer_maxCount
                                * Referenced by: '<S24>/Delay One Step'
                                */
  real_T Constant1_Value;              /* Expression: 20
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant1_Value_a;            /* Expression: 100
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant1_Value_d;            /* Expression: 100
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: EnableSecondOrder
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  real_T DataStoreMemory2_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  real_T DataStoreMemory4_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory4'
                                        */
  real_T DataStoreMemory9_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory9'
                                        */
  real_T Constant_Value_d;             /* Expression: 20
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T DataStoreMemory10_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory10'
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
  real_T DataStoreMemory12_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory12'
                                         */
  real_T DataStoreMemory11_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory11'
                                         */
  uint64_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S4>/Out1'
                                        */
  uint64_T Out1_Y0_l;                  /* Computed Parameter: Out1_Y0_l
                                        * Referenced by: '<S3>/Out1'
                                        */
  uint64_T Out1_Y0_n;                  /* Computed Parameter: Out1_Y0_n
                                        * Referenced by: '<S2>/Out1'
                                        */
  real32_T a_Value;                    /* Computed Parameter: a_Value
                                        * Referenced by: '<S12>/a'
                                        */
  real32_T One_Value;                  /* Computed Parameter: One_Value
                                        * Referenced by: '<S12>/One'
                                        */
  real32_T FilterConstant_Value;     /* Computed Parameter: FilterConstant_Value
                                      * Referenced by: '<S12>/FilterConstant'
                                      */
  real32_T OneMinusFilterConstant_Value;
                             /* Computed Parameter: OneMinusFilterConstant_Value
                              * Referenced by: '<S12>/OneMinusFilterConstant'
                              */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S43>/Constant'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S43>/Gain'
                                        */
  real32_T Gain_Gain_o;                /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S42>/Gain'
                                        */
  real32_T Saturation_UpperSat;        /* Expression: single(0.16667)
                                        * Referenced by: '<S39>/Saturation'
                                        */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S39>/Saturation'
                                       */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S39>/Merge'
                                       */
  real32_T SpeedGain_Gain;             /* Expression: single(MinSpeed)
                                        * Referenced by: '<S26>/SpeedGain'
                                        */
  real32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S25>/Constant'
                                        */
  real32_T Pos_PU_Y0;                  /* Computed Parameter: Pos_PU_Y0
                                        * Referenced by: '<S1>/Pos_PU'
                                        */
  real32_T Pos_w_Y0;                   /* Computed Parameter: Pos_w_Y0
                                        * Referenced by: '<S1>/Pos_w'
                                        */
  real32_T PositionUnit_Gain;          /* Expression: single(1)
                                        * Referenced by: '<S22>/PositionUnit'
                                        */
  real32_T UseInputPort_Value;         /* Computed Parameter: UseInputPort_Value
                                        * Referenced by: '<S12>/UseInputPort'
                                        */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S12>/Switch1'
                                        */
  real32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S21>/Unit Delay'
                                */
  uint32_T Gain_Gain_j;                /* Computed Parameter: Gain_Gain_j
                                        * Referenced by: '<S4>/Gain'
                                        */
  uint32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S3>/Gain'
                                        */
  uint32_T Gain_Gain_p;                /* Computed Parameter: Gain_Gain_p
                                        * Referenced by: '<S2>/Gain'
                                        */
  uint32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S4>/Delay'
                                    */
  uint32_T Delay_InitialCondition_c;
                                 /* Computed Parameter: Delay_InitialCondition_c
                                  * Referenced by: '<S3>/Delay'
                                  */
  uint32_T Delay_InitialCondition_f;
                                 /* Computed Parameter: Delay_InitialCondition_f
                                  * Referenced by: '<S2>/Delay'
                                  */
  uint32_T SpeedConst_Value;
                          /* Expression: uint32(30*ClkFreq/(PolePairs*MinSpeed))
                           * Referenced by: '<S26>/SpeedConst'
                           */
  uint32_T speedcheck_Threshold;     /* Computed Parameter: speedcheck_Threshold
                                      * Referenced by: '<S27>/speed check'
                                      */
  uint32_T speedCountDelay_InitialConditio;
                          /* Computed Parameter: speedCountDelay_InitialConditio
                           * Referenced by: '<S23>/speedCountDelay'
                           */
  uint32_T RT7_InitialCondition;     /* Computed Parameter: RT7_InitialCondition
                                      * Referenced by: '<Root>/RT7'
                                      */
  uint32_T DataStoreMemory3_InitialValue;
                            /* Computed Parameter: DataStoreMemory3_InitialValue
                             * Referenced by: '<Root>/Data Store Memory3'
                             */
  uint32_T DataStoreMemory6_InitialValue;
                            /* Computed Parameter: DataStoreMemory6_InitialValue
                             * Referenced by: '<Root>/Data Store Memory6'
                             */
  int16_T DataStoreMemory5_InitialValue;
                            /* Computed Parameter: DataStoreMemory5_InitialValue
                             * Referenced by: '<Root>/Data Store Memory5'
                             */
  uint16_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S106>/Constant'
                                        */
  uint16_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S82>/Constant'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S58>/Constant'
                                        */
  uint16_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint16_T PositionEnable_Value;     /* Computed Parameter: PositionEnable_Value
                                      * Referenced by: '<S26>/PositionEnable'
                                      */
  uint16_T WatchDog_Value;             /* Computed Parameter: WatchDog_Value
                                        * Referenced by: '<S22>/WatchDog'
                                        */
  uint16_T Out1_Y0_h;                  /* Computed Parameter: Out1_Y0_h
                                        * Referenced by: '<S1>/Out1'
                                        */
  uint16_T Constant_Value_dk;          /* Computed Parameter: Constant_Value_dk
                                        * Referenced by: '<S28>/Constant'
                                        */
  uint16_T Order_Value;                /* Computed Parameter: Order_Value
                                        * Referenced by: '<S23>/Order'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S23>/Switch'
                                        */
  uint16_T Constant_Value_lo;          /* Computed Parameter: Constant_Value_lo
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S24>/Constant2'
                                        */
  uint16_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S17>/FixPt Constant'
                                       */
  uint16_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S11>/Output'
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
                            * Referenced by: '<S23>/validityDelay'
                            */
  boolean_T DelayOneStep1_InitialCondition;
                           /* Computed Parameter: DelayOneStep1_InitialCondition
                            * Referenced by: '<S24>/Delay One Step1'
                            */
  uint8_T Gain_Gain_f;                 /* Computed Parameter: Gain_Gain_f
                                        * Referenced by: '<S107>/Gain'
                                        */
  uint8_T Gain_Gain_c;                 /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S83>/Gain'
                                        */
  uint8_T Gain_Gain_ca;                /* Computed Parameter: Gain_Gain_ca
                                        * Referenced by: '<S59>/Gain'
                                        */
  uint8_T Gain_Gain_m;                 /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S136>/Gain'
                                        */
  uint8_T Gain1_Gain_a;                /* Computed Parameter: Gain1_Gain_a
                                        * Referenced by: '<S107>/Gain1'
                                        */
  uint8_T Gain1_Gain_c;                /* Computed Parameter: Gain1_Gain_c
                                        * Referenced by: '<S83>/Gain1'
                                        */
  uint8_T Gain1_Gain_i;                /* Computed Parameter: Gain1_Gain_i
                                        * Referenced by: '<S59>/Gain1'
                                        */
  uint8_T Gain1_Gain_p;                /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S136>/Gain1'
                                        */
  uint8_T Gain2_Gain;                  /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S107>/Gain2'
                                        */
  uint8_T Gain2_Gain_d;                /* Computed Parameter: Gain2_Gain_d
                                        * Referenced by: '<S83>/Gain2'
                                        */
  uint8_T Gain2_Gain_k;                /* Computed Parameter: Gain2_Gain_k
                                        * Referenced by: '<S59>/Gain2'
                                        */
  uint8_T Gain2_Gain_n;                /* Computed Parameter: Gain2_Gain_n
                                        * Referenced by: '<S136>/Gain2'
                                        */
  uint8_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<Root>/Data Store Memory'
                              */
  P_HallValueof1_STMF4Hall_T HallValueof7_hc;/* '<S29>/Hall Value of 7' */
  P_HallValueof1_STMF4Hall_T HallValueof6_j;/* '<S29>/Hall Value of 6' */
  P_HallValueof1_STMF4Hall_T HallValueof5_k;/* '<S29>/Hall Value of 5' */
  P_HallValueof1_STMF4Hall_T HallValueof4_f;/* '<S29>/Hall Value of 4' */
  P_HallValueof1_STMF4Hall_T HallValueof3_b;/* '<S29>/Hall Value of 3' */
  P_HallValueof1_STMF4Hall_T HallValueof2_m;/* '<S29>/Hall Value of 2' */
  P_HallValueof1_STMF4Hall_T HallValueof1_ar;/* '<S29>/Hall Value of 1' */
  P_HallValueof1_STMF4Hall_T HallValueof7_h;/* '<S40>/Hall Value of 7' */
  P_HallValueof1_STMF4Hall_T HallValueof6_g;/* '<S40>/Hall Value of 6' */
  P_HallValueof1_STMF4Hall_T HallValueof5_j;/* '<S40>/Hall Value of 5' */
  P_HallValueof1_STMF4Hall_T HallValueof4_j;/* '<S40>/Hall Value of 4' */
  P_HallValueof1_STMF4Hall_T HallValueof3_n;/* '<S40>/Hall Value of 3' */
  P_HallValueof1_STMF4Hall_T HallValueof2_a;/* '<S40>/Hall Value of 2' */
  P_HallValueof1_STMF4Hall_T HallValueof1_a;/* '<S40>/Hall Value of 1' */
  P_HallValueof1_STMF4Hall_T HallValueof7;/* '<S41>/Hall Value of 7' */
  P_HallValueof1_STMF4Hall_T HallValueof6;/* '<S41>/Hall Value of 6' */
  P_HallValueof1_STMF4Hall_T HallValueof5;/* '<S41>/Hall Value of 5' */
  P_HallValueof1_STMF4Hall_T HallValueof4;/* '<S41>/Hall Value of 4' */
  P_HallValueof1_STMF4Hall_T HallValueof3;/* '<S41>/Hall Value of 3' */
  P_HallValueof1_STMF4Hall_T HallValueof2;/* '<S41>/Hall Value of 2' */
  P_HallValueof1_STMF4Hall_T HallValueof1;/* '<S41>/Hall Value of 1' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnecti_nn;
                             /* '<S60>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_STMF4Hall_T ValidHalls_i;/* '<S60>/Valid Halls' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnectio_n;
                             /* '<S84>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_STMF4Hall_T ValidHalls_d;/* '<S84>/Valid Halls' */
  P_Badhallglitchorwrongconnect_T Badhallglitchorwrongconnection;
                            /* '<S108>/Bad hall (glitch or wrong connection)' */
  P_ValidHalls_STMF4Hall_T ValidHalls; /* '<S108>/Valid Halls' */
};

/* Real-time Model Data Structure */
struct tag_RTM_STMF4Hall_T {
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
      uint16_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_STMF4Hall_T STMF4Hall_P;

/* Block signals (default storage) */
extern B_STMF4Hall_T STMF4Hall_B;

/* Block states (default storage) */
extern DW_STMF4Hall_T STMF4Hall_DW;

/* External function called from main */
extern void STMF4Hall_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void STMF4Hall_initialize(void);
extern void STMF4Hall_step0(void);
extern void STMF4Hall_step1(void);
extern void STMF4Hall_terminate(void);

/* Real-time Model object */
extern RT_MODEL_STMF4Hall_T *const STMF4Hall_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  void ADC_IRQHandler(void);
  void EXTI15_10_IRQHandler(void);
  void STMF4Hall_configure_interrupts (void);
  void STMF4Hall_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Data Type Propagation' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S12>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type' : Unused code path elimination
 * Block '<S13>/Number of pole pairs' : Unused code path elimination
 * Block '<S13>/PWM Frequency' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S4>/Constant' : Unused code path elimination
 * Block '<S22>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S22>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S22>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S22>/counterSize2' : Eliminate redundant data type conversion
 * Block '<S2>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S2>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S58>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S82>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S106>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'STMF4Hall'
 * '<S1>'   : 'STMF4Hall/ADC SIC'
 * '<S2>'   : 'STMF4Hall/HA'
 * '<S3>'   : 'STMF4Hall/HB'
 * '<S4>'   : 'STMF4Hall/HC'
 * '<S5>'   : 'STMF4Hall/Hardware Interrupt'
 * '<S6>'   : 'STMF4Hall/Hardware Interrupt1'
 * '<S7>'   : 'STMF4Hall/Heartbeat LED'
 * '<S8>'   : 'STMF4Hall/Initialize Function'
 * '<S9>'   : 'STMF4Hall/PWM Output'
 * '<S10>'  : 'STMF4Hall/ADC SIC/Analog to Digital Converter'
 * '<S11>'  : 'STMF4Hall/ADC SIC/Counter Limited'
 * '<S12>'  : 'STMF4Hall/ADC SIC/IIR Filter'
 * '<S13>'  : 'STMF4Hall/ADC SIC/Parameters'
 * '<S14>'  : 'STMF4Hall/ADC SIC/Subsystem1'
 * '<S15>'  : 'STMF4Hall/ADC SIC/Analog to Digital Converter/ECSoC'
 * '<S16>'  : 'STMF4Hall/ADC SIC/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S17>'  : 'STMF4Hall/ADC SIC/Counter Limited/Increment Real World'
 * '<S18>'  : 'STMF4Hall/ADC SIC/Counter Limited/Wrap To Zero'
 * '<S19>'  : 'STMF4Hall/ADC SIC/IIR Filter/IIR Filter'
 * '<S20>'  : 'STMF4Hall/ADC SIC/IIR Filter/IIR Filter/Low-pass'
 * '<S21>'  : 'STMF4Hall/ADC SIC/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S22>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1'
 * '<S23>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/ExtrapolationOrder'
 * '<S24>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Software Watchdog Timer'
 * '<S25>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant'
 * '<S26>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position'
 * '<S27>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/VaidityCheck'
 * '<S28>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Software Watchdog Timer/Compare To Zero'
 * '<S29>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction'
 * '<S30>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 1'
 * '<S31>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 2'
 * '<S32>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 3'
 * '<S33>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 4'
 * '<S34>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 5'
 * '<S35>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 6'
 * '<S36>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 7'
 * '<S37>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem'
 * '<S38>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem1'
 * '<S39>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1'
 * '<S40>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction'
 * '<S41>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction'
 * '<S42>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/first_order'
 * '<S43>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/second_order'
 * '<S44>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 1'
 * '<S45>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 2'
 * '<S46>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 3'
 * '<S47>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 4'
 * '<S48>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 5'
 * '<S49>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 6'
 * '<S50>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 7'
 * '<S51>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 1'
 * '<S52>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 2'
 * '<S53>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 3'
 * '<S54>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 4'
 * '<S55>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 5'
 * '<S56>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 6'
 * '<S57>'  : 'STMF4Hall/ADC SIC/Subsystem1/Hall Speed and Position1/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 7'
 * '<S58>'  : 'STMF4Hall/HA/Hall Validity'
 * '<S59>'  : 'STMF4Hall/HA/Hallstation'
 * '<S60>'  : 'STMF4Hall/HA/Hall Validity/Subsystem'
 * '<S61>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S62>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls'
 * '<S63>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S64>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S65>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S66>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S67>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S68>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S69>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S70>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S71>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S72>'  : 'STMF4Hall/HA/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S73>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read'
 * '<S74>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read1'
 * '<S75>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read2'
 * '<S76>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read/ECSoC'
 * '<S77>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S78>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read1/ECSoC'
 * '<S79>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S80>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read2/ECSoC'
 * '<S81>'  : 'STMF4Hall/HA/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S82>'  : 'STMF4Hall/HB/Hall Validity'
 * '<S83>'  : 'STMF4Hall/HB/Hallstation'
 * '<S84>'  : 'STMF4Hall/HB/Hall Validity/Subsystem'
 * '<S85>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S86>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls'
 * '<S87>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S88>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S89>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S90>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S91>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S92>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S93>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S94>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S95>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S96>'  : 'STMF4Hall/HB/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S97>'  : 'STMF4Hall/HB/Hallstation/Digital Port Read'
 * '<S98>'  : 'STMF4Hall/HB/Hallstation/Digital Port Read1'
 * '<S99>'  : 'STMF4Hall/HB/Hallstation/Digital Port Read2'
 * '<S100>' : 'STMF4Hall/HB/Hallstation/Digital Port Read/ECSoC'
 * '<S101>' : 'STMF4Hall/HB/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S102>' : 'STMF4Hall/HB/Hallstation/Digital Port Read1/ECSoC'
 * '<S103>' : 'STMF4Hall/HB/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S104>' : 'STMF4Hall/HB/Hallstation/Digital Port Read2/ECSoC'
 * '<S105>' : 'STMF4Hall/HB/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S106>' : 'STMF4Hall/HC/Hall Validity'
 * '<S107>' : 'STMF4Hall/HC/Hallstation'
 * '<S108>' : 'STMF4Hall/HC/Hall Validity/Subsystem'
 * '<S109>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S110>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls'
 * '<S111>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S112>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S113>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S114>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S115>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S116>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S117>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S118>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S119>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S120>' : 'STMF4Hall/HC/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S121>' : 'STMF4Hall/HC/Hallstation/Digital Port Read'
 * '<S122>' : 'STMF4Hall/HC/Hallstation/Digital Port Read1'
 * '<S123>' : 'STMF4Hall/HC/Hallstation/Digital Port Read2'
 * '<S124>' : 'STMF4Hall/HC/Hallstation/Digital Port Read/ECSoC'
 * '<S125>' : 'STMF4Hall/HC/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S126>' : 'STMF4Hall/HC/Hallstation/Digital Port Read1/ECSoC'
 * '<S127>' : 'STMF4Hall/HC/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S128>' : 'STMF4Hall/HC/Hallstation/Digital Port Read2/ECSoC'
 * '<S129>' : 'STMF4Hall/HC/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S130>' : 'STMF4Hall/Hardware Interrupt/ECSoC'
 * '<S131>' : 'STMF4Hall/Hardware Interrupt/ECSoC/ECSimCodegen'
 * '<S132>' : 'STMF4Hall/Hardware Interrupt1/ECSoC'
 * '<S133>' : 'STMF4Hall/Hardware Interrupt1/ECSoC/ECSimCodegen'
 * '<S134>' : 'STMF4Hall/Heartbeat LED/ECSoC'
 * '<S135>' : 'STMF4Hall/Heartbeat LED/ECSoC/ECSimCodegen'
 * '<S136>' : 'STMF4Hall/Initialize Function/Hallstation'
 * '<S137>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read'
 * '<S138>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read1'
 * '<S139>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read2'
 * '<S140>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read/ECSoC'
 * '<S141>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S142>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read1/ECSoC'
 * '<S143>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read1/ECSoC/ECSimCodegen'
 * '<S144>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read2/ECSoC'
 * '<S145>' : 'STMF4Hall/Initialize Function/Hallstation/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S146>' : 'STMF4Hall/PWM Output/ECSoC'
 * '<S147>' : 'STMF4Hall/PWM Output/ECSoC/ECSimCodegen'
 */
#endif                                 /* STMF4Hall_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
