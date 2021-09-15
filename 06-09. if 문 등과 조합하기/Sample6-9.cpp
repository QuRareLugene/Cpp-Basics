#include <iostream>
using namespace std;

int main() {
	int ch = 0;
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (ch == 0) {
				cout << '*';
				ch = 1;
			}
			else {
				cout << '-';
				ch = 0;
			}
		}
		cout << '\n';
	}

	return 0;
}