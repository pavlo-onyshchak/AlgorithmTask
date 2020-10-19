#include "pch.h"
#include "../AlgorithmTask/StringParser.h"
TEST(StringParserTest, EmptyInput) {
    auto parser = StringParser();
    auto str = "";
    EXPECT_EQ(parser.countUniqueWords(str), 0);
}
TEST(StringParserTest, SimpleInput) {
    auto parser = StringParser();
    auto str = "hello hello  hel";
    EXPECT_EQ(parser.countUniqueWords(str), 2);
}

TEST(StringParserTest, InputWithLeadingAndTraillingSpaces) {
    auto parser = StringParser();
    auto str = "  hello hello hel  ";
    EXPECT_EQ(parser.countUniqueWords(str), 2);
}

TEST(StringParserTest, InputWitExtraSpaces) {
    auto parser = StringParser();
    auto str = "hello        hello              hel";
    EXPECT_EQ(parser.countUniqueWords(str), 2);
}

TEST(StringParserTest, MultipleFunctionCall) {
    auto parser = StringParser();
    auto str = "hello hello hel";
    EXPECT_EQ(parser.countUniqueWords(str), 2);
    str = "lpc bb";
    EXPECT_EQ(parser.countUniqueWords(str), 4);
    str = "hello nnn";
    EXPECT_EQ(parser.countUniqueWords(str), 5);
    str = "petro ivan";
    EXPECT_EQ(parser.countUniqueWords(str), 7);
    EXPECT_EQ(parser.countUniqueWords(str), 7);
}

TEST(StringParserTest, BigInput) {
    auto parser = StringParser();
    const auto str = "hello hello hel h alo bbb casta casta mmm input ppp input vist";
    EXPECT_EQ(parser.countUniqueWords(str), 10);
}
