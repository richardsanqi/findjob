//题目描述
//	输入一个数n（1<=n<=200),接着输入n个不同的数，再
//	输入一个值x，输出这个值再这个数组中的下标（从0
//	开始，若不存在数组中则输出-1）。

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

	system("pause");
	return 0;
}