#include "gtest/gtest.h"
#include <stack.hpp>

TEST(STACKCHARTEST, INITIALISATION) {
   Stack<char> TestStack('A');

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 'A');
}

TEST(STACKCHARTEST, PUSH) {
   Stack<char> TestStack('A');
   TestStack.push('B');
   TestStack.push('C');

   EXPECT_EQ (TestStack.isEmpty(), false);
   EXPECT_EQ (TestStack.peek(), 'C');
}

TEST(STACKCHARTEST, POP) {
   Stack<char> TestStack('A');
   TestStack.push('B');
   TestStack.push('C');
   TestStack.push('D');
   TestStack.push('E');

   EXPECT_EQ (TestStack.pop(), 'E');
   TestStack.pop();
   EXPECT_EQ (TestStack.pop(), 'C');
}

TEST(STACKCHARTEST, TESTEMPTY) {
   Stack<char> TestStack('A');
   TestStack.push('B');

   TestStack.pop();
   EXPECT_FLOAT_EQ (TestStack.peek(), 'A');
   TestStack.pop();
   EXPECT_EQ (TestStack.isEmpty(), true);
}