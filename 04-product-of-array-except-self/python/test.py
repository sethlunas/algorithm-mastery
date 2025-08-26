import solution

def main():
    test1 = [1, 2, 3, 4]
    test2 = [-1, 1, 0, -3, 3]
    result1 = solution.product_except_self(test1)
    result2 = solution.product_except_self(test2)
    print(f"Result: {result1}\nExpected: [24, 12, 8, 6]\n")
    print(f"Result: {result2}\nExpected: [0, 0, 9, 0, 0]\n")


if __name__ == '__main__':
    main()