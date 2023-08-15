/*
 * File: Subsystem1.c
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

#include "Subsystem1.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void Subsystem1_step(void)
{
  real_T DiscreteTransferFcn_tmp;

  /* DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' incorporates:
   *  Inport: '<Root>/In1'
   */
  DiscreteTransferFcn_tmp = (rtU.In1 - -654.0 * rtDW.DiscreteTransferFcn_states
    [0]) - 321.0 * rtDW.DiscreteTransferFcn_states[1];

  /* Outport: '<Root>/CYKA\' incorporates:
   *  DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn'
   */
  rtY.CYKA = (123.0 * DiscreteTransferFcn_tmp + 456.0 *
              rtDW.DiscreteTransferFcn_states[0]) + 789.0 *
    rtDW.DiscreteTransferFcn_states[1];

  /* Update for DiscreteTransferFcn: '<S1>/Discrete Transfer Fcn' */
  rtDW.DiscreteTransferFcn_states[1] = rtDW.DiscreteTransferFcn_states[0];
  rtDW.DiscreteTransferFcn_states[0] = DiscreteTransferFcn_tmp;
}

/* Model initialize function */
void Subsystem1_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
