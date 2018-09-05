/*
 * testSystem.cpp
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#include "TestSystem.h"

#include <iostream>

/*!
 * Construct TestSystem using an initializer_list
 */
TestSystem::TestSystem(std::initializer_list<DeviceTester_I *> deviceList_in) : deviceList(deviceList_in)
{}

/*!
 * Append device tester to deviceTester list
 *
 * \param[in] deviceTester reference to a device tester
 *
 * \return None
 */
void TestSystem::addDeviceTester(DeviceTester_I *deviceTester_p)
{
  if(deviceTester_p == NULL)
  {
    std::cout << "NULL pointer passed to addDeviceTester()" << std::endl;
    return;
  }
  deviceList.push_back(deviceTester_p);
}

/*!
 * Iterate through all devices in device list and call diagnose, returning the appropriate message
 * Currently exits at first failure.
 *
 * \return string containing success or failure message with failed device name
 */
std::string TestSystem::run()
{
  if(deviceList.empty())
  {
    return "No tests run, device list is empty";
  }
  std::string test_message = "success";

  for(DeviceListIterator dl_it = deviceList.begin(); dl_it != deviceList.end(); ++dl_it)
  {
    if((*dl_it)->diagnose() == false)
    {
      std::string deviceName = (*dl_it)->getDeviceName();
      test_message = deviceName + " testing failed";
      break;
    }
  }

  return test_message;
}


