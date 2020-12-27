#include "gtest/gtest.h"
#include <queue.hpp>

TEST(QUEUECHARTEST, INITIALISATION) {
   Queue<char> TestQueue('A');

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_EQ (TestQueue.peek(), 'A');
}

TEST(QUEUECHARTEST, ENQUEUE) {
   Queue<char> TestQueue('A');
   TestQueue.enqueue('B');
   TestQueue.enqueue('C');

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_EQ (TestQueue.peek(), 'A');
}

TEST(QUEUECHARTEST, DEQUEUE) {
   Queue<char> TestQueue('A');
   TestQueue.enqueue('B');
   TestQueue.enqueue('C');
   TestQueue.enqueue('D');
   TestQueue.enqueue('E');

   EXPECT_EQ (TestQueue.dequeue(), 'A');
   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.dequeue(), 'C');
}

TEST(QUEUECHARTEST, TESTEMPTY) {
   Queue<char> TestQueue('A');
   TestQueue.enqueue('B');

   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.peek(), 'B');
   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.isEmpty(), true);
   EXPECT_EQ (TestQueue.dequeue(), char());
}