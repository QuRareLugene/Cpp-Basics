#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

int main() {
	int a, b;
	double da, db;

	cout << "정수 2개를 입력하세요.\n";
	cin >> a >> b;

	cout << "소수 2개를 입력하세요.\n";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "입력받은 정수의 최대 값은 " << ans1 << "입니다.\n";
	cout << "입력받은 소수의 최대 값은 " << ans2 << "입니다.\n";

	return 0;
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

double max(double x, double y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}