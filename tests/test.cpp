
#include <catch2/catch_test_macros.hpp>

int sum(int a, int b) {
  return a + b;
}

TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(sum(1, 2) == 1);
  REQUIRE(sum(3, 2) == 3);
  REQUIRE(sum(1, -2) == -1);
}