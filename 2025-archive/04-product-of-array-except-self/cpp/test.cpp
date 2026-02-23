#include "solution.hpp"
#include <cstddef>
#include <iostream>
#include <tuple>

using std::cout;
using std::ostream;
using std::size_t;
using std::tuple;
using std::vector;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    size_t vlen = v.size();
    if (vlen == 0) {
        os << "[]";
        return os;
    }
    os << "[";
    for (size_t i = 0; i < vlen; ++i) {
        if ((i + 1) < vlen) {
            os << v[i] << ", ";
        }
        else {
            os << v[i] << "]";
        }
    }
    return os;
}

/*
 * Template with typename... Args packs the types of the tuple elements.
 * The function returns ostream& to allow chaining and uses references to reuse the same stream.
 * This overloads the << operator; the first parameter is the output stream,
 * the second is a const reference to the tuple (no mutation, no copy).
 * <Args...> unpacks the types of the elements in the tuple, and t is the actual tuple instance.
 * Outputs "(" at the start and tracks commas with a counter n.
 * Uses std::apply because tuples cannot be indexed like vectors; apply calls the lambda with the tuple contents.
 * The lambda captures [&] to access os and n from the outside scope,
 * and takes params const auto&... elems which bind each tuple element by const reference.
 * Inside the lambda, each elem is printed with formatting,
 * and ++n check decides whether to print a comma.
 * sizeof...(Args) gives the number of types in the tuple, i.e., the tuple length.
 * The trailing ... expands the print pattern for all elements in the parameter pack.
 * Finally prints ")" and returns os to complete the operator overload.
 */
template <typename... Args>
ostream& operator<<(ostream& os, const tuple<Args...>& t) {
    os << "(";
    size_t n = 0;
    std::apply([&](const auto&... elems) {
        ((os << elems << (++n < sizeof...(Args) ? ", " : "")), ...);
    }, t);
    os << ")";
    return os;
}


void test() {
    
    vector<tuple<vector<int>, vector<int>>> cases = {
        {{1, 2, 3, 4}, {24, 12, 8, 6}},
        {{1, 2, 0, 4}, {0, 0, 8, 0}},
        {{0, 1, 2, 3}, {6, 0, 0, 0}},
        {{2, -3, 4, -5}, {60, -40, 30, -24}},
        {{-1, -2, -3, -4}, {-24, -12, -8, -6}},
        {{5, 7}, {7, 5}},
        {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}},
        {{2, 2, 2, 2}, {8, 8, 8, 8}},
        {{-30, -30, 30}, {-900, -900, 900}},
        {{-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0}}
    };

    int passed = 0;
    size_t total = cases.size();

    for (size_t i = 0; i < total; ++i) {
        const auto& [nums, expected] = cases[i];
        vector<int> got = product_except_self(nums);
        bool ok = (got == expected);
        cout << "Case " << (i + 1) << (ok ? ": Pass" : ": Fail") << "\n";
        cout << "   input: " << nums;
        cout << "   got: " << got;
        cout << "   expect: " << expected << "\n";
        if (ok) passed++;
    }
    cout << passed << "/" << total << " cases passed\n";
}

int main() {
    test();
    return 0;
}
