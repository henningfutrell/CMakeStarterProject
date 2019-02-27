#include "gtest/gtest.h"
#include "Empty.h"

TEST(StarterTests, DoesWork) {
    Empty empty;
    empty.doesThing();
    ASSERT_TRUE(true);
}
