
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
	
	return 0;
}