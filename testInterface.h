/*
 * testInterface.h
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#ifndef TESTINTERFACE_H_
#define TESTINTERFACE_H_

#include <string>

//! \brief Interface for a class which tests devices
class DeviceTester_I
{
public:
	DeviceTester_I() {};
	virtual ~DeviceTester_I() {};

	virtual bool diagnose() = 0;
	virtual std::string getDeviceName() = 0;
};

#endif /* TESTINTERFACE_H_ */
