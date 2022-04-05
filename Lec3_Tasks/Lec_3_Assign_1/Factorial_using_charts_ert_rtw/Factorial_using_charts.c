/*
 * File: Factorial_using_charts.c
 *
 * Code generated for Simulink model 'Factorial_using_charts'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Apr 05 20:15:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_using_charts.h"
#include "Factorial_using_charts_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Factorial_using_charts_T Factorial_using_charts_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Factorial_using_charts_T Factorial_using_charts_Y;

/* Real-time model */
RT_MODEL_Factorial_using_char_T Factorial_using_charts_M_;
RT_MODEL_Factorial_using_char_T *const Factorial_using_charts_M =
  &Factorial_using_charts_M_;
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_u32_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/* Model step function */
void Factorial_using_charts_step(void)
{
  uint8_T counter;
  uint32_T rtb_fact;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:1' */
  /* Transition: '<S1>:4' */
  counter = Factorial_using_charts_U.In1;
  rtb_fact = 1U;
  while (counter > 1) {
    /* Transition: '<S1>:2' */
    /* Transition: '<S1>:3' */
    rtb_fact = mul_u32_u32_u32_sat(rtb_fact, counter);

    /* Transition: '<S1>:5' */
    counter--;
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/Out1' */
  /* Transition: '<S1>:6' */
  Factorial_using_charts_Y.Out1 = rtb_fact;
}

/* Model initialize function */
void Factorial_using_charts_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_using_charts_M, (NULL));

  /* external inputs */
  Factorial_using_charts_U.In1 = 0U;

  /* external outputs */
  Factorial_using_charts_Y.Out1 = 0U;
}

/* Model terminate function */
void Factorial_using_charts_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
