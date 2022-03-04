/*
 * File: Logic_Calculator.c
 *
 * Code generated for Simulink model 'Logic_Calculator'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sat Feb 19 04:57:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Logic_Calculator.h"
#include "Logic_Calculator_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Logic_Calculator_T Logic_Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Logic_Calculator_T Logic_Calculator_Y;

/* Real-time model */
RT_MODEL_Logic_Calculator_T Logic_Calculator_M_;
RT_MODEL_Logic_Calculator_T *const Logic_Calculator_M = &Logic_Calculator_M_;

/* Model step function */
void Logic_Calculator_step(void)
{
  uint16_T rtb_XOROperation;

  /* Outport: '<Root>/AND_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   *  S-Function (sfix_bitop): '<Root>/AND Operation'
   */
  Logic_Calculator_Y.AND_Res = (uint16_T)(Logic_Calculator_U.Operand_One &
    Logic_Calculator_U.Operand_Two);

  /* Outport: '<Root>/OR_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   *  S-Function (sfix_bitop): '<Root>/OR Operation'
   */
  Logic_Calculator_Y.OR_Res = (uint16_T)(Logic_Calculator_U.Operand_One |
    Logic_Calculator_U.Operand_Two);

  /* S-Function (sfix_bitop): '<Root>/XOR Operation' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  Inport: '<Root>/Operand_Two'
   */
  rtb_XOROperation = (uint16_T)(Logic_Calculator_U.Operand_One ^
    Logic_Calculator_U.Operand_Two);

  /* Outport: '<Root>/XOR_Res' */
  Logic_Calculator_Y.XOR_Res = rtb_XOROperation;

  /* Outport: '<Root>/XNOR_Res' incorporates:
   *  S-Function (sfix_bitop): '<Root>/XNOR Operation'
   */
  Logic_Calculator_Y.XNOR_Res = (uint16_T)~rtb_XOROperation;

  /* Outport: '<Root>/NOT_OP1_Res' incorporates:
   *  Inport: '<Root>/Operand_One'
   *  S-Function (sfix_bitop): '<Root>/NOT Operator1'
   */
  Logic_Calculator_Y.NOT_OP1_Res = (uint16_T)~Logic_Calculator_U.Operand_One;

  /* Outport: '<Root>/NOT_OP2_Res' incorporates:
   *  Inport: '<Root>/Operand_Two'
   *  S-Function (sfix_bitop): '<Root>/NOT Operator2'
   */
  Logic_Calculator_Y.NOT_OP2_Res = (uint16_T)~Logic_Calculator_U.Operand_Two;
}

/* Model initialize function */
void Logic_Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Logic_Calculator_M, (NULL));

  /* external inputs */
  (void) memset((void *)&Logic_Calculator_U, 0,
                sizeof(ExtU_Logic_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Logic_Calculator_Y, 0,
                sizeof(ExtY_Logic_Calculator_T));
}

/* Model terminate function */
void Logic_Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
