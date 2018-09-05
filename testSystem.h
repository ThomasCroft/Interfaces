/*
 * testSystem.h
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#ifndef TESTSYSTEM_H_
#define TESTSYSTEM_H_

#include <list>
#include "testInterface.h"

/*!
 * TestSystem takes a list of testers and tests each.
 *
 * Add deviceTesters with addDeviceTester()
 *
 * Should probably be pointers or references to DeviceTesters to avoid copy constructing
 */
class TestSystem
{
public:
	TestSystem() = default;
	~TestSystem() = default;

	void addDeviceTester(DeviceTester_I *deviceTester_p);
	// Run the tests and return a message indicating success or failure.
	std::string run();
private:
	typedef std::list<DeviceTester_I *> DeviceList;
	typedef DeviceList::iterator DeviceListIterator;
	DeviceList deviceList;
};



#endif /* TESTSYSTEM_H_ */
