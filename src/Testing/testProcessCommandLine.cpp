//! Unit test for MPAGSCipher ProcessCommandLine interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "ProcessCommandLine.hpp"
#include "CipherMode.hpp"

TEST_CASE("helpRequested flags with --help", "[cmdArgument]"){

    std::vector<std::string> arguments{"", "--help"}; // first arg is usually the command so skipped 
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(arguments, settings);

    REQUIRE(settings.helpRequested == true);
}

TEST_CASE("versionRequested flags with --version", "[cmdArgument]"){

    std::vector<std::string> arguments{"", "--version"};
    ProgramSettings settings{false, false, "", "", "", CipherMode::Encrypt};

    processCommandLine(arguments, settings);

    REQUIRE(settings.versionRequested == true);
}
