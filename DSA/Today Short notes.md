Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
        return result

nums = [4,1,2,1,2]
Output: 4





make this  : 
https://leetcode.com/problems/pascals-triangle/solutions/4016203/three-approaches-beginner-friendly-full-explanation-c-java-python/

