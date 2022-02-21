/*
 * File: Logic_Calculator.h
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

#ifndef RTW_HEADER_Logic_Calculator_h_
#define RTW_HEADER_Logic_Calculator_h_
#include <stddef.h>
#include <string.h>
#ifndef Logic_Calculator_COMMON_INCLUDES_
# define Logic_Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Logic_Calculator_COMMON_INCLUDES_ */

#include "Logic_Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint16_T Operand_One;                /* '<Root>/Operand_One' */
  uint16_T Operand_Two;                /* '<Root>/Operand_Two' */
} ExtU_Logic_Calculator_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint16_T AND_Res;                    /* '<Root>/AND_Res' */
  uint16_T OR_Res;                     /* '<Root>/OR_Res' */
  uint16_T XOR_Res;                    /* '<Root>/XOR_Res' */
  uint16_T XNOR_Res;                   /* '<Root>/XNOR_Res' */
  uint16_T NOT_OP1_Res;                /* '<Root>/NOT_OP1_Res' */
  uint16_T NOT_OP2_Res;                /* '<Root>/NOT_OP2_Res' */
} ExtY_Logic_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Logic_Calculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Logic_Calculator_T Logic_Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Logic_Calculator_T Logic_Calculator_Y;

/* Model entry point functions */
extern void Logic_Calculator_initialize(void);
extern void Logic_Calculator_step(void);
extern void Logic_Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Logic_Calculator_T *const Logic_Calculator_M;

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
 * '<Root>' : 'Logic_Calculator'
 */
#endif                                 /* RTW_HEADER_Logic_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
