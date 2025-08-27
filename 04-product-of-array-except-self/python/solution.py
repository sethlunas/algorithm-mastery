def product_except_self(nums: list[int]) -> list[int]:
    """
    Return an array where answer[i] = (product of all values left of i) * (product of all values right of i), without division.

    Pass 1 (left→right): write into answer[i] the product of elements strictly before i (empty product at i=0 is 1).
    Pass 2 (right→left): keep a running product of elements strictly after i and multiply it into answer[i].

    Time: O(n) (two linear passes). Extra space: O(1) beyond the output array (total space O(n) due to answer).
    """

    n = len(nums)
    answer = [1] * n

    # First pass: left products
    for i in range(1, n):
        answer[i] = answer[i - 1] * nums[i - 1]

    # Second pass: running right product
    suffix = 1
    for i in range(n - 2, -1, -1):
        suffix *= nums[i + 1]
        answer[i] *= suffix

    return answer


