def valid_anagram(s: str, t: str) -> bool:
 
    if len(s) != len(t):
        return False
    if s is None or t is None:
        return False
    
    word_count = {}
    
    # Count letters in s
    for letter in s:
        word_count[letter] = word_count.get(letter, 0) + 1

    # Subtract letters from t    
    for letter in t:
        if letter not in word_count:
            return False
        word_count[letter] -= 1
        if word_count[letter] == 0:
            del word_count[letter]
    
    # Check if dictionary is empty
    return len(word_count) == 0
