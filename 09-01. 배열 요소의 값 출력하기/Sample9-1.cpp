#include <iostream>
using namespace std;

int main() {
	int i;
	int test[5];

	test[0] = 80;
	test[1] = 60;
	test[2] = 22;
	test[3] = 50;
	test[4] = 75;

	for (i = 0; i < 5; i++) {
		cout << i + 1 << " ��° ����� ������ " << test[i] << "�Դϴ�.\n";
	}

	return 0;
}