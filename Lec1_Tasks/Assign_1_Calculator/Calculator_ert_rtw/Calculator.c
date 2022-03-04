/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Feb 21 17:28:43 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Model step function */
void Calculator_step(void)
{
  /* Outport: '<Root>/Add_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   *  Sum: '<Root>/Add'
   */
  Calculator_Y.Add_Res = Calculator_U.Operand_One + Calculator_U.Operand_Two;

  /* Outport: '<Root>/Sub_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   *  Sum: '<Root>/Subtract'
   */
  Calculator_Y.Sub_Res = Calculator_U.Operand_One - Calculator_U.Operand_Two;

  /* Outport: '<Root>/Mul_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   *  Product: '<Root>/Product'
   */
  Calculator_Y.Mul_Res = Calculator_U.Operand_One * Calculator_U.Operand_Two;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Operand_Two'
   */
  if (Calculator_U.Operand_Two > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Div_Res ' incorporates:
     *  Inport: '<Root>/Operand_One'
     *  Product: '<S1>/Divide'
     */
    Calculator_Y.Div_Res = Calculator_U.Operand_One / Calculator_U.Operand_Two;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Zero_Div_Flag' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S2>/In1'
     */
    Calculator_Y.Zero_Div_Flag = 1.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* external inputs */
  (void) memset((void *)&Calculator_U, 0,
                sizeof(ExtU_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Calculator_Y, 0,
                sizeof(ExtY_Calculator_T));
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
