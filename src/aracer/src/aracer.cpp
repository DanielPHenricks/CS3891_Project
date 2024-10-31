/*
 * aracer.cpp
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

#include "aracer.h"
#include "rtwtypes.h"
#include "aracer_types.h"
#include "aracer_private.h"
#include <string.h>

/* Block signals (default storage) */
B_aracer_T aracer_B;

/* Block states (default storage) */
DW_aracer_T aracer_DW;

/* Real-time model */
RT_MODEL_aracer_T aracer_M_ = RT_MODEL_aracer_T();
RT_MODEL_aracer_T *const aracer_M = &aracer_M_;

/*
 * System initialize for enable system:
 *    '<S6>/Enabled Subsystem'
 *    '<S7>/Enabled Subsystem'
 */
void aracer_EnabledSubsystem_Init(B_EnabledSubsystem_aracer_T *localB)
{
  /* SystemInitialize for SignalConversion generated from: '<S8>/In1' */
  memset(&localB->In1, 0, sizeof(SL_Bus_aracer_std_msgs_Float64));
}

/*
 * Output and update for enable system:
 *    '<S6>/Enabled Subsystem'
 *    '<S7>/Enabled Subsystem'
 */
void aracer_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_aracer_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_aracer_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S8>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
}

/* Model step function */
void aracer_step(void)
{
  SL_Bus_aracer_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_aracer_std_msgs_Float64 tmp;
  real_T rtb_TSamp;
  real_T rtb_TSamp_e;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S7>/SourceBlock' */
  b_varargout_1 = Sub_aracer_8.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S7>/SourceBlock' */
  aracer_EnabledSubsystem(b_varargout_1, &tmp, &aracer_B.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_aracer_7.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  aracer_EnabledSubsystem(b_varargout_1, &tmp, &aracer_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* SampleTimeMath: '<S2>/TSamp'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  rtb_TSamp = aracer_B.EnabledSubsystem_f.In1.Data * 100.0;

  /* SampleTimeMath: '<S3>/TSamp'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  rtb_TSamp_e = aracer_B.EnabledSubsystem.In1.Data * 100.0;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/tau'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Sum: '<S2>/Diff'
   *  Sum: '<S3>/Diff'
   *  UnitDelay: '<S2>/UD'
   *  UnitDelay: '<S3>/UD'
   */
  rtb_BusAssignment.Data = ((rtb_TSamp - aracer_DW.UD_DSTATE) - (rtb_TSamp_e -
    aracer_DW.UD_DSTATE_h) * 3.0) + (aracer_B.EnabledSubsystem_f.In1.Data - 3.0 *
    aracer_B.EnabledSubsystem.In1.Data);

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S5>/SinkBlock' */
  Pub_aracer_6.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */

  /* Update for UnitDelay: '<S2>/UD' */
  aracer_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S3>/UD' */
  aracer_DW.UD_DSTATE_h = rtb_TSamp_e;
}

/* Model initialize function */
void aracer_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&aracer_B)), 0,
                sizeof(B_aracer_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&aracer_DW), 0,
                sizeof(DW_aracer_T));

  {
    char_T b_zeroDelimTopic[18];
    char_T b_zeroDelimTopic_0[14];
    static const char_T b_zeroDelimTopic_1[18] = "/egocar/lead_dist";
    static const char_T b_zeroDelimTopic_2[14] = "/egocar/vel_x";
    static const char_T b_zeroDelimTopic_3[18] = "/egocar/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S7>/SourceBlock' */
    aracer_DW.obj_e.matlabCodegenIsDeleted = false;
    aracer_DW.objisempty = true;
    aracer_DW.obj_e.isInitialized = 1;
    for (int32_T i = 0; i < 18; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_aracer_8.createSubscriber(&b_zeroDelimTopic[0], 1);
    aracer_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    aracer_DW.obj_n.matlabCodegenIsDeleted = false;
    aracer_DW.objisempty_l = true;
    aracer_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 14; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_aracer_7.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    aracer_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S5>/SinkBlock' */
    aracer_DW.obj.matlabCodegenIsDeleted = false;
    aracer_DW.objisempty_a = true;
    aracer_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 18; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Pub_aracer_6.createPublisher(&b_zeroDelimTopic[0], 1);
    aracer_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* InitializeConditions for UnitDelay: '<S2>/UD' */
  aracer_DW.UD_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S3>/UD' */
  aracer_DW.UD_DSTATE_h = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  aracer_EnabledSubsystem_Init(&aracer_B.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  aracer_EnabledSubsystem_Init(&aracer_B.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */
}

/* Model terminate function */
void aracer_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S7>/SourceBlock' */
  if (!aracer_DW.obj_e.matlabCodegenIsDeleted) {
    aracer_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!aracer_DW.obj_n.matlabCodegenIsDeleted) {
    aracer_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S5>/SinkBlock' */
  if (!aracer_DW.obj.matlabCodegenIsDeleted) {
    aracer_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
