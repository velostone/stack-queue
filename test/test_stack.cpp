#include "gtest.h"
#include "stack_queue.h"

TEST(Stack, can_create_stack)
{
    ASSERT_NO_THROW(Stack<int> s);
}

TEST(Stack, can_check_for_full)
{
    Stack<int> s;
    s.push(8); s.push(8);
    EXPECT_TRUE(s.isFull());
}

TEST(Stack, can_check_for_empty)
{
    Stack<int> s;
    EXPECT_TRUE(s.isEmpty());
}

TEST(Stack, can_get_size)
{
    Stack<int> s;
    s.push(8); s.push(8); s.push(8);
    EXPECT_EQ(3, s.size());
}

TEST(Stack, can_get_capacity)
{
    Stack<int> s;
    EXPECT_EQ(2, s.getCapacity());
}

TEST(Stack, can_push_element)
{
    Stack<int> s;
    s.push(8); s.push(10);
    EXPECT_EQ(10, s.top());
}

TEST(Stack, can_pop_element)
{
    Stack<int> s;
    s.push(8); s.push(10); s.push(8);
    s.pop();
    EXPECT_EQ(2, s.size());
}

TEST(Stack, throws_when_pop_empty_stack)
{
    Stack<int> s;
    ASSERT_ANY_THROW(s.pop());
}

TEST(Stack, can_get_top_element)
{
    Stack<int> s;
    s.push(10); s.push(8);
    EXPECT_EQ(8, s.top());
}

TEST(Stack, can_resize_stack)
{
    Stack<int> s;
    s.resize(5);
    EXPECT_EQ(5 * 2 + 2, s.getCapacity());
}

TEST(Stack, push_uses_resize_correctly)
{
    Stack<int> s;
    s.push(8); s.push(8); s.push(8); // одна перепаковка
    EXPECT_EQ(3 * 2 + 2, s.getCapacity());
}