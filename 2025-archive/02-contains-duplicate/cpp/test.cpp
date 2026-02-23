#include "solution.hpp"
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void test_contains_duplicate() {

    vector<tuple<vector<int>, bool>> tests = {
        {{1, 2, 3, 4}, false},
        {{1, 2, 3, 1}, true},
        {{}, false},
        {{1}, false},
        {{0, -1, -1, 2}, true},
        {{5, 5, 5, 5}, true}
    };

    for (size_t i = 0; i < tests.size(); ++i) {
        auto& [nums, expected] = tests[i];
        bool result = contains_duplicate(nums);
        if (result == expected) {
            cout << "Test " << i + 1 << " passed" << endl; 
        }
        else {
            cout << "Test " << i + 1 << "failed" << endl;
        }
    }

}

int main() {
    test_contains_duplicate();
    return 0;
}