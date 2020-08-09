//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数，
//并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
//示例 :
//给定 nums = [2, 7, 11, 15], target = 9
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]


#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> v;
		int size = nums.size();
		for (int i = 0; i < size; ++i)
		{
			for (int j = i + 1; j < size; ++j)
			{
				if (nums[i] + nums[j] == target)
				{
					v.push_back(i);
					v.push_back(j);
					return v;
				}
			}
		}
		return v;
	}
};