#include "solution.hpp"
#include <string>
#include <unordered_map>

using namespace std;

bool valid_anagram(const string& s, const string& t) {
    size_t slen = s.size();
    size_t tlen = t.size();

    if (s.size() != t.size()) {
        return false;
    }
    
    unordered_map<char, int> word_count;

    // Count letters in s
    for (size_t i = 0; i < slen; ++i) {
        word_count[s[i]]++;
    }

    // Subtract letters from t
    for (size_t i = 0; i < tlen; ++i) {
        if (!(word_count.count(t[i]))) {
            return false;
        }
        word_count[t[i]]--;
        if (word_count[t[i]] == 0) {
            word_count.erase(t[i]);
        }
    }

    return word_count.size() == 0;
}