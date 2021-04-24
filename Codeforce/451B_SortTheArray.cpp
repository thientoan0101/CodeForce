#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> b(a);
	sort(b.begin(), b.end());

	int start = 0;
	for (start = 0; start < n; start++) {
		if (b[start] != a[start]) {
			break;
		}
	}
	if (start == n) {
		cout << "yes" << endl;
		cout << "1 1";
		return 0;
	}

	int end = n - 1;
	for (end = n - 1; end >= 0; end--) {
		if (b[end] != a[end]) {
			break;
		}
	}

	for (int i = 0; i < (end - start + 1); i++) {
		if (a[start + i] != b[end - i]) {
			cout << "no";
			return 0;
		}
	}
	cout << "yes" << endl;
	cout << start + 1<< " " << end + 1;

	return 0;
}