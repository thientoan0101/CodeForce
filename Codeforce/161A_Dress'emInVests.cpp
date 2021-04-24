#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	vector<int> a(n), b(m);
	vector<bool> tick(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	vector<pair<int, int>> res;
	int d = 0;

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; i<n && j < m; j++) {
			if (tick[j] == false && b[j] >= a[i] - x && b[j] <= a[i] + y) {
				tick[j] = true;
				d++;				
				res.push_back(make_pair(i+1, j+1));
				i++;
			}
		}
	}
	cout << d << endl;
	for (int i = 0; i < res.size(); i++) {
		cout << res[i].first << " " << res[i].second << endl;
	}*/

	/*int j, last = 0;
	for (int i = 0; i < n; i++) {
		j = last;
		while (j < m && i < n) {
			if (tick[j] == false && b[j] >= a[i] - x && b[j] <= a[i] + y) {
				tick[j] = true;
				d++;
				last = j;
				res.push_back(make_pair(i + 1, j + 1));
				i++;
			}	
			j++;
		}
	}*/

	// C3:
	/*int prev = 0;
	for (int i = 0; i < n; i++) {
		for (int j = prev; i < n && j < m; j++) {
			if (tick[j] == false && b[j] >= a[i] - x && b[j] <= a[i] + y) {
				tick[j] = true;
				d++;
				res.push_back(make_pair(i + 1, j + 1));
				prev = j;
				i++;
			}
		}
	}*/
	/*vector<bool> t1(n), t2(m);
	for (int i = 0; i < n; i++) {		
			for (int j = 0; j < m; j++) {
				if (t1[i] == false && t2[j] == false && b[j] >= a[i] - x && b[j] <= a[i] + y) {
					t1[i] = true;
					t2[j] = true;
					d++;
					res.push_back(make_pair(i + 1, j + 1));					
				}			
		}
	}*/
	
	
	/*int prev = 0;
	for (int i = 0; i < n; i++) {
		for (int j = prev; i<n && j < m; j++) {
			if (tick[j] == false && b[j] >= a[i] - x && b[j] <= a[i] + y) {
				tick[j] = true;
				d++;
				prev = j;
				res.push_back(make_pair(i + 1, j + 1));
				i++;
			}
		}
	}*/
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (b[j] >= a[i] - x && b[j] <= a[i] + y) {
			d++;
			res.push_back(make_pair(i + 1, j + 1));
			i++; j++;
		}
		else if (b[j] < a[i] - x) {
			j++;
		}
		else {
			i++;
		}
	}





	cout << d << endl;
	for (int i = 0; i < res.size(); i++) {
		cout << res[i].first << " " << res[i].second << endl;
	}
	return 0;
}