/*
 * File: STMF4Hall_data.c
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

/* Block parameters (default storage) */
P_STMF4Hall_T STMF4Hall_P = {
  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S17>/FixPt Switch'
   */
  20000U,

  /* Mask Parameter: SoftwareWatchdogTimer_maxCount
   * Referenced by: '<S20>/Delay One Step'
   */
  5000U,

  /* Expression: EnableSecondOrder
   * Referenced by: '<S35>/Constant'
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

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S39>/Constant'
   */
  1.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S39>/Gain1'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S39>/Gain'
   */
  0.166666672F,

  /* Computed Parameter: Gain_Gain_o
   * Referenced by: '<S38>/Gain'
   */
  0.166666672F,

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

  /* Expression: single(MinSpeed/6000)
   * Referenced by: '<S22>/SpeedGain'
   */
  0.00333333341F,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S21>/Constant'
   */
  0.0F,

  /* Computed Parameter: Pos_PU_Y0
   * Referenced by: '<S1>/Pos_PU'
   */
  0.0F,

  /* Expression: single(2*pi)
   * Referenced by: '<S18>/PositionUnit'
   */
  6.28318548F,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  0U,

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S4>/Delay1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_l
   * Referenced by: '<S3>/Out1'
   */
  0U,

  /* Computed Parameter: Delay1_InitialCondition_o
   * Referenced by: '<S3>/Delay1'
   */
  0U,

  /* Computed Parameter: Out1_Y0_n
   * Referenced by: '<S2>/Out1'
   */
  0U,

  /* Computed Parameter: Delay1_InitialCondition_i
   * Referenced by: '<S2>/Delay1'
   */
  0U,

  /* Expression: uint32(10*ClkFreq/(PolePairs*MinSpeed))
   * Referenced by: '<S22>/SpeedConst'
   */
  250000U,

  /* Computed Parameter: speedcheck_Threshold
   * Referenced by: '<S23>/speed check'
   */
  250000U,

  /* Computed Parameter: speedCountDelay_InitialConditio
   * Referenced by: '<S19>/speedCountDelay'
   */
  0U,

  /* Computed Parameter: RT7_InitialCondition
   * Referenced by: '<Root>/RT7'
   */
  0U,

  /* Computed Parameter: DataStoreMemory12_InitialValue
   * Referenced by: '<Root>/Data Store Memory12'
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

  /* Computed Parameter: DataStoreMemory11_InitialValue
   * Referenced by: '<Root>/Data Store Memory11'
   */
  0U,

  /* Computed Parameter: DataStoreMemory10_InitialValue
   * Referenced by: '<Root>/Data Store Memory10'
   */
  0U,

  /* Computed Parameter: DataStoreMemory5_InitialValue
   * Referenced by: '<Root>/Data Store Memory5'
   */
  0,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S102>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S78>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S54>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S17>/Constant'
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

  /* Computed Parameter: Out1_Y0_h
   * Referenced by: '<S1>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_dk
   * Referenced by: '<S24>/Constant'
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

  /* Computed Parameter: Constant_Value_lo
   * Referenced by: '<S23>/Constant'
   */
  0U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S20>/Constant2'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S16>/FixPt Constant'
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
   * Referenced by: '<S19>/validityDelay'
   */
  false,

  /* Computed Parameter: DelayOneStep1_InitialCondition
   * Referenced by: '<S20>/Delay One Step1'
   */
  true,

  /* Computed Parameter: Gain_Gain_f
   * Referenced by: '<S103>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S79>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_ca
   * Referenced by: '<S55>/Gain'
   */
  128U,

  /* Computed Parameter: Gain_Gain_m
   * Referenced by: '<S132>/Gain'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_a
   * Referenced by: '<S103>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_c
   * Referenced by: '<S79>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_i
   * Referenced by: '<S55>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<S132>/Gain1'
   */
  128U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S103>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_d
   * Referenced by: '<S79>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_k
   * Referenced by: '<S55>/Gain2'
   */
  128U,

  /* Computed Parameter: Gain2_Gain_n
   * Referenced by: '<S132>/Gain2'
   */
  128U,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S4>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_h
   * Referenced by: '<S3>/Delay'
   */
  0U,

  /* Computed Parameter: Delay_InitialCondition_hg
   * Referenced by: '<S2>/Delay'
   */
  0U,

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

  /* Start of '<S56>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S57>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S57>/Constant1'
     */
    false
  }
  ,

  /* End of '<S56>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S56>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S58>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S67>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S58>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S58>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S58>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S58>/Constant'
     */
    false,

    /* Start of '<S106>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S64>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S64>/next'
       */
      5U
    }
    ,

    /* End of '<S106>/If Action Subsystem5' */

    /* Start of '<S106>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S63>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S63>/next'
       */
      1U
    }
    ,

    /* End of '<S106>/If Action Subsystem4' */

    /* Start of '<S106>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S62>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S62>/next'
       */
      3U
    }
    ,

    /* End of '<S106>/If Action Subsystem3' */

    /* Start of '<S106>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S61>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S61>/next'
       */
      2U
    }
    ,

    /* End of '<S106>/If Action Subsystem2' */

    /* Start of '<S106>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S60>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S60>/next'
       */
      6U
    }
    ,

    /* End of '<S106>/If Action Subsystem1' */

    /* Start of '<S106>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S59>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S59>/next'
       */
      4U
    }
    ,

    /* End of '<S106>/If Action Subsystem' */

    /* Start of '<S106>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S66>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S66>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S106>/If Action Subsystem7' */

    /* Start of '<S106>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S65>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S65>/Constant1'
       */
      0U
    }
    /* End of '<S106>/If Action Subsystem6' */
  }
  ,

  /* End of '<S56>/Valid Halls' */

  /* Start of '<S80>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S81>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S81>/Constant1'
     */
    false
  }
  ,

  /* End of '<S80>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S80>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S82>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S91>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S82>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S82>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S82>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S82>/Constant'
     */
    false,

    /* Start of '<S106>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S88>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S88>/next'
       */
      5U
    }
    ,

    /* End of '<S106>/If Action Subsystem5' */

    /* Start of '<S106>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S87>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S87>/next'
       */
      1U
    }
    ,

    /* End of '<S106>/If Action Subsystem4' */

    /* Start of '<S106>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S86>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S86>/next'
       */
      3U
    }
    ,

    /* End of '<S106>/If Action Subsystem3' */

    /* Start of '<S106>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S85>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S85>/next'
       */
      2U
    }
    ,

    /* End of '<S106>/If Action Subsystem2' */

    /* Start of '<S106>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S84>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S84>/next'
       */
      6U
    }
    ,

    /* End of '<S106>/If Action Subsystem1' */

    /* Start of '<S106>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S83>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S83>/next'
       */
      4U
    }
    ,

    /* End of '<S106>/If Action Subsystem' */

    /* Start of '<S106>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S90>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S90>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S106>/If Action Subsystem7' */

    /* Start of '<S106>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S89>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S89>/Constant1'
       */
      0U
    }
    /* End of '<S106>/If Action Subsystem6' */
  }
  ,

  /* End of '<S80>/Valid Halls' */

  /* Start of '<S104>/Bad hall (glitch or wrong connection)' */
  {
    /* Computed Parameter: Constant_Value
     * Referenced by: '<S105>/Constant'
     */
    1U,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S105>/Constant1'
     */
    false
  }
  ,

  /* End of '<S104>/Bad hall (glitch or wrong connection)' */

  /* Start of '<S104>/Valid Halls' */
  {
    /* Computed Parameter: Merge2_InitialOutput
     * Referenced by: '<S106>/Merge2'
     */
    0,

    /* Computed Parameter: Constant_Value
     * Referenced by: '<S115>/Constant'
     */
    1U,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S106>/Merge'
     */
    0U,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S106>/Merge1'
     */
    0U,

    /* Computed Parameter: Merge3_InitialOutput
     * Referenced by: '<S106>/Merge3'
     */
    0U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S106>/Constant'
     */
    false,

    /* Start of '<S106>/If Action Subsystem5' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S112>/previous'
       */
      3U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S112>/next'
       */
      5U
    }
    ,

    /* End of '<S106>/If Action Subsystem5' */

    /* Start of '<S106>/If Action Subsystem4' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S111>/previous'
       */
      2U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S111>/next'
       */
      1U
    }
    ,

    /* End of '<S106>/If Action Subsystem4' */

    /* Start of '<S106>/If Action Subsystem3' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S110>/previous'
       */
      6U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S110>/next'
       */
      3U
    }
    ,

    /* End of '<S106>/If Action Subsystem3' */

    /* Start of '<S106>/If Action Subsystem2' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S109>/previous'
       */
      4U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S109>/next'
       */
      2U
    }
    ,

    /* End of '<S106>/If Action Subsystem2' */

    /* Start of '<S106>/If Action Subsystem1' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S108>/previous'
       */
      5U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S108>/next'
       */
      6U
    }
    ,

    /* End of '<S106>/If Action Subsystem1' */

    /* Start of '<S106>/If Action Subsystem' */
    {
      /* Computed Parameter: previous_Value
       * Referenced by: '<S107>/previous'
       */
      1U,

      /* Computed Parameter: next_Value
       * Referenced by: '<S107>/next'
       */
      4U
    }
    ,

    /* End of '<S106>/If Action Subsystem' */

    /* Start of '<S106>/If Action Subsystem7' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S114>/Constant'
       */
      -1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S114>/Constant1'
       */
      0U
    }
    ,

    /* End of '<S106>/If Action Subsystem7' */

    /* Start of '<S106>/If Action Subsystem6' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S113>/Constant'
       */
      1,

      /* Computed Parameter: Constant1_Value
       * Referenced by: '<S113>/Constant1'
       */
      0U
    }
    /* End of '<S106>/If Action Subsystem6' */
  }
  /* End of '<S104>/Valid Halls' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
