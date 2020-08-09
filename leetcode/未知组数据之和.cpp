#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> ans;
	int a, b;
	while (cin >> a >> b) {
		int sum = a + b;
		ans.push_back(sum);
	}
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << endl;

	return 0;
}