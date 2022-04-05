/*
 * File: Assignment.c
 *
 * Code generated for Simulink model 'Assignment'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Apr 05 22:39:11 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assignment.h"
#include "Assignment_private.h"

/* Block signals (auto storage) */
B_Assignment_T Assignment_B;

/* Block states (auto storage) */
DW_Assignment_T Assignment_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Assignment_T Assignment_Y;

/* Real-time model */
RT_MODEL_Assignment_T Assignment_M_;
RT_MODEL_Assignment_T *const Assignment_M = &Assignment_M_;

/* Model step function */
void Assignment_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant'
   *  Inport: '<S2>/In1'
   */
  if (Assignment_DW.temporalCounter_i1 < 3U) {
    Assignment_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Assignment_DW.is_active_c3_Assignment == 0U) {
    /* Entry: Chart */
    Assignment_DW.is_active_c3_Assignment = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Assignment_DW.temporalCounter_i1 = 0U;

    /* Entry 'callFunction': '<S1>:1' */
  } else {
    /* During 'callFunction': '<S1>:1' */
    /* '<S1>:3:1' sf_internal_predicateOutput = ... */
    /* '<S1>:3:1' after(5,msec); */
    if (Assignment_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Transition: '<S1>:3' */
      /* '<S1>:3:1' callfunc; */
      /* Event: '<S1>:4' */
      Assignment_B.In1 = 0.0;

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      /* Exit 'callFunction': '<S1>:1' */
      Assignment_DW.temporalCounter_i1 = 0U;

      /* Entry 'callFunction': '<S1>:1' */
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/Out1' */
  Assignment_Y.Out1 = Assignment_B.In1;
}

/* Model initialize function */
void Assignment_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Assignment_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Assignment_B), 0,
                sizeof(B_Assignment_T));

  /* states (dwork) */
  (void) memset((void *)&Assignment_DW, 0,
                sizeof(DW_Assignment_T));

  /* external outputs */
  Assignment_Y.Out1 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Assignment_DW.temporalCounter_i1 = 0U;
  Assignment_DW.is_active_c3_Assignment = 0U;
}

/* Model terminate function */
void Assignment_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
