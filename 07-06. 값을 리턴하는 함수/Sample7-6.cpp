#include <iostream>
using namespace std;

int buy(int x, int y) {
	int z;
	cout << x << " 만원 짜리, " << y << " 만원 짜리 차량을 구입했습니다.\n";
	
	z = x + y;
	return z;
}

int main() {
	int num1, num2, sum;

	cout << "구입하시는 차량의 가격은 얼마입니까?\n";
	cin >> num1;

	cout << "구입하시는 차량의 가격은 얼마입니까?\n";
	cin >> num2;
	sum = buy(num1, num2);

	cout << "합계 금액은 " << sum << " 만원입니다.\n";

	return 0;
}