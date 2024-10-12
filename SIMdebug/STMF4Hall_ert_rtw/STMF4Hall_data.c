/*
 * File: STMF4Hall_data.c
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

/* Block parameters (default storage) */
P_STMF4Hall_T STMF4Hall_P = {
  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S18>/FixPt Switch'
   */
  20000U,

  /* Mask Parameter: SoftwareWatchdogTimer_maxCount
   * Referenced by: '<S24>/Delay One Step'
   */
  5000U,

  /* Expression: 20
   * Referenced by: '<S4>/Constant1'
   */
  20.0,

  /* Expression: 100
   * Referenced by: '<S3>/Constant1'
   */
  100.0,

  /* Expression: 100
   * Referenced by: '<S2>/Constant1'
   */
  100.0,

  /* Expression: EnableSecondOrder
   * Referenced by: '<S39>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0.0,

  /* Expression: 20
   * Referenced by: '<Root>/Constant'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory10'
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
   * Referenced by: '<Root>/Data Store Memory12'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory11'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  (0ULL),

  /* Computed Parameter: Out1_Y0_l
   * Referenced by: '<S3>/Out1'
   */
  (0ULL),

  /* Computed Parameter: Out1_Y0_n
   * Referenced by: '<S2>/Out1'
   */
  (0ULL),

  /* Computed Parameter: a_Value
   * Referenced by: '<S12>/a'
   */
  0.0F,

  /* Computed Parameter: One_Value
   * Referenced by: '<S12>/One'
   */
  1.0F,

  /* Computed Parameter: FilterConstant_Value
   * Referenced by: '<S12>/FilterConstant'
   */
  0.01F,

  /* Computed Parameter: OneMinusFilterConstant_Value
   * Referenced by: '<S12>/OneMinusFilterConstant'
   */
  0.99F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S43>/Constant'
   */
  1.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S43>/Gain1'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S43>/Gain'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain_o
   * Referenced by: '<S42>/Gain'
   */
  0.5F,

  /* Expression: single(0.16667)
   * Referenced by: '<S39>/Saturation'
   */
  0.16667F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S39>/Saturation'
   */
  0.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S39>/Merge'
   */
  0.0F,

  /* Expression: single(MinSpeed)
   * Referenced by: '<S26>/SpeedGain'
   */
  20.0F,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S25>/Constant'
   */
  0.0F,

  /* Computed Parameter: Pos_PU_Y0
   * Referenced by: '<S1>/Pos_PU'
   */
  0.0F,

  /* Computed Parameter: Pos_w_Y0
   * Referenced by: '<S1>/Pos_w'
   */
  0.0F,

  /* Expression: single(1)
   * Referenced by: '<S22>/PositionUnit'
   */
  1.0F,

  /* Computed Parameter: UseInputPort_Value
   * Referenced by: '<S12>/UseInputPort'
   */
  1.0F,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S12>/Switch1'
   */
  1.0F,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S21>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_j
   * Referenced by: '<S4>/Gain'
   */
  2147483648U,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S3>/Gain'
   */
  2147483648U,

  /* Computed Parameter: Gain_Gain_p
   * Referenced by: '<S2>/Gain'
   */
  2147483648U,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S4>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_c
   * Referenced by: '<S3>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_f
   * Referenced by: '<S2>/Delay'
   */
  0U,

  /* Expression: uint32(30*ClkFreq/(PolePairs*MinSpeed))
   * Referenced by: '<S26>/SpeedConst'
   */
  63000000U,

  /* Computed Parameter: speedcheck_Threshold
   * Referenced by: '<S27>/speed check'
   */
  63000000U,

  /* Computed Parameter: speedCountDelay_InitialConditio
   * Referenced by: '<S23>/speedCountDelay'
   */
  0U,

  /* Computed Parameter: RT7_InitialCondition
   * Referenced by: '<Root>/RT7'
   */
  0U,

  /* Computed Parameter: DataStoreMemory3_InitialValue
   * Referenced by: '<Root>/Data Store Memory3'
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

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S106>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S82>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S58>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S18>/Constant'
   */
  0U,

  /* Computed Parameter: PositionEnable_Value
   * Referenced by: '<S26>/PositionEnable'
   */
  1U,

  /* Computed Parameter: WatchDog_Value
   * Referenced by: '<S22>/WatchDog'
   */
  0U,

  /* Computed Parameter: Out1_Y0_h
   * Referenced by: '<S1>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_dk
   * Referenced by: '<S28>/Constant'
   */
  0U,

  /* Computed Parameter: Order_Value
   * Referenced by: '<S23>/Order'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S23>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_lo
   * Referenced by: '<S27>/Constant'
   */
  0U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S24>/Constant2'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S17>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S11>/Output'
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
   * Referenced by: '<S23>/validityDelay'
   */
  false,

  /* Computed Parameter: DelayOneStep1_InitialCondition
   * Referenced by: '<S24>/Delay One Step1'
   */
  true,

  /* Computed Parameter: Gain_Gain_f
   * Referenced by: '<S107>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S83>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_ca
   * Referenced by: '<S59>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_m
   * Referenced by: '<S136>/Gain'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_a
   * Referenced by: '<S107>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_c
   * Referenced by: '<S83>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_i
   * Referenced by: '<S59>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<S136>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S107>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_d
   * Referenced by: '<S83>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_k
   * Referenced by: '<S59>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_n
   * Referenced by: '<S136>/Gain2'
   */
  128U,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<Root>/Data Store Memory'
   */
  0U,

  /* Start of '<S29>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S36>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S29>/Hall Value of 7' */

  /* Start of '<S29>/Hall Value of 6' */
  {
    /* Expression: single(0.91667)
     * Referenced by: '<S35>/Constant'
     */
    0.91667F
  }
  ,

  /* End of '<S29>/Hall Value of 6' */

  /* Start of '<S29>/Hall Value of 5' */
  {
    /* Expression: single(0.75)
     * Referenced by: '<S34>/Constant'
     */
    0.75F
  }
  ,

  /* End of '<S29>/Hall Value of 5' */

  /* Start of '<S29>/Hall Value of 4' */
  {
    /* Expression: single(0.58333)
     * Referenced by: '<S33>/Constant'
     */
    0.58333F
  }
  ,

  /* End of '<S29>/Hall Value of 4' */

  /* Start of '<S29>/Hall Value of 3' */
  {
    /* Expression: single(0.41667)
     * Referenced by: '<S32>/Constant'
     */
    0.41667F
  }
  ,

  /* End of '<S29>/Hall Value of 3' */

  /* Start of '<S29>/Hall Value of 2' */
  {
    /* Expression: single(0.25)
     * Referenced by: '<S31>/Constant'
     */
    0.25F
  }
  ,

  /* End of '<S29>/Hall Value of 2' */

  /* Start of '<S29>/Hall Value of 1' */
  {
    /* Expression: single(0.083333)
     * Referenced by: '<S30>/Constant'
     */
    0.083333F
  }
  ,

  /* End of '<S29>/Hall Value of 1' */

  /* Start of '<S40>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S50>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S40>/Hall Value of 7' */

  /* Start of '<S40>/Hall Value of 6' */
  {
    /* Expression: single(0.83333)
     * Referenced by: '<S49>/Constant'
     */
    0.83333F
  }
  ,

  /* End of '<S40>/Hall Value of 6' */

  /* Start of '<S40>/Hall Value of 5' */
  {
    /* Expression: single(0.66667)
     * Referenced by: '<S48>/Constant'
     */
    0.66667F
  }
  ,

  /* End of '<S40>/Hall Value of 5' */

  /* Start of '<S40>/Hall Value of 4' */
  {
    /* Expression: single(0.5)
     * Referenced by: '<S47>/Constant'
     */
    0.5F
  }
  ,

  /* End of '<S40>/Hall Value of 4' */

  /* Start of '<S40>/Hall Value of 3' */
  {
    /* Expression: single(0.33333)
     * Referenced by: '<S46>/Constant'
     */
    0.33333F
  }
  ,

  /* End of '<S40>/Hall Value of 3' */

  /* Start of '<S40>/Hall Value of 2' */
  {
    /* Expression: single(0.16667)
     * Referenced by: '<S45>/Constant'
     */
    0.16667F
  }
  ,

  /* End of '<S40>/Hall Value of 2' */

  /* Start of '<S40>/Hall Value of 1' */
  {
    /* Expression: single(0)
     * Referenced by: '<S44>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S40>/Hall Value of 1' */

  /* Start of '<S41>/Hall Value of 7' */
  {
    /* Expression: single(0)
     * Referenced by: '<S57>/Constant'
     */
    0.0F
  }
  ,

  /* End of '<S41>/Hall Value of 7' */

  /* Start of '<S41>/Hall Value of 6' */
  {
    /* Expression: single(1)
     * Referenced by: '<S56>/Constant'
     */
    1.0F
  }
  ,

  /* End of '<S41>/Hall Value of 6' */

  /* Start of '<S41>/Hall Value of 5' */
  {
    /* Expression: single(0.83333)
     * Referenced by: '<S55>/Constant'
     */
    0.83333F
  }
  ,

  /* End of '<S41>/Hall Value of 5' */

  /* Start of '<S41>/Hall Value of 4' */
  {
    /* Expression: single(0.66667)
     * Referenced by: '<S54>/Constant'
     */
    0.66667F
  }
  ,

  /* End of '<S41>/Hall Value of 4' */

  /* Start of '<S41>/Hall Value of 3' */
  {
    /* Expression: single(0.5)
     * Referenced by: '<S53>/Constant'
     */
    0.5F
  }
  ,

  /* End of '<S41>/Hall Value of 3' */

  /* Start of '<S41>/Hall Value of 2' */
  {
    /* Expression: single(0.33333)
     * Referenced by: '<S52>/Constant'
     */
    0.33333F
  }
  ,

  /* End of '<S41>/Hall Value of 2' */

  /* Start of '<S41>/Hall Value of 1' */
  {
    /* Expression: single(0.16667)
     * Referenced by: '<S51>/Constant'
     */
    0.16667F
  }
  ,

  /* End of '<S41>/Hall Value of 1' */

  /* Start of '<S60>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S61>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S61>/Constant1'
     */
    false
  }
  ,

  /* End of '<S60>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S60>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S62>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S71>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S62>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S62>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S62>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S62>/Constant'
     */
    false,

    /* Start of '<S110>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S68>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S68>/next'
       */
      5U
    }
    ,

    /* End of '<S110>/If Action Subsystem5' */

    /* Start of '<S110>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S67>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S67>/next'
       */
      1U
    }
    ,

    /* End of '<S110>/If Action Subsystem4' */

    /* Start of '<S110>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S66>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S66>/next'
       */
      3U
    }
    ,

    /* End of '<S110>/If Action Subsystem3' */

    /* Start of '<S110>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S65>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S65>/next'
       */
      2U
    }
    ,

    /* End of '<S110>/If Action Subsystem2' */

    /* Start of '<S110>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S64>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S64>/next'
       */
      6U
    }
    ,

    /* End of '<S110>/If Action Subsystem1' */

    /* Start of '<S110>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S63>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S63>/next'
       */
      4U
    }
    ,

    /* End of '<S110>/If Action Subsystem' */

    /* Start of '<S110>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S70>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S70>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S110>/If Action Subsystem7' */

    /* Start of '<S110>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S69>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S69>/Constant1'
       */
      0U
    }
    /* End of '<S110>/If Action Subsystem6' */
  }
  ,

  /* End of '<S60>/Valid Halls' */

  /* Start of '<S84>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S85>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S85>/Constant1'
     */
    false
  }
  ,

  /* End of '<S84>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S84>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S86>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S95>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S86>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S86>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S86>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S86>/Constant'
     */
    false,

    /* Start of '<S110>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S92>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S92>/next'
       */
      5U
    }
    ,

    /* End of '<S110>/If Action Subsystem5' */

    /* Start of '<S110>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S91>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S91>/next'
       */
      1U
    }
    ,

    /* End of '<S110>/If Action Subsystem4' */

    /* Start of '<S110>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S90>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S90>/next'
       */
      3U
    }
    ,

    /* End of '<S110>/If Action Subsystem3' */

    /* Start of '<S110>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S89>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S89>/next'
       */
      2U
    }
    ,

    /* End of '<S110>/If Action Subsystem2' */

    /* Start of '<S110>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S88>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S88>/next'
       */
      6U
    }
    ,

    /* End of '<S110>/If Action Subsystem1' */

    /* Start of '<S110>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S87>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S87>/next'
       */
      4U
    }
    ,

    /* End of '<S110>/If Action Subsystem' */

    /* Start of '<S110>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S94>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S94>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S110>/If Action Subsystem7' */

    /* Start of '<S110>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S93>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S93>/Constant1'
       */
      0U
    }
    /* End of '<S110>/If Action Subsystem6' */
  }
  ,

  /* End of '<S84>/Valid Halls' */

  /* Start of '<S108>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S109>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S109>/Constant1'
     */
    false
  }
  ,

  /* End of '<S108>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S108>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S110>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S119>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S110>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S110>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S110>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S110>/Constant'
     */
    false,

    /* Start of '<S110>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S116>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S116>/next'
       */
      5U
    }
    ,

    /* End of '<S110>/If Action Subsystem5' */

    /* Start of '<S110>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S115>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S115>/next'
       */
      1U
    }
    ,

    /* End of '<S110>/If Action Subsystem4' */

    /* Start of '<S110>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S114>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S114>/next'
       */
      3U
    }
    ,

    /* End of '<S110>/If Action Subsystem3' */

    /* Start of '<S110>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S113>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S113>/next'
       */
      2U
    }
    ,

    /* End of '<S110>/If Action Subsystem2' */

    /* Start of '<S110>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S112>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S112>/next'
       */
      6U
    }
    ,

    /* End of '<S110>/If Action Subsystem1' */

    /* Start of '<S110>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S111>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S111>/next'
       */
      4U
    }
    ,

    /* End of '<S110>/If Action Subsystem' */

    /* Start of '<S110>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S118>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S118>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S110>/If Action Subsystem7' */

    /* Start of '<S110>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S117>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S117>/Constant1'
       */
      0U
    }
    /* End of '<S110>/If Action Subsystem6' */
  }
  /* End of '<S108>/Valid Halls' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
