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

//暴力求解
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

//复杂度分析：
//
//时间复杂度：O(n^2)
//对于每个元素，我们试图通过遍历数组的其余部分来寻找它所对应的目标元素，这将耗费O(n)的时间。
//因此时间复杂度为 O(n^2)
//空间复杂度：O(1)。


int main()
{
	
	vector<int> v;
	
	int num;
	while (cin >> num)
	{
		v.push_back(num);
	}
	int target;
	cin >> target;
	vector<int> ans = twoSum(v, target);
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	
	return 0;
}