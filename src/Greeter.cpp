
#include "mlt/Greeter.h"

#include <fmt/format.h>

using namespace greeter;

Greeter::Greeter(const char *name)
        : _name(name) {}

const char *Greeter::greet(LanguageCode lang) const {

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

    auto *dst = new char[strlen(greet.c_str()) + 1];
    std::strcpy(dst, greet.c_str());

    return dst;
}
