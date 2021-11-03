#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <cstddef>
#include <string>
#include <vector>

class CaesarCipher{
    public:
        // Create a new CaesarCipher instance using the given key
        explicit CaesarCipher(const std::size_t key);

        // Create a new CaesarCipher instance converting the input key string into a numerical key
        explicit CaesarCipher(const std::string& key);

        // Add member function to (en/de)crypt a string
        std::string applyCipher(const std::string& inputText, const bool encrypt) const;

    private:

        std::size_t key_ {0};
        const std::vector<char> alphabet_ = {
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        const std::size_t alphabetSize_{alphabet_.size()};
};

#endif    // MPAGSCIPHER_CAESARCIPHER_HPP
