def productExceptSelf(nums: list[int]) -> list[int]:

    '''
    Return array where result[i] = product of all elements except nums[i].
    
    Pass 1 (left→right): result[i] = product of all elements left of i
    Pass 2 (right→left): multiply result[i] by product of all elements right of i
    
    Time: O(n), Space: O(1) extra (output array doesn't count

    '''
    
    n = len(nums)
    result = [1] * len(nums)

    prefix = 1
    for i in range(n):
        result[i] = prefix
        prefix *= nums[i] 

    postfix = nums[n - 1]
    for i in range(n - 2, -1, -1):
        result[i] *= postfix
        postfix *= nums[i]

    return result

if __name__ == "__main__":
    test_nums = [1, 2, 3, 4]
    result = productExceptSelf(test_nums)
    print("Result:", result)