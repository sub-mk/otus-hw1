#include "gtest/gtest.h"

#include "lib.h"

class LibTest : public::testing::Test {};

TEST_F(LibTest, PositiveLibVersion) {
    ASSERT_TRUE (version() > 0);
}
