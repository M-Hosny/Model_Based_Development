/*
 * File: Traffic_Light.h
 *
 * Code generated for Simulink model 'Traffic_Light'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Apr 05 21:11:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Traffic_Light_h_
#define RTW_HEADER_Traffic_Light_h_
#include <stddef.h>
#include <string.h>
#ifndef Traffic_Light_COMMON_INCLUDES_
# define Traffic_Light_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Traffic_Light_COMMON_INCLUDES_ */

#include "Traffic_Light_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  uint8_T Red;                         /* '<Root>/Chart' */
  uint8_T Yellow;                      /* '<Root>/Chart' */
  uint8_T Green;                       /* '<Root>/Chart' */
} B_Traffic_Light_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  uint8_T is_active_c3_Traffic_Light;  /* '<Root>/Chart' */
  uint8_T is_c3_Traffic_Light;         /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Traffic_Light_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
} ExtY_Traffic_Light_T;

/* Real-time Model Data Structure */
struct tag_RTM_Traffic_Light_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Traffic_Light_T Traffic_Light_B;

/* Block states (auto storage) */
extern DW_Traffic_Light_T Traffic_Light_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Traffic_Light_T Traffic_Light_Y;

/* Model entry point functions */
extern void Traffic_Light_initialize(void);
extern void Traffic_Light_step(void);
extern void Traffic_Light_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Traffic_Light_T *const Traffic_Light_M;

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
 * '<Root>' : 'Traffic_Light'
 * '<S1>'   : 'Traffic_Light/Chart'
 */
#endif                                 /* RTW_HEADER_Traffic_Light_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
