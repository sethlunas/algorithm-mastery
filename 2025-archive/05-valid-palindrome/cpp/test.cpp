#include "solution.hpp"
#include <iostream>
#include <vector>
#include <tuple>

void test() {

    std::cout << std::boolalpha;

    std::vector<std::tuple<std::string, bool>> cases = {
        {"A man, a plan, a canal: Panama", true},
        {"race a car", false},
        {" ", true}
    };

    int passed = 0;
    
    for (std::size_t i = 0; i < cases.size(); ++i) {
        const auto& [str, expected] = cases[i];
        bool got = valid_palindrome(str);
        bool ok = (got == expected);
        std::cout << "Input: " << str << "\n";
        std::cout << "Got: " << got << "\n";
        std::cout << "Expected: " << expected << "\n"; 
        if (ok) {
            passed++;
        } 
    }
    
    std::cout << passed << "/" << cases.size() << " cases passed.\n";
}

int main() {
    test();
    return 0;
}