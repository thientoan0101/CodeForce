#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;



int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//vector<int> b(a);
	int hightest = 1, d = 1, length = 1;
	sort(a.begin(), a.end());

	for (int i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1]) {
			length = 1;
			d++;
		}
		else {
			length++;
			if (hightest < length) hightest = length;
		}
	}
	cout << hightest << " " << d;
	
	return 0;
}