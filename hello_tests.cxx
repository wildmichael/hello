#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "hello.hh"

TEST_CASE( "hello::greet returns greeting", "[hello::greet]" ) {
    REQUIRE( hello::greet("World") == "Hello, World!" );
}
