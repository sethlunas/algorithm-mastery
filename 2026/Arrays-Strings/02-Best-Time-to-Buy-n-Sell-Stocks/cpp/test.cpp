#include "solution.hpp"
#include <cstdio>
#include <tuple>
#include <vector>

void testMaxProfit() {
    std::vector<std::tuple<std::vector<int>, int>> tests = {
        {{7,1,5,3,6,4}, 5},
        {{7,6,4,3,1}, 0}
    };

    int result;
    size_t test_num = 1;
    for (const auto& [test_case, expected] : tests) {
        result = maxProfit(test_case);
        if (result == expected) {
            printf("Test %ld passed!\n", test_num);
        }
        else {
            printf("Test %ld failed!\n", test_num);
        }
        test_num++;
    }
}

int main() {
    testMaxProfit();
    return 0;
}