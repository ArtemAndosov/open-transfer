#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include "main.cpp"

TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(sum(1, 2) == 1);
  REQUIRE(sum(3, 2) == 3);
  REQUIRE(sum(1, -2) == -1);
}