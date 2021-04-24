#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

struct Point
{
	int x;
	int y;
	bool operator<(const Point& other) {
		return (x < other.x || (x == other.x && y < other.y));
	}
};


int main()
{
	vector<int> x(8), y(8);
	vector<Point> p;
	vector<bool> hx(1000001), hy(1000001);
	for (int i = 0; i < 8; i++) {
		cin >> x[i] >> y[i];
		hx[x[i]] = true;
		hy[y[i]] = true;
		p.push_back({ x[i],y[i] });
	}
	vector<int> s(x), t(y);
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(p.begin(), p.end());
	vector<int> a, b;
	
	for (int i = 0; i < 8; i++) {
		if (hx[x[i]] == true) {
			a.push_back(x[i]);
			hx[x[i]] = false;
		}
		if (hy[y[i]] == true) {
			b.push_back(y[i]);
			hy[y[i]] = false;
		}
	}

	int cur = 0;
	if (a.size() == 3 && b.size() == 3) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0;j<3;j++) {
				if (i == 1 && j == 1) {
					continue;
				}
				else if (p[cur].x == a[i] && p[cur].y == b[j]) {
					cur++;
				}
				else {
					cout << "ugly";
					return 0;
				}
			}
		}
		cout << "respectable";
		return 0;
		
	}
	cout << "ugly";

	return 0;
}