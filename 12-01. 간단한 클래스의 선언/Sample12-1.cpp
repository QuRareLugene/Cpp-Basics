#include <iostream>
using namespace std;

class Car {
public:
	int num;
	double gas;
	void show();
};

void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�.\n";
}