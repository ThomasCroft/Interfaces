/*
 * testers.cpp
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#include "testers.h"

/******************************************************************************
* KeyboardTester
******************************************************************************/

/*!
 * \brief implements diagnose for keyboard. Unchanged code.
 *
 * \return true if functioning, false otherwise
 */
bool KeyboardTester::diagnose()
{
	std::string keys_to_test = "ABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890";
	bool is_functioning = true;
	for (size_t pos = 0; pos < keys_to_test.size(); ++pos)
	{
		if (!pressKey(keys_to_test[pos]))
		{
			is_functioning = false;
			break;
		}
	}
	return is_functioning;
}

/*!
 * \brief implements getDeviceName
 *
 * \return the string "Keyboard"
 */
std::string KeyboardTester::getDeviceName()
{
	return "Keyboard";
}

/*!
 * \brief stub function
 *
 * \param[in] key_to_test the key to test
 *
 * \return true always
 */
bool KeyboardTester::pressKey(char key_to_test)
{
	return true;
}

/******************************************************************************
* DodgyKeyboardTester
******************************************************************************/

/*!
 * \brief implements diagnose for keyboard. always fails.
 *
 * \return false always
 */
bool DodgyKeyboardTester::diagnose()
{
	return false;
}

/*!
 * \brief implements getDeviceName
 *
 * \return the string "Keyboard"
 */
std::string DodgyKeyboardTester::getDeviceName()
{
	return "Dodgy keyboard";
}


