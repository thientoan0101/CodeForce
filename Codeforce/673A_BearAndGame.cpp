#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	int n, start = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	a.push_back(90);
	for (int i = 0; i <= n; i++) {
		int d = a[i] - start;
		if (d > 15) {
			cout << start + 15;
			return 0;
		}
		else start = a[i];
	}
	cout << 90;
	return 0;
}