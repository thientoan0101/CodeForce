#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int l = 0, r = n - 1;
	int t1 = 0, t2 = 0, d1 = 0, d2 = 0;
	while (l<=r) {
		if (t1 == 0) t1 = a[l];
		if (t2 == 0) t2 = a[r];

		if (t1 < t2) {
			l++;
			t2 = t2 - t1;
			t1 = 0;
		}
		else if (t1 > t2) {
			r--;
			t1 = t1 - t2;
			t2 = 0;
		}
		else if (l == r) {
			l++;
		}
		else {
			l++;
			r--;
			t1 = t2 = 0;
		}
	}
	cout << l << " " << n - r - 1;
	return 0;
}