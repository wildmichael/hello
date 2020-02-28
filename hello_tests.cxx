#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "hello.hh"

TEST_CASE( "hello::greeting returns greeting", "[hello::greeting]" ) {
    REQUIRE( hello::greeting("World") == "Hello, World!" );
}
