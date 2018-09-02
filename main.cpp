/*
 * main.cpp
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#include <iostream>
#include "testSystem.h"
#include "testers.h"

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

	return 0;
}
