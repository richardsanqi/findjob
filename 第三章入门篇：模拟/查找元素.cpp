//查找元素
//	输入一个数（1<=n<=200),然后输入n个数值各不相同的数，找到下标
// 若不存在，返回-1
//	样例输入
// 4
// 1 2 3 4
// 3
// 样例输出
// 2

#include <iostream>

using namespace std;

const int NUM = 200;

int main()
{
	int num[NUM] = { 0 };
	int n;
	cin >> n;
	int value;
	int find_value;
	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		num[i] = value;
	}
	cin >> find_value;
	int k = 0;
	for (k = 0; k < n; ++k)
	{
		if (find_value == num[k])
		{
			cout << k;
			break;
		}
		
	}
	if (k == n)
	{
		cout << -1;
	}
	return 0;
}