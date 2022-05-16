#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "FuzzyNumber.hpp"
TEST_CASE( "Arguments initialized") {
    FuzzyNumber testing1;
    testing1.set_x(6.99);
    testing1.set_l(223);
    testing1.set_r(-5);
    REQUIRE( testing1.get_x() == 6.99);
    REQUIRE( testing1.get_l() == 223);
    REQUIRE( testing1.get_r() == -5);
}
