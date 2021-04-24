#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
		
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}

	int longest = 0, sum = 0, left = 0;
	for (int right = 0; right < n; right++)
	{
		sum += a[right];

		while (sum > t) {
			sum -= a[left++];
		}
		longest = max(longest, right - left + 1);
	}

	cout << longest;
	return 0;
}