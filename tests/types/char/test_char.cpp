#include <common/test_common.h>

class charTests : public ::testing::Test {
protected:
    void SetUp() override {
        // Initialize variables for char, char16_t, char32_t, and wchar_t
        charValue = 'A';
        char16Value = u'B';
        char32Value = U'C';
        wideCharValue = L'D';
    }

    void TearDown() override {}

    // Variables for char types
    char charValue;
    char16_t char16Value;
    char32_t char32Value;
    wchar_t wideCharValue;
};

TEST_F(charTests, charComparison) {
    // Testing equality and inequality for char types
    ASSERT_EQ(charValue, 'A');
    ASSERT_NE(char16Value, u'A');
    ASSERT_EQ(char32Value, U'C');
    ASSERT_NE(wideCharValue, L'E');
}

TEST_F(charTests, charCheck) {
    // Validating char variables against specific values
    ASSERT_EQ(charValue, 'A');
    ASSERT_NE(char16Value, u'A');
    ASSERT_EQ(true, 1);
    ASSERT_EQ(false, 0);
}

TEST_F(charTests, charOperations) {
    // Testing various operations on char types
    ASSERT_TRUE(charValue == 'A');
    ASSERT_FALSE(char16Value == u'B');
    ASSERT_TRUE(char32Value != U'D');
    ASSERT_FALSE(wideCharValue != L'D');
}

TEST_F(charTests, charExpressions) {
    // Testing char expressions
    ASSERT_TRUE((charValue == 'A') && (char16Value == u'B'));
    ASSERT_FALSE((charValue == 'A') && (char32Value == U'D'));
}

TEST_F(charTests, charCombination) {
    // Testing a combination of char expressions
    ASSERT_EQ((charValue == 'A') || (char32Value != U'D'), true);
}
