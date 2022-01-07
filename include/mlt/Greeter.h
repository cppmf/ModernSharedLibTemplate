#pragma once

#include "mlt/export.h"

// Required Inclusions
#include <string>


namespace greeter {

/**  Language codes to be used with the Greeter class */
    enum class LanguageCode {
        EN, DE, ES, FR
    };

/**
 * @brief A class for saying hello in multiple languages
 */
    class Greeter {
    public:
        /**
         * @brief Creates a new greeter
         * @param name the name to greet
         */
        MLT_EXPORT explicit Greeter(const std::string& name);

    public:
        /**
         * @brief Creates a localized string containing the greeting
         * @param lang the language to greet in
         * @return a string containing the greeting
         */
        MLT_EXPORT std::string greet(LanguageCode lang = LanguageCode::EN) const;

    private:
        const std::string _name;
    };

} // namespace greeter
