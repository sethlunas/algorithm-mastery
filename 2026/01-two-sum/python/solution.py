def two_sum(nums: list[int], target: int) -> list[int]:

    seen = {} # dict

    for i in nums:
        if (target - nums[i]) in seen:
            