#include <iostream>
using namespace std;

void buy(int x = 10);

int main() {
	cout << "처음 구매가를 100만원입니다..\n";
	buy(100);

	cout << "두 번째 구매가는 기본가입니다.\n";
	buy();

	return 0;
}

void buy(int x) {
	cout << x << " 만원짜리 차량을 구입했습니다.\n";
}