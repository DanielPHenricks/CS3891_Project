/*
 * aracer_private.h
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

#ifndef aracer_private_h_
#define aracer_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "aracer.h"
#include "aracer_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void aracer_EnabledSubsystem_Init(B_EnabledSubsystem_aracer_T *localB);
extern void aracer_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_aracer_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_aracer_T *localB);

#endif                                 /* aracer_private_h_ */
