/*
 * File: Testerr_data.c
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

#include "Testerr.h"

/* Block parameters (default storage) */
P_Testerr_T Testerr_P = {
  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S16>/FixPt Switch'
   */
  20000U,

  /* Mask Parameter: SoftwareWatchdogTimer_maxCount
   * Referenced by: '<S20>/Delay One Step'
   */
  5000U,

  /* Expression: 0
   * Referenced by: '<S4>/Constant1'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S3>/Constant1'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S2>/Constant1'
   */
  100.0,

  /* Expression: EnableSecondOrder
   * Referenced by: '<S35>/Constant'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S8>/Constant1'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Pulse Generator'
   */
  1.0,

  /* Expression: 10
   * Referenced by: '<Root>/Pulse Generator'
   */
  10.0,

  /* Expression: 5
   * Referenced by: '<Root>/Pulse Generator'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<Root>/Pulse Generator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory10'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory2'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  (0LL),

  /* Computed Parameter: Out1_Y0_j
   * Referenced by: '<S3>/Out1'
   */
  (0LL),

  /* Computed Parameter: Out1_Y0_i
   * Referenced by: '<S2>/Out1'
   */
  (0LL),

  /* Computed Parameter: DataStoreMemory3_InitialValue
   * Referenced by: '<Root>/Data Store Memory3'
   */
  (0LL),

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S4>/Gain'
   */
  1073741824,

  /* Computed Parameter: Gain_Gain_b
   * Referenced by: '<S3>/Gain'
   */
  1073741824,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S2>/Gain'
   */
  1073741824,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S39>/Constant'
   */
  1.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S39>/Gain1'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain_g
   * Referenced by: '<S39>/Gain'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain_n
   * Referenced by: '<S38>/Gain'
   */
  0.5F,

  /* Expression: single(0.16667)
   * Referenced by: '<S35>/Saturation'
   */
  0.16667F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S35>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S35>/Merge'
   */
  0.0F,

  /* Expression: single(6*MinSpeed)
   * Referenced by: '<S22>/SpeedGain'
   */
  120.0F,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S21>/Constant'
   */
  0.0F,

  /* Computed Parameter: Posdegree_Y0
   * Referenced by: '<S1>/Posdegree'
   */
  0.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_UpperSat
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  60.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_LowerSat
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  -60.0F,

  /* Computed Parameter: Gain_Gain_bb
   * Referenced by: '<S17>/Gain'
   */
  2.0F,

  /* Expression: single(360)
   * Referenced by: '<S18>/PositionUnit'
   */
  360.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S106>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_p
   * Referenced by: '<S81>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_b
   * Referenced by: '<S56>/Delay'
   */
  0U,

  /* Expression: uint32(30*ClkFreq/(PolePairs*MinSpeed))
   * Referenced by: '<S22>/SpeedConst'
   */
  63000000U,

  /* Computed Parameter: speedcheck_Threshold
   * Referenced by: '<S23>/speed check'
   */
  63000000U,

  /* Computed Parameter: speedCountDelay_InitialConditio
   * Referenced by: '<S19>/speedCountDelay'
   */
  0U,

  /* Computed Parameter: DataStoreMemory1_InitialValue
   * Referenced by: '<Root>/Data Store Memory1'
   */
  0U,

  /* Computed Parameter: DataStoreMemory6_InitialValue
   * Referenced by: '<Root>/Data Store Memory6'
   */
  0U,

  /* Computed Parameter: DataStoreMemory5_InitialValue
   * Referenced by: '<Root>/Data Store Memory5'
   */
  0,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S104>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_jq
   * Referenced by: '<S79>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S54>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_c2
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: PositionEnable_Value
   * Referenced by: '<S22>/PositionEnable'
   */
  1U,

  /* Computed Parameter: WatchDog_Value
   * Referenced by: '<S18>/WatchDog'
   */
  0U,

  /* Computed Parameter: ct_Y0
   * Referenced by: '<S1>/ct'
   */
  0U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S24>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S23>/Constant'
   */
  0U,

  /* Computed Parameter: Order_Value
   * Referenced by: '<S19>/Order'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S19>/Switch'
   */
  0U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S20>/Constant2'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S15>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S10>/Output'
   */
  0U,

  /* Computed Parameter: DataStoreMemory7_InitialValue
   * Referenced by: '<Root>/Data Store Memory7'
   */
  0U,

  /* Computed Parameter: DataStoreMemory8_InitialValue
   * Referenced by: '<Root>/Data Store Memory8'
   */
  0U,

  /* Computed Parameter: validityDelay_InitialCondition
   * Referenced by: '<S19>/validityDelay'
   */
  false,

  /* Computed Parameter: DelayOneStep1_InitialCondition
   * Referenced by: '<S20>/Delay One Step1'
   */
  true,

  /* Computed Parameter: Gain_Gain_k
   * Referenced by: '<S105>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_ko
   * Referenced by: '<S80>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_f
   * Referenced by: '<S55>/Gain'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_g
   * Referenced by: '<S105>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_o
   * Referenced by: '<S80>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_l
   * Referenced by: '<S55>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S105>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_b
   * Referenced by: '<S80>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_j
   * Referenced by: '<S55>/Gain2'
   */
  128U,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<Root>/Data Store Memory'
   */
  0U,

  /* Start of '<S25>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S32>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S25>/Hall Value of 7' */

  /* Start of '<S25>/Hall Value of 6' */
  {
    /* Expression: single(0.91667)
     * Referenced by: '<S31>/Constant'
     */
    0.91667F
  }
  ,

  /* End of '<S25>/Hall Value of 6' */

  /* Start of '<S25>/Hall Value of 5' */
  {
    /* Expression: single(0.75)
     * Referenced by: '<S30>/Constant'
     */
    0.75F
  }
  ,

  /* End of '<S25>/Hall Value of 5' */

  /* Start of '<S25>/Hall Value of 4' */
  {
    /* Expression: single(0.58333)
     * Referenced by: '<S29>/Constant'
     */
    0.58333F
  }
  ,

  /* End of '<S25>/Hall Value of 4' */

  /* Start of '<S25>/Hall Value of 3' */
  {
    /* Expression: single(0.41667)
     * Referenced by: '<S28>/Constant'
     */
    0.41667F
  }
  ,

  /* End of '<S25>/Hall Value of 3' */

  /* Start of '<S25>/Hall Value of 2' */
  {
    /* Expression: single(0.25)
     * Referenced by: '<S27>/Constant'
     */
    0.25F
  }
  ,

  /* End of '<S25>/Hall Value of 2' */

  /* Start of '<S25>/Hall Value of 1' */
  {
    /* Expression: single(0.083333)
     * Referenced by: '<S26>/Constant'
     */
    0.083333F
  }
  ,

  /* End of '<S25>/Hall Value of 1' */

  /* Start of '<S36>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S46>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S36>/Hall Value of 7' */

  /* Start of '<S36>/Hall Value of 6' */
  {
    /* Expression: single(0.83333)
     * Referenced by: '<S45>/Constant'
     */
    0.83333F
  }
  ,

  /* End of '<S36>/Hall Value of 6' */

  /* Start of '<S36>/Hall Value of 5' */
  {
    /* Expression: single(0.66667)
     * Referenced by: '<S44>/Constant'
     */
    0.66667F
  }
  ,

  /* End of '<S36>/Hall Value of 5' */

  /* Start of '<S36>/Hall Value of 4' */
  {
    /* Expression: single(0.5)
     * Referenced by: '<S43>/Constant'
     */
    0.5F
  }
  ,

  /* End of '<S36>/Hall Value of 4' */

  /* Start of '<S36>/Hall Value of 3' */
  {
    /* Expression: single(0.33333)
     * Referenced by: '<S42>/Constant'
     */
    0.33333F
  }
  ,

  /* End of '<S36>/Hall Value of 3' */

  /* Start of '<S36>/Hall Value of 2' */
  {
    /* Expression: single(0.16667)
     * Referenced by: '<S41>/Constant'
     */
    0.16667F
  }
  ,

  /* End of '<S36>/Hall Value of 2' */

  /* Start of '<S36>/Hall Value of 1' */
  {
    /* Expression: single(0)
     * Referenced by: '<S40>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S36>/Hall Value of 1' */

  /* Start of '<S37>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S53>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S37>/Hall Value of 7' */

  /* Start of '<S37>/Hall Value of 6' */
  {
    /* Expression: single(1)
     * Referenced by: '<S52>/Constant'
     */
    1.0F
  }
  ,

  /* End of '<S37>/Hall Value of 6' */

  /* Start of '<S37>/Hall Value of 5' */
  {
    /* Expression: single(0.83333)
     * Referenced by: '<S51>/Constant'
     */
    0.83333F
  }
  ,

  /* End of '<S37>/Hall Value of 5' */

  /* Start of '<S37>/Hall Value of 4' */
  {
    /* Expression: single(0.66667)
     * Referenced by: '<S50>/Constant'
     */
    0.66667F
  }
  ,

  /* End of '<S37>/Hall Value of 4' */

  /* Start of '<S37>/Hall Value of 3' */
  {
    /* Expression: single(0.5)
     * Referenced by: '<S49>/Constant'
     */
    0.5F
  }
  ,

  /* End of '<S37>/Hall Value of 3' */

  /* Start of '<S37>/Hall Value of 2' */
  {
    /* Expression: single(0.33333)
     * Referenced by: '<S48>/Constant'
     */
    0.33333F
  }
  ,

  /* End of '<S37>/Hall Value of 2' */

  /* Start of '<S37>/Hall Value of 1' */
  {
    /* Expression: single(0.16667)
     * Referenced by: '<S47>/Constant'
     */
    0.16667F
  }
  ,

  /* End of '<S37>/Hall Value of 1' */

  /* Start of '<S57>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S58>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S58>/Constant1'
     */
    false
  }
  ,

  /* End of '<S57>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S57>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S59>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S68>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S59>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S59>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S59>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_g
     * Referenced by: '<S59>/Constant'
     */
    false,

    /* Start of '<S109>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S65>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S65>/next'
       */
      5U
    }
    ,

    /* End of '<S109>/If Action Subsystem5' */

    /* Start of '<S109>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S64>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S64>/next'
       */
      1U
    }
    ,

    /* End of '<S109>/If Action Subsystem4' */

    /* Start of '<S109>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S63>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S63>/next'
       */
      3U
    }
    ,

    /* End of '<S109>/If Action Subsystem3' */

    /* Start of '<S109>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S62>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S62>/next'
       */
      2U
    }
    ,

    /* End of '<S109>/If Action Subsystem2' */

    /* Start of '<S109>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S61>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S61>/next'
       */
      6U
    }
    ,

    /* End of '<S109>/If Action Subsystem1' */

    /* Start of '<S109>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S60>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S60>/next'
       */
      4U
    }
    ,

    /* End of '<S109>/If Action Subsystem' */

    /* Start of '<S109>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S67>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S67>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S109>/If Action Subsystem7' */

    /* Start of '<S109>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S66>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S66>/Constant1'
       */
      0U
    }
    /* End of '<S109>/If Action Subsystem6' */
  }
  ,

  /* End of '<S57>/Valid Halls' */

  /* Start of '<S82>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S83>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S83>/Constant1'
     */
    false
  }
  ,

  /* End of '<S82>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S82>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S84>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S93>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S84>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S84>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S84>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_g
     * Referenced by: '<S84>/Constant'
     */
    false,

    /* Start of '<S109>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S90>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S90>/next'
       */
      5U
    }
    ,

    /* End of '<S109>/If Action Subsystem5' */

    /* Start of '<S109>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S89>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S89>/next'
       */
      1U
    }
    ,

    /* End of '<S109>/If Action Subsystem4' */

    /* Start of '<S109>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S88>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S88>/next'
       */
      3U
    }
    ,

    /* End of '<S109>/If Action Subsystem3' */

    /* Start of '<S109>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S87>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S87>/next'
       */
      2U
    }
    ,

    /* End of '<S109>/If Action Subsystem2' */

    /* Start of '<S109>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S86>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S86>/next'
       */
      6U
    }
    ,

    /* End of '<S109>/If Action Subsystem1' */

    /* Start of '<S109>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S85>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S85>/next'
       */
      4U
    }
    ,

    /* End of '<S109>/If Action Subsystem' */

    /* Start of '<S109>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S92>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S92>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S109>/If Action Subsystem7' */

    /* Start of '<S109>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S91>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S91>/Constant1'
       */
      0U
    }
    /* End of '<S109>/If Action Subsystem6' */
  }
  ,

  /* End of '<S82>/Valid Halls' */

  /* Start of '<S107>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S108>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S108>/Constant1'
     */
    false
  }
  ,

  /* End of '<S107>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S107>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S109>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S118>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S109>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S109>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S109>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_g
     * Referenced by: '<S109>/Constant'
     */
    false,

    /* Start of '<S109>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S115>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S115>/next'
       */
      5U
    }
    ,

    /* End of '<S109>/If Action Subsystem5' */

    /* Start of '<S109>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S114>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S114>/next'
       */
      1U
    }
    ,

    /* End of '<S109>/If Action Subsystem4' */

    /* Start of '<S109>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S113>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S113>/next'
       */
      3U
    }
    ,

    /* End of '<S109>/If Action Subsystem3' */

    /* Start of '<S109>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S112>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S112>/next'
       */
      2U
    }
    ,

    /* End of '<S109>/If Action Subsystem2' */

    /* Start of '<S109>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S111>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S111>/next'
       */
      6U
    }
    ,

    /* End of '<S109>/If Action Subsystem1' */

    /* Start of '<S109>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S110>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S110>/next'
       */
      4U
    }
    ,

    /* End of '<S109>/If Action Subsystem' */

    /* Start of '<S109>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S117>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S117>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S109>/If Action Subsystem7' */

    /* Start of '<S109>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S116>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S116>/Constant1'
       */
      0U
    }
    /* End of '<S109>/If Action Subsystem6' */
  }
  /* End of '<S107>/Valid Halls' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
