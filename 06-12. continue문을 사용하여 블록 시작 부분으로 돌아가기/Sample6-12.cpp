#include <iostream>
using namespace std;

int main() {
	int res, i;

	cout << "�� ���� ó���� �ǳ� �ٽðڽ��ϱ�? (1~10)\n";

	cin >> res;

	for (i = 1; i < 10; i++) {
		if (i == res) {
			continue;
		}
		cout << i << " ��° ó���Դϴ�.\n";
	}

	return 0;
}