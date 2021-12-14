
#include <catch2/catch.hpp>

#include <cstring>

#include <mlt/Greeter.h>

TEST_CASE("Greeter") {

    using namespace greeter;

    Greeter greeter("Tests");

    REQUIRE_THAT(greeter.greet(LanguageCode::EN), Catch::Matchers::Equals("Hello, Tests!"));
    REQUIRE_THAT(greeter.greet(LanguageCode::DE), Catch::Matchers::Equals("Hallo Tests!"));
    REQUIRE_THAT(greeter.greet(LanguageCode::ES), Catch::Matchers::Equals("¡Hola Tests!"));
    REQUIRE_THAT(greeter.greet(LanguageCode::FR), Catch::Matchers::Equals("Bonjour Tests!"));
}
