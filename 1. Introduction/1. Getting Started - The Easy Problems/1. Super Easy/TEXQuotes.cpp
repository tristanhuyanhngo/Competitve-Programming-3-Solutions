#include <bits/stdc++.h>

using namespace std;

int main() {
	string temp;
	bool IsFirst = true;	
	
	while (getline(cin, temp)) {
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '"') {
				if (IsFirst) {
					cout << "``";
				} 
				else {
					cout << "''";
				}
				IsFirst = !IsFirst;
			} 
			else {
				cout << temp[i];
			}
		}	
	}
	
	return 0;
}
