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
	
	vector<int> h(2001);
	int d = 1, level = 1;;

	for (int i = n - 1; i > 0; i--) {
		if (b[i] != b[i - 1]) {						
			h[b[i]] = level;
			level = level + d;
			d = 1;
		}
		else {
			d++;
		}
	}
	h[b[0]] = level;
	for (int i = 0; i < n; i++) {
		cout << h[a[i]] << " ";
	}
	return 0;
}