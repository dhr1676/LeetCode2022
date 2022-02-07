class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        candidate_dict = {}
        for idx, num in enumerate(nums):
            if (target - num) in candidate_dict:
                return [candidate_dict[(target - num)], idx]
            else:
                candidate_dict[num] = idx
        return [0, 0]
