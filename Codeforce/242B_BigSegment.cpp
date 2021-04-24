#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> L(n), R(n);

	for (int i = 0; i < n; i++) {
		cin >> L[i] >> R[i];
	}
	
	int min = L[0], max = R[0];

	for (int i = 1; i < n; i++) {
		if (min > L[i]) min = L[i];
		if (max < R[i]) max = R[i];
	}
	for (int i = 0; i < n; i++) {
		if (L[i] == min && R[i] == max) {
			cout << i + 1;
			return 0;
		}
	}
	cout << -1;
	
	return 0;
}