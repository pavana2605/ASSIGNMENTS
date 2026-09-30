## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. Each pair of elements is checked to find whether their sum is equal to the target.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The second loop starts from i + 1 so that the same element is not used twice. The duplicate-value test case [3,3] with target 6 produces [0,1].