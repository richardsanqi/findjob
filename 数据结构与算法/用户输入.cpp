#include <iostream>
#include <string>
using namespace std;

//用法1：最基本，也是最常用的用法，输入一个数字
void cin_num()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
}

//用法2：接受一个字符串，遇“空格”、“TAB”、“回车”都结束
void cin_string()
{
	char a[20];
	//string a;
	cin >> a;
	cout << a << endl;
}

//用法1： cin.get(字符变量名)可以用来接收字符,只能接收一个字符
void cin_char()
{
	char ch;
	ch = cin.get();   //或者cin.get(ch);
	cout << ch << endl;
}

//用法2：cin.get(字符数组名,接收字符数目)用来接收一行字符串,可以接收空格
void cin_get_string()
{
	char a[20];
	cin.get(a, 20);
	cout << a << endl;
}

//cin.getline() 
// 接受一个字符串，可以接收空格并输出
//cin.getline()实际上有三个参数，cin.getline(接受字符串m,接受个数5,结束字符)
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