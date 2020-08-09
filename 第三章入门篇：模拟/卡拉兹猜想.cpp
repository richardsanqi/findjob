//对任何一个自然数n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把（3n+1）砍掉一半
//对给定的任一不超过1000的正整数n，简单地数一下，需要多少步才能得到n=1？
//输入样例
//3
//输出样例
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
		cout << "输入的数不合法" << endl;
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
	system("pause");
	return 0;
}