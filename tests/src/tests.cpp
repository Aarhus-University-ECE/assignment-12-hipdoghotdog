#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Duration_class.h"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 
Duration d;
REQUIRE(d.getDuration==0);

Duration* f = new Duration(5);
REQUIRE(f->getDuration==5);