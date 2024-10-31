/*
 * aracer.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "aracer".
 *
 * Model version              : 1.4
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Thu Oct 31 07:59:37 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef aracer_h_
#define aracer_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "aracer_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S6>/Enabled Subsystem' */
struct B_EnabledSubsystem_aracer_T {
  SL_Bus_aracer_std_msgs_Float64 In1;  /* '<S8>/In1' */
};

/* Block signals (default storage) */
struct B_aracer_T {
  B_EnabledSubsystem_aracer_T EnabledSubsystem_f;/* '<S7>/Enabled Subsystem' */
  B_EnabledSubsystem_aracer_T EnabledSubsystem;/* '<S6>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_aracer_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S5>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_e;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S6>/SourceBlock' */
  real_T UD_DSTATE;                    /* '<S2>/UD' */
  real_T UD_DSTATE_h;                  /* '<S3>/UD' */
  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S6>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S5>/SinkBlock' */
};

/* Real-time Model Data Structure */
struct tag_RTM_aracer_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_aracer_T aracer_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_aracer_T aracer_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void aracer_initialize(void);
  extern void aracer_step(void);
  extern void aracer_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_aracer_T *const aracer_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/Data Type Duplicate' : Unused code path elimination
 */

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
 * '<Root>' : 'aracer'
 * '<S1>'   : 'aracer/Blank Message'
 * '<S2>'   : 'aracer/Discrete Derivative'
 * '<S3>'   : 'aracer/Discrete Derivative1'
 * '<S4>'   : 'aracer/MATLAB Function'
 * '<S5>'   : 'aracer/Publish'
 * '<S6>'   : 'aracer/Subscribe'
 * '<S7>'   : 'aracer/Subscribe1'
 * '<S8>'   : 'aracer/Subscribe/Enabled Subsystem'
 * '<S9>'   : 'aracer/Subscribe1/Enabled Subsystem'
 */
#endif                                 /* aracer_h_ */
