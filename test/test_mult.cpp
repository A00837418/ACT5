#include <gtest/gtest.h>
#include "mult.h"


TEST(MultTest, PositiveNumbers) {
    EXPECT_EQ(mult(2, 3), 6);
    EXPECT_EQ(mult(5, 4), 20);
}
