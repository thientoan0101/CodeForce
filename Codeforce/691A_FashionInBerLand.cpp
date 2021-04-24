#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(1000);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	if (n == 1) {
		if (a[0] == 0) cout << "NO";
		else  cout << "YES";
	}
	else {
		int d = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) d++;
		}
		if (d == 1) cout << "YES";
		else cout << "NO";
	}
	return 0;
}