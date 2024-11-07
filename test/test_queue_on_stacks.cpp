#include "gtest.h"
#include "stack_queue.h"

TEST(QueueOnStacks, can_create_queue_on_stacks)
{
    ASSERT_NO_THROW(QueueOnStacks<int> qs);
}

TEST(QueueOnStacks, can_check_for_full)
{
    QueueOnStacks<int> qs;
    qs.push(8);
    EXPECT_FALSE(qs.isFull());
}

TEST(QueueOnStacks, can_check_for_empty)
{
    QueueOnStacks<int> qs;
    EXPECT_TRUE(qs.isEmpty());
}

TEST(QueueOnStacks, can_get_size)
{
    QueueOnStacks<int> qs;
    qs.push(10); qs.push(8); qs.push(10);
    EXPECT_EQ(3, qs.size());
}

TEST(QueueOnStacks, can_get_capacity)
{
    QueueOnStacks<int> qs;
    EXPECT_EQ(4, qs.getCapacity());
}

TEST(QueueOnStacks, can_push_element)
{
    QueueOnStacks<int> qs;
    qs.push(8); qs.push(10);
    EXPECT_EQ(8, qs.front());
}

TEST(QueueOnStacks, can_pop_element)
{
    QueueOnStacks<int> qs;
    qs.push(8); qs.push(10);
    qs.pop();
    EXPECT_EQ(1, qs.size());
}

TEST(QueueOnStacks, can_get_front)
{
    QueueOnStacks<int> qs;
    qs.push(10); qs.push(8);
    EXPECT_EQ(10, qs.front());
}

TEST(QueueOnStacks, can_get_back)
{
    QueueOnStacks<int> qs;
    qs.push(10); qs.push(8);
    EXPECT_EQ(8, qs.back());
}