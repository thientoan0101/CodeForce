#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> l(n);

	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}

	int d = 0;
	int currentPosKilled = n -1, farthestPosKilled = 0;
	for (int i = n - 1; i >= 0; i--) {
		currentPosKilled = min(currentPosKilled, i);
		farthestPosKilled = max(0, i - l[i]);

		if (farthestPosKilled < currentPosKilled) {
			d = d + (currentPosKilled - farthestPosKilled);
			currentPosKilled = farthestPosKilled;
		}
	}
	cout << n - d;

	return 0;
}