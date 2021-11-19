#include <iostream>
using namespace std;

int num_of_ways(int numb, int summ) {
	if (summ < 0 || numb * 9 < summ) {
		return 0;
	}
	if (numb * 9 == summ || (numb == 1 && summ < 10)) {
		return 1;
	}
	int ans = 0;
	for (int i = 0; i < 10; ++i) {
		ans += num_of_ways(numb - 1, summ - i);
	}
	return ans;
}

int main() {
	int k, s, ans = 0;
	cin >> k >> s;
	if (k * 9 < s) {
		cout << 0;
		exit(0);
	}
	if (k == 1 && s < 10) {
		cout << 1;
		exit(0);
	}
	for (int i = 1; i < 10; ++i) {
		ans += num_of_ways(k - 1, s - i);
	}
	cout << ans;
	return 0;
}