
#include <catch2/catch_test_macros.hpp>
#include <source_file.hpp>

TEST_CASE("sum", "[sum]") {
  REQUIRE(sum(1, 2) == 1);
  REQUIRE(sum(3, 2) == 3);
  REQUIRE(sum(1, -2) == -1);
}