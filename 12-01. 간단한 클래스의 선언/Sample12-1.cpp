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
}