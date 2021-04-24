#include <iostream>
#include <vector>
using namespace std;



int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		
	}
	
	
	int d = 0, j = 0; 
	for (int i = 0; i < n; i++) {		
		while (j < m && i<n) {
			if (b[j] >= a[i])
			{
				d++;
				i++;
			}
			j++;
		}
	}
	cout << max(0,n - d);
	return 0;
}


// 20 25
// 30 32 34 39 42 43 45 46 47 48 52 55 56 57 58 59 60 65 67 69
// 2 3 4 5 8 9 14 16 18 20 24 27 29 30 34 35 36 37 40 41 42 43 44 45 46