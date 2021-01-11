#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		// for better understanding, see first the image in this repository
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (i == 0 && j == 0) {
					// print O only on the first cell only
					cout << "O";
				} else if (k - 1> 0) {
					// print '.' or spaces of which the King can move until k - 1 > 0
					// k - 1 is used because the current cell of the King is counted as a move
					cout << ".";
					k--;
				} else {
					// when k - 1 is 0, then print 'X' on the rest of the cells
					cout << "X";
				}
			}
			cout << '\n';
		}
		cout << '\n';
	}
	return 0; 
}
