
#include <iostream>

using namespace std;

int main()
{
	int a[5] = {3,1};
	//数组默认是没有初始化的，即没有初值。一旦有赋值，未赋值的全变为0
	/*默认初值全为0*/
	for (int i = 0; i < 5; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	//sizeof(a) 其中a为数组名 代表a总共占的字节数
	//sizeof(a)/sizeof(type) 数组元素的总个数
	cout << sizeof(a)/sizeof(int) << endl;
	int b = 1;
	int *p = &b;
	cout <<"地址为："<< p << endl;
	cout << "指针指向的值为：" << *p << endl;
	cout << "指针的大小为 ：" << sizeof(p) << endl;

	system("pause");
	return 0;
}