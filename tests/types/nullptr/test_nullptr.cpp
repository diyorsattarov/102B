#include <common/test_common.h>

int* getnullptr() {
    return nullptr;
}

TEST(nullptrTests, nullptrComparison) {
    int* a = nullptr;
    int* b = new int;
    ASSERT_EQ(a, nullptr);
    ASSERT_NE(a, b);
    delete b;
}

TEST(nullptrTests, nullptrCheck) {
    int* a = nullptr;
    ASSERT_TRUE(a == nullptr);
    ASSERT_FALSE(a != nullptr);
}

// TEST(nullptrTests, nullptrDereference) {
//     int* a = nullptr;
//     // This should cause undefined behavior, but we are checking for crashes here
//     EXPECT_ANY_THROW(*a);
// }

TEST(nullptrTests, nullptrFunctionReturn) {
    int* result = getnullptr();
    ASSERT_EQ(result, nullptr);
}