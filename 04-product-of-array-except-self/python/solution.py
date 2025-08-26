def product_except_self(nums: list[int]) -> list[int]:

    answer = [1] * len(nums)

    for i in range(1, len(nums)):
        answer[i] = answer[i - 1] * nums[i - 1]
    
    n = 1
    for i in range(len(nums) - 2, -1, -1):
        n *= nums[i + 1]
        answer[i] = answer[i] * n

    return answer


