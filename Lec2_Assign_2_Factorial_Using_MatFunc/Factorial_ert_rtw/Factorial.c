/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Feb 21 18:02:44 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial.h"
#include "Factorial_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;

/* Model step function */
void Factorial_step(void)
{
  real_T f;
  int32_T x;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/In1'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:3' f=1; */
  f = 1.0;

  /* '<S1>:1:4' for x=1:u */
  for (x = 0; x < (int32_T)Factorial_U.In1; x++) {
    /* '<S1>:1:5' f=f*x; */
    f *= 1.0 + (real_T)x;
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  /* '<S1>:1:7' y = f; */
  Factorial_Y.Out1 = f;
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* external inputs */
  Factorial_U.In1 = 0.0;

  /* external outputs */
  Factorial_Y.Out1 = 0.0;
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
