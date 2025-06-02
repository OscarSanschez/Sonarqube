#include <gtest/gtest.h>
#include "mult2.h"

TEST(Multtest, HandlesPositiveInput)
{
int result = multipy(9, 3);

EXPECT_EQ(result, 27);
}

TEST(Multtest, Multiply_by_0)
{
int result = multiply(9, 0);

EXPECT_EQ(result, 0);
}
