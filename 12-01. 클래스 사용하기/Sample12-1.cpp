#include <iostream>
using namespace std;

class Car {
public:
	int num;
	double gas;
	void show();
};

void Car::show() {
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
}

int main() {
	Car car1;

	car1.num = 1234;
	car1.gas = 20.5;

	car1.show();

	return 0;
}