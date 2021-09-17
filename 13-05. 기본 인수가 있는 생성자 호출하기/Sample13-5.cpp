#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car(int n, double g);
	void show();
};

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "차량번호가 " << n << "이고 연료량이" << g << " 인 자동차가 만들어졌습니다.";
}

void Car::show() {
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
}

int main() {
	Car car 1;
	Car car2(1234, 20.5);

	return 0;
}