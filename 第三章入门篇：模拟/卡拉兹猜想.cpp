//对任意一个自然数n进行卡拉兹猜想，n为偶数n/2,n为奇数3n+1/2,直到1 记录所需要的步数
//输入
//3
//输出
//5

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int step = 0;
	if (n > 1000)
	{
		cout << "输入非法数据" << endl;
		return 0;
	}
	else
	{
		while(n!=1)
		{ 
			if (n % 2 == 0)
			{
				n /= 2;
				step++;
			}
			else
			{
				n = (3 * n + 1) / 2;
				step++;
			}
		}
		
	}
	cout << step << endl;
	return 0;
}