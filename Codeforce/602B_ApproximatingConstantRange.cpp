#include <iostream>
#include <vector>
#include <set>
using namespace std;



int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int longest = 0, d=1;
	int minSub = a[0], maxSub = a[0];
	int start = 0;

	//for (int end = 1; end < n; end++) {
	//	//if (abs(a[end] - a[end - 1]) <= 1) {
	//	if (a[end] > max) {
	//		max2 = max;
	//		max = a[end];
	//	}
	//	else if (a[end] > max2) {
	//		max2 = a[end];
	//	}
	//	else if (a[end] < min) {
	//		min2 = min;
	//		min = a[end];
	//	}
	//	else {
	//		min2 = a[end];
	//	}
	//		
	//		if (max - min <= 1) {
	//			d++;
	//			if (longest < d) longest = d;
	//		}			
	//		else {
	//			//d--;
	//			if (a[start] == min) {
	//				min = min2;
	//			}
	//			else if (a[start] == max) {
	//				max = max2;
	//			}
	//			start++;
	//	//	}
	//	}
	//}
	
	for (int end = 1; end < n; end++) {
		if (abs(a[end] - minSub) <= 1 && abs(a[end] - maxSub) <= 1) {
			d++;
			minSub = min(a[end], minSub);
			maxSub = max(a[end], maxSub);
		}
		else {
			longest = max(longest, d);
			d = 0;
			minSub = maxSub = a[end];
			for (int start = end; start >= 0; start--) {
				if (abs(a[start] - minSub) <= 1 && abs(a[start] - maxSub) <= 1) {
					d++;
					minSub = min(a[start], minSub);
					maxSub = max(a[start], maxSub);
				}
				else {
					break;
				}
			}
		}
	}
	
	longest = max(longest, d);
	
	cout << longest;
	return 0;
}