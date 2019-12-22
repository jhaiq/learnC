#include <stdio.h>
#include "src/srcTest.h"
#include "gtest/gtest.h"

TEST(Add, 负数) {
    EXPECT_EQ(Add(-1,-2), -3);
    EXPECT_GT(Add(-4,-5), -6); // 故意的
}

TEST(Add, 正数) {
    EXPECT_EQ(Add(1,2), 3);
    EXPECT_GT(Add(4,5), 6);
}

int main() {
    printf("main,Hello, World!\n");
    src_test();

    }
    return 0;
}
