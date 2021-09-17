#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

void show(Car& c);

int main() {
	Car car1 = { 0, 0.0 };

	cout << "차량 번호를 입력하십시오.\n";
	cin >> car1.num;

	cout << "연료량을 입력하십시오.\n";
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car& c) {
	cout << "차량 번호는 " << c.num << " 이고 연료량은 " << c.gas << " 입니다.\n";
}