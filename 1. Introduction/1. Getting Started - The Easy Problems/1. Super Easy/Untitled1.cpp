#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, degree;
	
	cin >> a >> b >> c >> d;
	
	while (a || b || c || d) {
		degree = 360 * 3;
				
		
		// Clockwise 
		degree += a - b > 0 ? (a - b) * 9 : (a - b + 40) * 9; 	
		// Counter-Clockwise
		degree += c - b > 0 ? (c - b) * 9 : (c - b + 40) * 9;
		// Clockwise
		degree += c - d > 0 ? (c - d) * 9 : (c - d + 40) * 9;
	
		cout << degree << "\n";
		
		cin >> a >> b >> c >> d;
	};
	
	return 0;
}
