#include <iostream>
#include <vector>
#include <set>
using namespace std;



int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int left = 0, right = n-1;
	int sereja = 0, dima = 0;
	bool isTurnSereja = true;
	int temp;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	while (left <= right) {
		if (a[left] > a[right]) {
			temp = a[left];
			left++;
		}
		else {
			temp = a[right];
			right--;
		}
		if (isTurnSereja) {
			sereja += temp;
		}
		else {
			dima += temp;
		}
		isTurnSereja = !isTurnSereja;
	}

	cout << sereja << " " << dima;
	return 0;
}