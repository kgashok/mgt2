/*
 * main.cpp
 *
 *  Created on: May 11, 2014
 *      Author: Advik
 */


#include "gtest/gtest.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello World!" << endl;

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}

