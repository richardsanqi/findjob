//���κ�һ����Ȼ��n���������ż������ô��������һ�룻���������������ô�ѣ�3n+1������һ��
//�Ը�������һ������1000��������n���򵥵���һ�£���Ҫ���ٲ����ܵõ�n=1��
//��������
//3
//�������
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
		cout << "����������Ϸ�" << endl;
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