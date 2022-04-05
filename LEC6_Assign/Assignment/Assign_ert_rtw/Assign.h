/*
 * File: Assign.h
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

#ifndef RTW_HEADER_Assign_h_
#define RTW_HEADER_Assign_h_
#include <stddef.h>
#include <string.h>
#ifndef Assign_COMMON_INCLUDES_
# define Assign_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Assign_COMMON_INCLUDES_ */

#include "Assign_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T led;                          /* '<S2>/LedState ' */
} B_Assign_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  uint8_T is_active_c3_Assign;         /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Assign_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Assign_T;

/* Real-time Model Data Structure */
struct tag_RTM_Assign_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Assign_T Assign_B;

/* Block states (auto storage) */
extern DW_Assign_T Assign_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Assign_T Assign_Y;

/* Model entry point functions */
extern void Assign_initialize(void);
extern void Assign_step(void);
extern void Assign_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Assign_T *const Assign_M;

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
 * '<Root>' : 'Assign'
 * '<S1>'   : 'Assign/Chart'
 * '<S2>'   : 'Assign/Function-Call Subsystem'
 * '<S3>'   : 'Assign/Function-Call Subsystem/CheckSwitchStatus'
 * '<S4>'   : 'Assign/Function-Call Subsystem/LedState '
 */
#endif                                 /* RTW_HEADER_Assign_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
