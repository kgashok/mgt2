/*
 * myClass.cpp
 *
 *  Created on: May 11, 2014
 *      Author: lifebalance
 */

#include "gtest/gtest.h"
#include "mClass.h"

class myClassTest : public ::testing::Test {
protected:
	mClass m;
};


TEST_F(myClassTest, failingTest)
{
	ASSERT_TRUE(true);
}

TEST_F(myClassTest, mClassReturnZero)
{
	ASSERT_EQ(0, m.GetZero());
}

TEST_F(myClassTest, mClassReturnOne)
{
	ASSERT_EQ(1, m.GetOne());
}

TEST_F(myClassTest, mClassAdding)
{
	ASSERT_EQ(4, m.AddTwo(2, 2));
	ASSERT_EQ(2, m.AddTwo(0, 2));
}

/*
 * The following two tests will fail.
 * Unless you make the necessary modifications which are quite
 * straightforward
 */

#include <climits>

TEST_F(myClassTest, mClassAddBoundary1)
{
	ASSERT_EQ(0, m.AddTwo(INT_MAX, 1));

}

TEST_F(myClassTest, mClassAddBoundary2)
{
	ASSERT_EQ(0, m.AddTwo(LONG_MAX, 1));
}

