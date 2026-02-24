import solution

def run_tests():

    tests = [
        ([7,1,5,3,6,4], 5),
        ([7,6,4,3,1], 0)
    ]

    for i, (test_case, expected) in enumerate(tests, 1):
        result = solution.maxProfit(test_case)

        if result == expected:
            print(f"Test {i} passed")
        else:
            print(f"Test {i} failed: got {result}, expected {expected}")

if __name__ == "__main__":
    run_tests()