#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;




int main()
{
	int k;
	cin >> k;

	vector<int> a(12);
	for (int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int>());

	int d = 0, s = 0;
	if (k == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < 12; i++) {
		s = s + a[i];
		d++;
		if (s >= k) {
			break;
		}
		
	}
	
	if (s < k) cout << "-1";
	else cout << d;

	return 0;
}