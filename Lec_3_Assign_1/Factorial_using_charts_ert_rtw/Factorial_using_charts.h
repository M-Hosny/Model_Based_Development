/*
 * File: Factorial_using_charts.h
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

#ifndef RTW_HEADER_Factorial_using_charts_h_
#define RTW_HEADER_Factorial_using_charts_h_
#include <stddef.h>
#ifndef Factorial_using_charts_COMMON_INCLUDES_
# define Factorial_using_charts_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_using_charts_COMMON_INCLUDES_ */

#include "Factorial_using_charts_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
} ExtU_Factorial_using_charts_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
} ExtY_Factorial_using_charts_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_using_chart_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Factorial_using_charts_T Factorial_using_charts_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Factorial_using_charts_T Factorial_using_charts_Y;

/* Model entry point functions */
extern void Factorial_using_charts_initialize(void);
extern void Factorial_using_charts_step(void);
extern void Factorial_using_charts_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_using_char_T *const Factorial_using_charts_M;

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
 * '<Root>' : 'Factorial_using_charts'
 * '<S1>'   : 'Factorial_using_charts/Chart'
 */
#endif                                 /* RTW_HEADER_Factorial_using_charts_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
