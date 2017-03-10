#define CATCH_CONFIG_MAIN
#include "Tester_Catch.h"

TEST_CASE( "Should Fail!", "[fail]" ){
    CHECK(1 == 2);
}
