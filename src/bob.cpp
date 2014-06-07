/*
 * bob.cpp
 *
 *  Created on: May 12, 2014
 *      Author: lifebalance
 */

#include "bob.h"

const char* Bob::response_1 = "Fine. Be that way!";
const char* Bob::response_2 = "Woah, calm down!";
const char* Bob::response_3 = "Sure.";
const char* Bob::response_4 = "Whatever.";

const char* Bob::Hey(const char* stimulus)
{

	if (_is_silence(stimulus))
		return response_1;
	else if (_is_shouting(stimulus))
		return response_2;
	else if (_is_question(stimulus))
		return response_3;
	else
		return response_4;   // default
}

bool Bob::_is_silence(const char* stimulus)
{
	string s(stimulus);
	s = trimBegin(stimulus);
	return (s.length() == 0);
}

bool Bob::_is_shouting(const char* stimulus)
{
	std::string s(stimulus);  // copy into a string
	std::string out(s);       // make another copy
	
	std::transform(s.begin(), s.end(), 
		out.begin(), 
		(int(*)(int))std::toupper);  // use toupper()

	return (s.compare(out) == 0);
}

bool Bob::_is_question(const char* stimulus)
{
	string s(stimulus);
	char last_char = stimulus[s.length()-1];
	return (last_char == '?');
}

// Helper function for the _is_silence method
string trimBegin(string str)
{
	size_t i = 0;
	while(isspace(str[i++]));
	return str.erase(0, i);
}
