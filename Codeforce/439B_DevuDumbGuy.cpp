#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long count = 0;

	for (int i = 0; i < n; i++) {
		count = count + (long long) a[i] * x;
		if (x > 1) x--;
	}
	cout << count;
	return 0;
}