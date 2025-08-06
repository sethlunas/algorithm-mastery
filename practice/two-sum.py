# -----------------------------------------
# 🧠 Problem: Two Sum
# LeetCode #1 – Core Pattern: Two Pointers + HashMap
# SynTech DSA Track · Phase 1
# -----------------------------------------

"""
Given an array of integers nums and an integer target, 
return the indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Return the answer in any order.

Example:
    Input: nums = [2, 7, 11, 15], target = 9
    Output: [0, 1]  # Because nums[0] + nums[1] == 9

Constraints:
- 2 <= nums.length <= 10⁴
- -10⁹ <= nums[i] <= 10⁹
- Only one valid answer exists.
"""

# ✅ Plan:
# 1. Loop through the array (with index)
# 2. Use a hash map to store visited numbers and their indices
# 3. For each number, calculate the difference (target - num)
# 4. Check if the difference exists in the map
#    - If yes: return indices
#    - If no: add current number to map

# ✍️ Write function here
class Solution:
    

# 🧪 Test Cases
# Tip: Write your own test driver, e.g.,

# print(two_sum([2, 7, 11, 15], 9))     # Expected: [0, 1]
# print(two_sum([3, 2, 4], 6))          # Expected: [1, 2]
# print(two_sum([3, 3], 6))             # Expected: [0, 1]