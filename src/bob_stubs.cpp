/*
 * bob_stubs.cpp
 *
 *  Created on: May 12, 2014
 *      Author: lifebalance
 */

#include "bob.h"

/*
 *  The static variables that belong to the class
 *  need to be initialized before they can be used.
 *
 */
const char* Bob::response_1 = "Fine. Be that way!";
const char* Bob::response_2 = "Woah, calm down!";
const char* Bob::response_3 = "Sure.";
const char* Bob::response_4 = "Whatever.";

const char* Bob::Hey(const char* stimulus)
{
	return NULL;
	// return Bob::response_4;  // the default response
}

bool Bob::_is_silence(const char* stimulus)
{
	return false;
}

bool Bob::_is_shouting(const char* stimulus)
{
	return false;
}

bool Bob::_is_question(const char* stimulus)
{
	return false;
}
