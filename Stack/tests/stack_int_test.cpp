#include "gtest/gtest.h"
#include <stack.hpp>

TEST(STACKTEST, INITIALISATION) {
    //arrange
    //act
    //assert

   Stack<int> TestStack(10);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 10);
}

TEST(STACKTEST, PUSH) {
    //arrange
    //act
    //assert

   Stack<int> TestStack(10);
   TestStack.push(20);
   TestStack.push(30);

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 30);
}

TEST(STACKTEST, POP) {
    //arrange
    //act
    //assert

   Stack<int> TestStack(10);
   TestStack.push(20);
   TestStack.push(30);
   TestStack.push(40);
   TestStack.push(50);

   EXPECT_EQ (TestStack.pop(), 50);
   TestStack.pop();
   EXPECT_EQ (TestStack.pop(), 30);
}

TEST(STACKTEST, TESTEMPTY) {
    //arrange
    //act
    //assert

   Stack<int> TestStack(10);
   TestStack.push(20);

   TestStack.pop();
   EXPECT_EQ (TestStack.peek(), 10);
   TestStack.pop();
   EXPECT_EQ (TestStack.isEmpty(), true);
}