#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	string s, t, res;
	int start, end;
	getline(cin, s);
	getline(cin, t);

	int n = s.length();

	
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'z') {
			s[i] = 'a';
		}
		else {
			s[i] = s[i] + 1;
			break;
		}
	}
	if (s < t) {
		cout << s;
	}
	else {
		cout << "No such string";
	}
	return 0;
}