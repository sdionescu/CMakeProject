#include <string_view>
#include <gtest/gtest.h>
#include "HelloWorld.hpp"

constexpr std::string_view TEXT = "Hello, World!";

class HelloWorldSuite : public ::testing::Test
{
protected:
    HelloWorld m_sut{};
};

TEST_F(HelloWorldSuite, test_message)
{
    EXPECT_EQ(TEXT, m_sut.message()) << TEXT << " != " << m_sut.message();
}
