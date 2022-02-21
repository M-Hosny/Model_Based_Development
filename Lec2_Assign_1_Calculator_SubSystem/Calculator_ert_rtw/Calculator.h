/*
 * File: Calculator.h
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

#ifndef RTW_HEADER_Calculator_h_
#define RTW_HEADER_Calculator_h_
#include <stddef.h>
#include <string.h>
#ifndef Calculator_COMMON_INCLUDES_
# define Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calculator_COMMON_INCLUDES_ */

#include "Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T Add;                          /* '<S1>/Add' */
  real_T Product;                      /* '<S1>/Product' */
  real_T Subtract;                     /* '<S1>/Subtract' */
  real_T In1;                          /* '<S3>/In1' */
  real_T Divide;                       /* '<S2>/Divide' */
} B_Subsystem_Calculator_T;

/* Block signals (auto storage) */
typedef struct {
  B_Subsystem_Calculator_T Subsystem;  /* '<Root>/Subsystem' */
} B_Calculator_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T Operand_One;                  /* '<Root>/Operand_One' */
  real_T Operand_Two;                  /* '<Root>/Operand_Two' */
} ExtU_Calculator_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Add_Res;                      /* '<Root>/Add_Res' */
  real_T Sub_Res;                      /* '<Root>/Sub_Res' */
  real_T Mul_Res;                      /* '<Root>/Mul_Res' */
  real_T Div_Res;                      /* '<Root>/Div_Res ' */
  real_T Zero_Div_Flag;                /* '<Root>/Zero_Div_Flag' */
} ExtY_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Calculator_T Calculator_B;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Calculator_T Calculator_Y;

/* Model entry point functions */
extern void Calculator_initialize(void);
extern void Calculator_step(void);
extern void Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_T *const Calculator_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Calculator'
 * '<S1>'   : 'Calculator/Subsystem'
 * '<S2>'   : 'Calculator/Subsystem/If Action Subsystem'
 * '<S3>'   : 'Calculator/Subsystem/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
