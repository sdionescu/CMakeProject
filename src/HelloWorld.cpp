#include "HelloWorld.hpp"

constexpr std::string_view TEXT = "Hello, World!";

std::string_view HelloWorld::message() const
{
	return TEXT;
}
