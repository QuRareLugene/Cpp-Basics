#include <iostream>
using namespace std;

double avg(int t[]);

int main() {
	int i;
	int test[5];

	cout << "5���� ���� ������ �Է��Ͻʽÿ�.\n";
	for (i = 0; i < 5; i++) {
		cin >> test[i];
	}

	double ans = avg(test);
	cout << "5���� ��� ������ " << ans << " ���Դϴ�.\n";

	return 0;
}

double avg(int t[]) {
	int i;
	double sum = 0;
	for (i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}