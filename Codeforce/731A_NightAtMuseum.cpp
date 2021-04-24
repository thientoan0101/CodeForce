#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int r = 0, cur = 0;
	string s;
	char start = 'a';
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		int d1 = abs(s[i] - start);
		int d2 = 26 - abs( - (s[i] - start));
		if (d1 < d2) {
			r = r + d1;
		}
		else r = r + d2;
		start = s[i];
	}
	cout << r;

	return 0;
}