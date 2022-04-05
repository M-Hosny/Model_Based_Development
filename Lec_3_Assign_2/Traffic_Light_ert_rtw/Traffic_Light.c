/*
 * File: Traffic_Light.c
 *
 * Code generated for Simulink model 'Traffic_Light'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Apr 05 21:11:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Traffic_Light.h"
#include "Traffic_Light_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Traffic_Ligh_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Traffic_Light_IN_Go            ((uint8_T)1U)
#define Traffic_Light_IN_Ready         ((uint8_T)2U)
#define Traffic_Light_IN_Stop          ((uint8_T)3U)

/* Block signals (auto storage) */
B_Traffic_Light_T Traffic_Light_B;

/* Block states (auto storage) */
DW_Traffic_Light_T Traffic_Light_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Traffic_Light_T Traffic_Light_Y;

/* Real-time model */
RT_MODEL_Traffic_Light_T Traffic_Light_M_;
RT_MODEL_Traffic_Light_T *const Traffic_Light_M = &Traffic_Light_M_;

/* Model step function */
void Traffic_Light_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Traffic_Light_DW.temporalCounter_i1 < 31U) {
    Traffic_Light_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Traffic_Light_DW.is_active_c3_Traffic_Light == 0U) {
    /* Entry: Chart */
    Traffic_Light_DW.is_active_c3_Traffic_Light = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Traffic_Light_DW.is_c3_Traffic_Light = Traffic_Light_IN_Stop;
    Traffic_Light_DW.temporalCounter_i1 = 0U;

    /* Entry 'Stop': '<S1>:1' */
    Traffic_Light_B.Red = 0U;
    Traffic_Light_B.Yellow = 0U;
    Traffic_Light_B.Green = 0U;
  } else {
    switch (Traffic_Light_DW.is_c3_Traffic_Light) {
     case Traffic_Light_IN_Go:
      /* During 'Go': '<S1>:3' */
      if (Traffic_Light_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:7' */
        Traffic_Light_DW.is_c3_Traffic_Light = Traffic_Light_IN_Stop;
        Traffic_Light_DW.temporalCounter_i1 = 0U;

        /* Entry 'Stop': '<S1>:1' */
        Traffic_Light_B.Red = 0U;
        Traffic_Light_B.Yellow = 0U;
        Traffic_Light_B.Green = 0U;
      } else {
        Traffic_Light_B.Red = 0U;
        Traffic_Light_B.Yellow = 0U;
        Traffic_Light_B.Green = 1U;
      }
      break;

     case Traffic_Light_IN_Ready:
      /* During 'Ready': '<S1>:4' */
      if (Traffic_Light_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:15' */
        Traffic_Light_DW.is_c3_Traffic_Light = Traffic_Light_IN_Go;
        Traffic_Light_DW.temporalCounter_i1 = 0U;

        /* Entry 'Go': '<S1>:3' */
        Traffic_Light_B.Red = 0U;
        Traffic_Light_B.Yellow = 0U;
        Traffic_Light_B.Green = 0U;
      } else {
        Traffic_Light_B.Red = 0U;
        Traffic_Light_B.Yellow = 1U;
        Traffic_Light_B.Green = 0U;
      }
      break;

     default:
      /* During 'Stop': '<S1>:1' */
      if (Traffic_Light_DW.temporalCounter_i1 >= 15U) {
        /* Transition: '<S1>:5' */
        Traffic_Light_DW.is_c3_Traffic_Light = Traffic_Light_IN_Ready;
        Traffic_Light_DW.temporalCounter_i1 = 0U;

        /* Entry 'Ready': '<S1>:4' */
        Traffic_Light_B.Red = 0U;
        Traffic_Light_B.Yellow = 0U;
        Traffic_Light_B.Green = 0U;
      } else {
        Traffic_Light_B.Red = 1U;
        Traffic_Light_B.Yellow = 0U;
        Traffic_Light_B.Green = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/Out1' */
  Traffic_Light_Y.Out1 = Traffic_Light_B.Red;

  /* Outport: '<Root>/Out2' */
  Traffic_Light_Y.Out2 = Traffic_Light_B.Yellow;

  /* Outport: '<Root>/Out3' */
  Traffic_Light_Y.Out3 = Traffic_Light_B.Green;
}

/* Model initialize function */
void Traffic_Light_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Traffic_Light_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Traffic_Light_B), 0,
                sizeof(B_Traffic_Light_T));

  /* states (dwork) */
  (void) memset((void *)&Traffic_Light_DW, 0,
                sizeof(DW_Traffic_Light_T));

  /* external outputs */
  (void) memset((void *)&Traffic_Light_Y, 0,
                sizeof(ExtY_Traffic_Light_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Traffic_Light_DW.temporalCounter_i1 = 0U;
  Traffic_Light_DW.is_active_c3_Traffic_Light = 0U;
  Traffic_Light_DW.is_c3_Traffic_Light = Traffic_Ligh_IN_NO_ACTIVE_CHILD;
  Traffic_Light_B.Red = 0U;
  Traffic_Light_B.Yellow = 0U;
  Traffic_Light_B.Green = 0U;
}

/* Model terminate function */
void Traffic_Light_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
