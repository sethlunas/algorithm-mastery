Given two strings *s* and *t*, return true if *t* is an *anagram* of *s*, and *false* otherwise.

Example 1:

```
Input: s = "anagram", t = "nagaram"

Output: true
```

```
Input s = "rat", t = "car"

Output: false
```

Constraints:
- 1 <= s.length, t.length <= 5 * 10^4
- *s* and *t* consists of lowercase English letters.

Initial Approach:
- loop through each letter of *s*, count each letter by storing the letter in a dict as a key, and its count as its value
- loop again through each letter of *t*, count each letter again but this time if letter exists in dict, subtract one, if letter doesn't exist, then it's not an anagram
- lastly, if dict is not empty, it means its not an anagram, if dict is empty, then it is an anagram.