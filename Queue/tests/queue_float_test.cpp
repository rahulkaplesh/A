#include "gtest/gtest.h"
#include <queue.hpp>

TEST(QUEUEFLOATTEST, INITIALISATION) {
   Queue<float> TestQueue(10.1);

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_FLOAT_EQ (TestQueue.peek(), 10.1);
}

TEST(QUEUEFLOATTEST, ENQUEUE) {
   Queue<float> TestQueue(10.1);
   TestQueue.enqueue(20.1);
   TestQueue.enqueue(30.1);

   EXPECT_EQ (TestQueue.isEmpty(), false);
   EXPECT_FLOAT_EQ (TestQueue.peek(), 10.1);
}

TEST(QUEUEFLOATTEST, DEQUEUE) {
   Queue<float> TestQueue(10.1);
   TestQueue.enqueue(20.1);
   TestQueue.enqueue(30.1);
   TestQueue.enqueue(40.1);
   TestQueue.enqueue(50.1);

   EXPECT_FLOAT_EQ (TestQueue.dequeue(), 10.1);
   TestQueue.dequeue();
   EXPECT_FLOAT_EQ (TestQueue.dequeue(), 30.1);
}

TEST(QUEUEFLOATTEST, TESTEMPTY) {
   Queue<float> TestQueue(10.1);
   TestQueue.enqueue(20.1);

   TestQueue.dequeue();
   EXPECT_FLOAT_EQ (TestQueue.peek(), 20.1);
   TestQueue.dequeue();
   EXPECT_EQ (TestQueue.isEmpty(), true);
   EXPECT_FLOAT_EQ (TestQueue.dequeue(), float());
}