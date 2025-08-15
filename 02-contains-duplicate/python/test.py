import solution

def run_tests():
    tests = [
        ([1, 2, 3, 4], False),
        ([1, 2, 3, 1], True),
        ([], False),
        ([1], False),
        ([0, -1, -1, 2], True),
        ([5, 5, 5, 5], True),
    ]

    for i, (nums, expected) in enumerate(tests, start=1):
        result = solution.contains_duplicate(nums)
        if result == expected:
            print(f"Test {i} passed")
        else:
            print(f"Test {i} failed — input: {nums}, expected: {expected}, got: {result}")

if __name__ == "__main__":
    run_tests()
