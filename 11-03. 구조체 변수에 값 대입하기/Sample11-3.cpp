#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

int main() {
	Car car1 = { 1234, 25.5 };
	Car car2 = { 4567, 52.2 };

	cout << "car1의 차량 번호는 " << car1.num << " 이고 연료량은 " << car1.gas << " 입니다.\n";
	cout << "car2의 차량 번호는 " << car1.num << " 이고 연료량은 " << car1.gas << " 입니다.\n";

	car2 = car1;

	cout << "car2의 차량 번호는 " << car1.num << " 이고 연료량은 " << car1.gas << " 입니다.\n";

	return 0;
}