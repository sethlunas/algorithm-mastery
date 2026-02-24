def two_sum(nums: list[int], target: int) -> list[int]:

    seen = {} # dict

    for idx, val in enumerate(nums):
        difference = target - val
        if difference in seen:
            return [idx, seen[difference]]
        seen[val] = idx

    return []