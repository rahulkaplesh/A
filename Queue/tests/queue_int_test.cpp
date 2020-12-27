#include "gtest/gtest.h"
#include <queue.hpp>

TEST(QUEUEINTTEST, INITIALISATION) {
   Queue<int> TestQueue(10);

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_EQ (TestQueue.peek(), 10);
}

TEST(QUEUEINTTEST, ENQUEUE) {
   Queue<int> TestQueue(10);
   TestQueue.enqueue(20);
   TestQueue.enqueue(30);

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_EQ (TestQueue.peek(), 10);
}

TEST(QUEUEINTTEST, DEQUEUE) {
   Queue<int> TestQueue(10);
   TestQueue.enqueue(20);
   TestQueue.enqueue(30);
   TestQueue.enqueue(40);
   TestQueue.enqueue(50);

   EXPECT_EQ (TestQueue.dequeue(), 10);
   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.dequeue(), 30);
}

TEST(QUEUEINTTEST, TESTEMPTY) {
   Queue<int> TestQueue(10);
   TestQueue.enqueue(20);

   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.peek(), 20);
   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.isEmpty(), true);
   EXPECT_EQ (TestQueue.dequeue(), int());
}