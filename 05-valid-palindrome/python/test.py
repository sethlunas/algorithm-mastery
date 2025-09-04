import solution

def main():

    cases = [
        ("A man, a plan, a canal: Panama", True),
        ("race a car", False),
        (" ", True)
    ]

    passed = 0
    total = len(cases)

    for i in range(total):
        string, expected = cases[i]
        got = solution.valid_palindrome(string)
        ok = (got == expected)
        print(f"  input:   {string}")
        print(f"  got:     {got}")
        print(f"  expect:  {expected}\n")
        if ok:
            passed += 1

    print(f"{passed}/{total} cases passed")


if __name__ == '__main__':
    main()