/*
 * File: Subsystem1.h
 *
 * Code generated for Simulink model 'Subsystem1'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Aug 15 21:57:04 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-R
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Subsystem1_h_
#define RTW_HEADER_Subsystem1_h_
#ifndef Subsystem1_COMMON_INCLUDES_
#define Subsystem1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Subsystem1_COMMON_INCLUDES_ */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTransferFcn_states[2];/* '<S1>/Discrete Transfer Fcn' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T CYKA;                         /* '<Root>/CYKA\' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Subsystem1_initialize(void);
extern void Subsystem1_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('generator/Subsystem1')    - opens subsystem generator/Subsystem1
 * hilite_system('generator/Subsystem1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'generator'
 * '<S1>'   : 'generator/Subsystem1'
 */
#endif                                 /* RTW_HEADER_Subsystem1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
