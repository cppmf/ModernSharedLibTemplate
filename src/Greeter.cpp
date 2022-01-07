
#include "mlt/Greeter.h"

#include <fmt/format.h>

using namespace greeter;

Greeter::Greeter(const std::string& name)
        : _name(name) {}

std::string Greeter::greet(LanguageCode lang) const {

    std::string greet;

    switch (lang) {
        case LanguageCode::DE:
            greet = fmt::format("Hallo {}!", _name);
            break;
        case LanguageCode::ES:
            greet = fmt::format("¡Hola {}!", _name);
            break;
        case LanguageCode::FR:
            greet = fmt::format("Bonjour {}!", _name);
            break;
        case LanguageCode::EN:
        default:
            greet = fmt::format("Hello, {}!", _name);
            break;
    }

    return greet;
}
