Given an integer array `nums`, return _an array `answer` such that `answer[i]` is equal to the product of all elements of `nums` except `nums[i]_.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

**Example 1**
```
| Input: nums = [1, 2, 3, 4]
| Output: [24, 12, 8, 6]
```

**Example 2**
```
| Input: nums = [-1,1,0,-3,3]
| Output: [0,0,9,0,0]
```

**Constraints**
- `2 <= nums.length <= 10^5`
- `-30 <= nums[i] <= 30`
- The input is generated such that `answer[i]` is **guaranteed** to fit in a **32-bit** integer. 

Initial Approach:
- loop once forward, multiplying each index as you go through (0 to n - 1)
- loop again backward, multiplying each index as you go through (n - 1 to 0)
- should be 2 * O(n) ~ O(n)
- first loop (ascending 'i'): every element that comes BEFORE 'i', multiply that and assign it to 'answer [i]'
- second loop (descending 'i'): every element that comes AFTER 'i', multiply that and assign it to 'answer [i]'
- example1:
    - Input: nums = [1, 2, 3, 4]
    - first loop: result = [1, 1, 2, 6]
    - second loop: result = [24, 12, 8, 6]
- example2:
    - Input: nums = [-1, 1, 0, -3, 3]
    - first loop: result = [1, -1, -1, 0, 0]
    - second loop: result = [0, 0, 9, 0, 0]
  
Pattern: Prefix/Suffix Accumulation (Two-Pass scan)

_Why no division_?

The "multiply everything then divide by nums[i]" idea breaks on zeros (division by zero), can overflow in fixed-width integer languages, and invites float rounding hacks. The two-pass left/right product avoids these issues and generalizes to other problems.