import solution

def main():
    cases = [
        ([1, 2, 3, 4], [24, 12, 8, 6]),
        ([1, 2, 0, 4], [0, 0, 8, 0]),
        ([0, 1, 2, 3], [6, 0, 0, 0]),
        ([2, -3, 4, -5], [60, -40, 30, -24]),
        ([-1, -2, -3, -4], [-24, -12, -8, -6]),
        ([5, 7], [7, 5]),
        ([1, 1, 1, 1, 1], [1, 1, 1, 1, 1]),
        ([2, 2, 2, 2], [8, 8, 8, 8]),
        ([-30, -30, 30], [-900, -900, 900]),
        ([-1, 1, 0, -3, 3], [0, 0, 9, 0, 0]),
    ]

    passed = 0
    total = len(cases)

    for i in range(total):
        nums, expected = cases[i]
        got = solution.product_except_self(nums)
        ok = (got == expected)
        print(f"Case {i+1}: {'PASS' if ok else 'FAIL'}")
        print(f"  input:   {nums}")
        print(f"  got:     {got}")
        print(f"  expect:  {expected}\n")
        if ok:
            passed += 1

    print(f"{passed}/{total} cases passed")


if __name__ == '__main__':
    main()