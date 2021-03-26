/*!
 *  @file Adafruit_ISM330DLC.h
 *
 * 	I2C Driver for the Adafruit ISM330DHCX 6-DoF Accelerometer and Gyroscope
 *library
 *
 * 	This is a library for the Adafruit ISM330DHCX breakout:
 * 	https://www.adafruit.com/products/4480
 *
 * 	Adafruit invests time and resources providing this open source code,
 *  please support Adafruit and open-source hardware by purchasing products from
 * 	Adafruit!
 *
 *
 *	BSD license (see license.txt)
 */

#ifndef _ADAFRUIT_ISM330DLC_H
#define _ADAFRUIT_ISM330DLC_H

#include "Adafruit_LSM6DSOX.h"

#define ISM330DLC_CHIP_ID 0x6A ///< ISM330DLC default device id from WHOAMI

/*!
 *    @brief  Class that stores state and functions for interacting with
 *            the ISM330DHCX I2C Digital Potentiometer
 */
class Adafruit_ISM330DLC : public Adafruit_LSM6DSOX {
public:
  Adafruit_ISM330DLC();
  ~Adafruit_ISM330DLC(){};

private:
  bool _init(int32_t sensor_id);
};

#endif
