#include "gtest/gtest.h"
#include <stack.hpp>

TEST(STACKFLOATTEST, INITIALISATION) {
   Stack<float> TestStack(10.1);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_FLOAT_EQ (TestStack.peek(), 10.1);
}

TEST(STACKFLOATTEST, PUSH) {
   Stack<float> TestStack(10.1);
   TestStack.push(20.1);
   TestStack.push(30.1);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_FLOAT_EQ (TestStack.peek(), 30.1);
}

TEST(STACKFLOATTEST, POP) {
   Stack<float> TestStack(10.1);
   TestStack.push(20.1);
   TestStack.push(30.1);
   TestStack.push(40.1);
   TestStack.push(50.1);

   EXPECT_FLOAT_EQ (TestStack.pop(), 50.1);
   TestStack.pop();
   EXPECT_FLOAT_EQ (TestStack.pop(), 30.1);
}

TEST(STACKFLOATTEST, TESTEMPTY) {
   Stack<float> TestStack(10.1);
   TestStack.push(20.1);

   TestStack.pop();
   EXPECT_FLOAT_EQ (TestStack.peek(), 10.1);
   TestStack.pop();
   EXPECT_EQ (TestStack.isEmpty(), true);
}