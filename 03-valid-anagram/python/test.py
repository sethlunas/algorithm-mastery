import solution

def run_tests():
    tests = [
        ("listen", "silent"), #pass
        ("hello", "olleh"),  #pass
        ("anagram", "nagaram"), #pass 
        ("", ""), #false
        ("a", "aa"), #false
        ("rat", "car"), #false
        ("foo", "bar"), #false
        ("abc", "cab") #false
    ]

    for i, (s, t) in enumerate(tests, start=1):
        result = solution.valid_anagram(s, t)
        if result == True:
            print(f"Test {i} passed")
        else:
            print(f"Test{i} failed")

if __name__ == "__main__":
    run_tests()
