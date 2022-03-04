/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Feb 21 17:30:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* Block signals (auto storage) */
B_Calculator_T Calculator_B;

/* External inputs (root inport signals with auto storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Output and update for atomic system: '<Root>/Subsystem' */
void Calculator_Subsystem(real_T rtu_Operand_One, real_T rtu_Operand_Two,
  B_Subsystem_Calculator_T *localB)
{
  /* Sum: '<S1>/Add' */
  localB->Add = rtu_Operand_One + rtu_Operand_Two;

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<S3>/In1'
   */
  if (rtu_Operand_Two > 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Product: '<S2>/Divide' */
    localB->Divide = rtu_Operand_One / rtu_Operand_Two;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    localB->In1 = 1.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */

  /* Product: '<S1>/Product' */
  localB->Product = rtu_Operand_One * rtu_Operand_Two;

  /* Sum: '<S1>/Subtract' */
  localB->Subtract = rtu_Operand_One - rtu_Operand_Two;
}

/* Model step function */
void Calculator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Inport: '<Root>/Operand_One' incorporates:
   *  Inport: '<Root>/Operand_Two'
   */
  Calculator_Subsystem(Calculator_U.Operand_One, Calculator_U.Operand_Two,
                       &Calculator_B.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Add_Res' */
  Calculator_Y.Add_Res = Calculator_B.Subsystem.Add;

  /* Outport: '<Root>/Sub_Res' */
  Calculator_Y.Sub_Res = Calculator_B.Subsystem.Subtract;

  /* Outport: '<Root>/Mul_Res' */
  Calculator_Y.Mul_Res = Calculator_B.Subsystem.Product;

  /* Outport: '<Root>/Div_Res ' */
  Calculator_Y.Div_Res = Calculator_B.Subsystem.Divide;

  /* Outport: '<Root>/Zero_Div_Flag' */
  Calculator_Y.Zero_Div_Flag = Calculator_B.Subsystem.In1;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_B), 0,
                sizeof(B_Calculator_T));

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
