/*
 * testInterface.h
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#ifndef DEVICETESTERINTERFACE_H_
#define DEVICETESTERINTERFACE_H_

#include <string>

//! \brief Interface for a class which tests devices
class DeviceTester_I
{
  public:
    DeviceTester_I() = default;
    virtual ~DeviceTester_I() = default;

    virtual bool diagnose() = 0;
    virtual std::string getDeviceName() const = 0;
};

#endif /* DEVICETESTERINTERFACE_H_ */
