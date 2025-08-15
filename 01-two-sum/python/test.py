import solution

def run_tests():
    tests = [
        # (nums, target, expected_output)
        ([2, 7, 11, 15], 9, [0, 1]),
        ([3, 2, 4], 6, [1, 2]),
        ([3, 3], 6, [0, 1])
    ]

    for i, (nums, target, expected) in enumerate(tests, 1):
        result = solution.two_sum(nums, target)
        if result == expected or result == expected[::-1]:  # order doesn't matter
            print(f"Test {i} passed")
        else:
            print(f"Test {i} failed: got {result}, expected {expected}")

if __name__ == "__main__":
    run_tests()
