//�����ʽ
//	��һ���и��������α߳�N��3<=N<=20)�����������
//	�ߵ�ĳ���ַ�C�����һ���ո�
//�����ʽ
//	�ɸ����ַ�C�����������Ρ�
//��������
//10 a
//�������
//aaaaaaaaaa
//a        a
//a        a
//a        a
//aaaaaaaaaa

#include <iostream>
using namespace std;

int main()
{
	int col;
	int row;
	cin >> col;
	if (col % 2 == 1)
	{
		row = col / 2 + 1;
	}
	else
	{
		row = col / 2;
	}
	char c;
	cin >> c;
	for (int i = 0; i < col; ++i)
	{
		cout << c;
	}
	cout << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (j == 0)
			{
				cout << c;
			}
			else if (j ==col-1)
			{
				cout << c << endl;
			}
			else
			{
				cout << " ";
			}
		}
	}
	for (int i = 0; i < col; ++i)
	{
		cout << c;
	}
	system("pause");
	return 0;
}