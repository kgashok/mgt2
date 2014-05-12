/*
 * bob_test.cpp
 *
 *  Created on: May 12, 2014
 *      Author: Advik
 */

#include "gtest/gtest.h"
#include "bob.h"

class BobTest : public ::testing::Test {
protected:
	Bob b;
};


TEST_F(BobTest, BobPass)
{
	ASSERT_TRUE(true);
}

TEST_F(BobTest, SilenceTest)
{
	ASSERT_EQ (true, b._is_silence("    "));
	ASSERT_EQ (true, b._is_silence("    \t\n\t"));
	ASSERT_EQ (true, b._is_silence(""));
}

TEST_F(BobTest, HelloWorldTest)
{
	ASSERT_TRUE (b._is_shouting("HELLO WORLD!"));
	ASSERT_FALSE (b._is_shouting("Hello World."));
	ASSERT_EQ (Bob::response_4, b.Hey("Hello World!"));
}

TEST_F(BobTest, ShoutingTestPass)
{
	ASSERT_TRUE (b._is_shouting("WHAT THE HECK ARE YOU DOING?"));
	ASSERT_TRUE (b._is_shouting("1 2 3 GO!"));
	ASSERT_FALSE (b._is_shouting("Stop right there."));
}


TEST_F(BobTest, ShoutingTestFail)
{
	ASSERT_FALSE (b._is_shouting("Stop right there."));
}

TEST_F(BobTest, QuestionTestPass)
{
	ASSERT_TRUE (b._is_question("Do you like C++?"));
}

TEST_F(BobTest, StateSomething)
{
	ASSERT_EQ (Bob::response_4, b.Hey("Tom-ay-to, tom-aaah-to."));

}

TEST_F(BobTest, AskNumericQuestion)
{
	ASSERT_EQ (Bob::response_3, b.Hey("You are, what, like 16?"));

}

TEST_F(BobTest, AcronymSpeech)
{
	ASSERT_EQ (Bob::response_4, b.Hey("It is ok if you don't want to go to the RTO."));

}

TEST_F(BobTest, ZombieTalk)
{
	ASSERT_EQ (Bob::response_2, b.Hey("'ZOMG THE %^*@#$(*^ ZOMBIES ARE COMING!!11!!1!'"));

}

TEST_F(BobTest, TestPrattling)
{
	ASSERT_EQ (Bob::response_3, b.Hey("Wait! Hang on. Are you going to be OK?"));

}
