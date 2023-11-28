#include <common/test_common.h>

class boolTests : public ::testing::Test {
protected:
    void SetUp() override {
        a = true;
        b = true;
        c = false;
    }
    void TearDown() override {}

    bool a;
    bool b;
    bool c;
};

TEST_F(boolTests, boolComparison) {
    ASSERT_EQ(a, b);
    ASSERT_NE(a || b, c);
}

TEST_F(boolTests, boolCheck) {
    ASSERT_EQ(a, true);
    ASSERT_NE(a, false);
    ASSERT_EQ(true, 1);
    ASSERT_EQ(false, 0);
}

TEST_F(boolTests, boolOperations) {

    ASSERT_TRUE(a && b);
    ASSERT_FALSE(a && c);
    ASSERT_TRUE(a || c);
    ASSERT_FALSE(!a);
    ASSERT_TRUE(!c);
}

TEST_F(boolTests, boolExpressions) {
    ASSERT_TRUE((a && b) || c);
    ASSERT_FALSE((a && b) && c);
}

TEST_F(boolTests, boolCombination) {
    ASSERT_EQ(a || (b && !c), true);
}