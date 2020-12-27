#include "gtest/gtest.h"
#include <stack.hpp>

TEST(STACKINTTEST, INITIALISATION) {
   Stack<int> TestStack(10);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 10);
}

TEST(STACKINTTEST, PUSH) {
   Stack<int> TestStack(10);
   TestStack.push(20);
   TestStack.push(30);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 30);
}

TEST(STACKINTTEST, POP) {
   Stack<int> TestStack(10);
   TestStack.push(20);
   TestStack.push(30);
   TestStack.push(40);
   TestStack.push(50);

   EXPECT_EQ (TestStack.pop(), 50);
   TestStack.pop();
   EXPECT_EQ (TestStack.pop(), 30);
}

TEST(STACKINTTEST, TESTEMPTY) {
   Stack<int> TestStack(10);
   TestStack.push(20);

   TestStack.pop();
   EXPECT_EQ (TestStack.peek(), 10);
   TestStack.pop();
   EXPECT_EQ (TestStack.isEmpty(), true);
}