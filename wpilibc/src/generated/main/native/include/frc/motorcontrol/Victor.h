// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// THIS FILE WAS AUTO-GENERATED BY ./wpilibc/generate_pwm_motor_controllers.py. DO NOT MODIFY

#pragma once

#include "frc/motorcontrol/PWMMotorController.h"

namespace frc {

/**
 * Vex Robotics Victor 888 Motor Controller with PWM control.
 *
 * Note that the Victor 888 uses the following bounds for PWM values. These
 * values should work reasonably well for most controllers, but if users
 * experience issues such as asymmetric behavior around the deadband or
 * inability to saturate the controller in either direction, calibration is
 * recommended. The calibration procedure can be found in the Victor 888 User
 * Manual available from Vex Robotics.
 *
 * \li 2.027ms = full "forward"
 * \li 1.525ms = the "high end" of the deadband range
 * \li 1.507ms = center of the deadband range (off)
 * \li 1.490ms = the "low end" of the deadband range
 * \li 1.026ms = full "reverse"
 */
class Victor : public PWMMotorController {
 public:
  /**
   * Constructor for a Victor 888 connected via PWM.
   *
   * @param channel The PWM channel that the Victor 888 is attached to. 0-9 are
   *                on-board, 10-19 are on the MXP port
   */
  explicit Victor(int channel);

  Victor(Victor&&) = default;
  Victor& operator=(Victor&&) = default;
};

}  // namespace frc