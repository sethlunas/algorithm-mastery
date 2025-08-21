#include "solution.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

void run_tests() {
    vector<tuple<string, string>> tests = {
        {"listen", "silent"},
        {"hello", "olleh"},
        {"anagram", "nagaram"},
        {"a", "aa"},
        {"rat", "car"},
        {"foo", "bar"},
        {"abc", "cab"}
    };

    for (size_t i = 0; i < tests.size(); ++i) {
        auto& [s, t] = tests[i];
        bool result = valid_anagram(s, t);
        (result) ? cout << "test " << i + 1 << " passed!\n" : cout << "test " << i + 1 << " failed!\n"; 
    }

}

int main() {
    run_tests();
    return 0;
}