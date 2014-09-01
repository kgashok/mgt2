/*
 * bob.h
 *
 *  Created on: May 12, 2014
 *      Author: lifebalance
 */

#ifndef BOB_H_
#define BOB_H_

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Refactor so that strings are passed around between the methods

string trimBegin(string);  // defined in bob.cpp


class Bob {
public:
    static const char* response_1; // = "Fine. Be that way!";
    static const char* response_2; // = "Woah, calm down!";
    static const char* response_3; // = "Sure.";
    static const char* response_4; //  = "Whatever.";

    const char* Hey(const char* stimulus);   // the method that you use to communicate to Bob

// private:
    bool _is_silence(const char* stimulus);
    bool _is_shouting(const char* stimulus);
    bool _is_question(const char* stimulus);

};


#endif /* BOB_H_ */
