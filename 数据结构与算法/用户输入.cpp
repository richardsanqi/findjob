#include <iostream>
#include <string>
using namespace std;

//�÷�1���������Ҳ����õ��÷�������һ������
void cin_num()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
}

//�÷�2������һ���ַ����������ո񡱡���TAB�������س���������
void cin_string()
{
	char a[20];
	//string a;
	cin >> a;
	cout << a << endl;
}

//�÷�1�� cin.get(�ַ�������)�������������ַ�,ֻ�ܽ���һ���ַ�
void cin_char()
{
	char ch;
	ch = cin.get();   //����cin.get(ch);
	cout << ch << endl;
}

//�÷�2��cin.get(�ַ�������,�����ַ���Ŀ)��������һ���ַ���,���Խ��տո�
void cin_get_string()
{
	char a[20];
	cin.get(a, 20);
	cout << a << endl;
}

//cin.getline() 
// ����һ���ַ��������Խ��տո����
//cin.getline()ʵ����������������cin.getline(�����ַ���m,���ܸ���5,�����ַ�)
void cin_getline()
{
	char m[20];
	cin.getline(m, 5);
	cout << m << endl;
}


int main()
{
	/*cin_num();
	cin_string();
	cin_char();
	cin_get_string();*/
	cin_getline();
	system("pause");
	return 0;
}