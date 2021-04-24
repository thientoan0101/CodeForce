#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;



int main()
{
	int n, w;
	cin >> n >> w;

	vector<int> a(n*2);
	for (int i = 0; i < n*2; i++) {
		cin >> a[i];
	}

	//vector<int> b(a);
	sort(a.begin(), a.end());

	double l = (double)w / (3 * n);
	
	double minL = min((double)a[0], (double)a[n] / 2);
	
	if (l > minL) l = minL;
	cout << fixed<<setprecision(10)<< l * 3 * n;
	return 0;
}	