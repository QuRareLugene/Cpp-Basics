#include <iostream>
using namespace std;

void buy(int x) {
	cout << x << " 만원 짜리 차량을 구입했습니다.\n";
}

int main() {
	int num;

	cout << "첫 번째로 구입하는 차량의 가격은 얼마입니까?\n";
	cin >> num;
	buy(num);

	cout << "두 번째로 구입하는 차량의 가격은 얼마입니까?\n";
	cin >> num;
	buy(num);

	return 0;
}