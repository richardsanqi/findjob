//��Ŀ����
//	����һ����n��1<=n<=200),��������n����ͬ��������
//	����һ��ֵx��������ֵ����������е��±꣨��0
//	��ʼ���������������������-1����

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