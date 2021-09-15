#include <iostream>
using namespace std;

int main() {
	int num, i;

	cout << "몇개의 *를 출력하시겠습니까?\n";

	cin >> num;

	for (i = 1; i <= num; i++) {
		cout << '*';
	}

	cout << '\n';

	return 0;
}