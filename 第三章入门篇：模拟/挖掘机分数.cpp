//输入格式
//在第一行给出不超过10^5的正整数N，即参赛人数。随后N行，
//每行给出以为参赛者的信息和程计，包括其所代表的学校的编号
//及其程计，，中间以空格分隔。
//输出格式
//在一行中给出总得分最高的学校的编号及总分，中间以空格分隔。

//#include <iostream>
//using namespace std;
//
//const int MAXN = 100000;
//class school
//{
//	public:
//		int num;
//		int score=0;
//};
//
//int main()
//{
//	school m[MAXN];
//	int n;
//	int number;
//	int school_score;
//	cin >> n;
//	for (int i = 1; i <=n; ++i)
//	{
//		cin >> number;
//		cin >> school_score;
//		/*m[i].num = number;*/
//		//m[i].score = school_score;
//		m[number].score += school_score;
//	}
//	int k = 1;
//	int MAX = -1;
//	for (int i = 1; i <=n; ++i)
//	{
//		if (m[i].score > MAX)
//		{
//			MAX = m[i].score;
//			k = i;
//		}
//	}
//	cout << k << " " << m[k].score;
//	system("pause");
//	return 0;
//}

#include <iostream>

using namespace std;
const int MAXN = 100000;
int main()
{
	int n;
	cin >> n;
	int score;
	int num;
	int school[MAXN] = { 0 };
	for (int i = 1; i <= n; ++i)
	{
		cin >> num;
		cin >> score;
		school[num] += score;
	}
	int max_num = 1;
	int max_score = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (school[i] > max_score)
		{
			max_score = school[i];
			max_num = i;
		}
	}
	cout << max_num << " " << max_score;
	system("pause");
	return 0;
}