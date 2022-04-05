/*
 * File: Assign.c
 *
 * Code generated for Simulink model 'Assign'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Apr 05 23:11:18 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assign.h"
#include "Assign_private.h"

/* Block signals (auto storage) */
B_Assign_T Assign_B;

/* Block states (auto storage) */
DW_Assign_T Assign_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Assign_T Assign_Y;

/* Real-time model */
RT_MODEL_Assign_T Assign_M_;
RT_MODEL_Assign_T *const Assign_M = &Assign_M_;

/* Model step function */
void Assign_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Assign_DW.temporalCounter_i1 < 3U) {
    Assign_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Assign_DW.is_active_c3_Assign == 0U) {
    /* Entry: Chart */
    Assign_DW.is_active_c3_Assign = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    Assign_DW.temporalCounter_i1 = 0U;

    /* Entry 'callFunction': '<S1>:1' */
  } else {
    /* During 'callFunction': '<S1>:1' */
    /* '<S1>:3:1' sf_internal_predicateOutput = ... */
    /* '<S1>:3:1' after(5,msec); */
    if (Assign_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Chart: '<S2>/LedState ' */
      /* Transition: '<S1>:3' */
      /* '<S1>:3:1' callfunc; */
      /* Event: '<S1>:4' */
      /* Gateway: Function-Call
         Subsystem/CheckSwitchStatus */
      /* During: Function-Call
         Subsystem/CheckSwitchStatus */
      /* Entry Internal: Function-Call
         Subsystem/CheckSwitchStatus */
      /* Transition: '<S3>:1' */
      /*  Check Button */
      /* Transition: '<S3>:2' */
      /* Transition: '<S3>:4' */
      /* Transition: '<S3>:5' */
      /* Transition: '<S3>:6' */
      /* Gateway: Function-Call
         Subsystem/LedState
       */
      /* During: Function-Call
         Subsystem/LedState
       */
      /* Entry Internal: Function-Call
         Subsystem/LedState
       */
      /* Transition: '<S4>:1' */
      /*  Led State */
      /* Transition: '<S4>:2' */
      /* Transition: '<S4>:4' */
      Assign_B.led = 1.0;

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      /* Transition: '<S4>:5' */
      /* Transition: '<S4>:6' */
      /* Exit 'callFunction': '<S1>:1' */
      Assign_DW.temporalCounter_i1 = 0U;

      /* Entry 'callFunction': '<S1>:1' */
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/Out1' */
  Assign_Y.Out1 = Assign_B.led;
}

/* Model initialize function */
void Assign_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Assign_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Assign_B), 0,
                sizeof(B_Assign_T));

  /* states (dwork) */
  (void) memset((void *)&Assign_DW, 0,
                sizeof(DW_Assign_T));

  /* external outputs */
  Assign_Y.Out1 = 0.0;
  Assign_DW.temporalCounter_i1 = 0U;
  Assign_DW.is_active_c3_Assign = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
   *  SystemInitialize for SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* SystemInitialize for Chart: '<S2>/LedState ' */
  Assign_B.led = 0.0;
}

/* Model terminate function */
void Assign_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
