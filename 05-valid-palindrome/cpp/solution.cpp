#include "solution.hpp"
#include <cctype>

bool valid_palindrome(const std::string& s) {

    int i = 0, j = static_cast<int>(s.size()) - 1;
    
    while (i < j) {

        // If s[i] is not alphanumeric, skip & move forward one char
        while ((i < j) && !(std::isalnum(static_cast<unsigned char>(s[i])))) {
            i++;
        }
        // If s[j] is not alphanumeric, skip & move back one char
        while ((i < j) && !(std::isalnum(static_cast<unsigned char>(s[j])))) {
            j--;
        }

        if (std::tolower(s[i]) != std::tolower(s[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;

}