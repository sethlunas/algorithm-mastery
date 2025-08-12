def two_sum(nums: list[int], target: int) -> list[int]:

    seen = {}
    for idx, val in enumerate(nums):
        difference = target - val
        if difference in seen:
            return [seen[difference], idx]
        seen[val] = idx
    return []
