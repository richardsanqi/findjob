
#include <iostream>

using namespace std;

int main()
{
	int a[5] = {3,1};
	//����Ĭ����û�г�ʼ���ģ���û�г�ֵ��һ���и�ֵ��δ��ֵ��ȫ��Ϊ0
	/*Ĭ�ϳ�ֵȫΪ0*/
	for (int i = 0; i < 5; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	//sizeof(a) ����aΪ������ ����a�ܹ�ռ���ֽ���
	//sizeof(a)/sizeof(type) ����Ԫ�ص��ܸ���
	cout << sizeof(a)/sizeof(int) << endl;
	int b = 1;
	int *p = &b;
	cout <<"��ַΪ��"<< p << endl;
	cout << "ָ��ָ���ֵΪ��" << *p << endl;
	cout << "ָ��Ĵ�СΪ ��" << sizeof(p) << endl;

	
	return 0;
}