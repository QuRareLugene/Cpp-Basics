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
	cout << "������ȣ�� " << n << "�̰� ���ᷮ��" << g << " �� �ڵ����� ����������ϴ�.";
}

void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�.\n";
	cout << "���ᷮ�� " << gas << "�Դϴ�.\n";
}

int main() {
	Car car 1;
	Car car2(1234, 20.5);

	return 0;
}