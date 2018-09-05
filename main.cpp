/*
 * main.cpp
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#include <iostream>

#include "DeviceTesters.h"
#include "TestSystem.h"

/*!
 * Main - tests the class testSystem
 */
int main()
{
  KeyboardTester keyboardTester;
  TestSystem testSystem;

  //First test passes NULL
  testSystem.addDeviceTester(NULL);

  // Second test just runs keyboard tester - success
  testSystem.addDeviceTester(&keyboardTester);
  std::cout << testSystem.run() << std::endl;

  DodgyKeyboardTester dodgyKeyboardTester;

  // Third test runs both keyboard and dodgy keyboard testers - failure
  testSystem.addDeviceTester(&dodgyKeyboardTester);
  std::cout << testSystem.run() << std::endl;

  TestSystem testSystemInitialisationList {&keyboardTester, &dodgyKeyboardTester};

  std::cout << "Test using initialisation list constructor of TestSystem" << std::endl;
  std::cout << testSystemInitialisationList.run() << std::endl;

  return 0;
}
