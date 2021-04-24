#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	string s, t;
	

	getline(cin, s);
	getline(cin, t);
	vector<int> a(26), b(26);
	for (int i = 0; i < s.length(); i++) {
		a[s[i] - 'a']++;
	}
	for (int i = 0; i < t.length(); i++) {
		b[t[i] - 'a']++;
	}

	for (int i = 0; i <26; i++) {
		if (b[i] > 0 && a[i] == 0) {
			cout << "need tree";
			return 0;
		}
	}

	bool isAutomation = false;
	for (int i = 0; i < 26; i++) {
		if (a[i] >b[i]) {
			isAutomation = true;
			break;
		}
	}

	bool isArray = false;
	int pos = -1, preIndex = -1;
	for (int i = 0; i < t.length(); i++) {
		pos = s.find_first_of(t[i], preIndex + 1);
		if (pos > preIndex) {
			preIndex = pos;
		}
		else {
			isArray = true;
			break;
		}
	}

	if (isAutomation == true && isArray == true) cout << "both";
	else if (isAutomation == true && isArray == false) cout << "automaton";
	else if (isAutomation == false && isArray == true) cout << "array";

	return 0;
}