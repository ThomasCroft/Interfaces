/*
 * testers.h
 *
 *  Created on: 1 Aug 2018
 *      Author: croft
 */

#ifndef TESTERS_H_
#define TESTERS_H_

#include "testInterface.h"

//! \brief KeyboardTester implements DeviceTester_I interface
class KeyboardTester final : public DeviceTester_I
{
  public:
    KeyboardTester() = default;
    ~KeyboardTester() = default;

    bool diagnose();
    std::string getDeviceName() const;
  private:
    // Assume pressKey is implemented and handles hardware key responses.
    bool pressKey(char key_to_test);
};

//! \brief DodgyKeyboardTester implements DeviceTester_I interface, fails diagnose
class DodgyKeyboardTester final : public DeviceTester_I
{
  public:
    DodgyKeyboardTester() = default;
    ~DodgyKeyboardTester() = default;

    bool diagnose();
    std::string getDeviceName() const;
};

#endif /* TESTERS_H_ */
