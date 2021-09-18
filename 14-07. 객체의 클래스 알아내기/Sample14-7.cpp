#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle {
protected:
	int speed;
public:
	void setSpeed(int s);
	virtual void show() = 0;
};

class Car : public Vehicle {
protected:
	int num;
	double gas;
public:
	Car(int n, double g);
	void show();
};

class Plane : public Vehicle {
private:
	int flight;
public:
	Plane(int f);
	void show();
};

void Vehicle::setSpeed(int s) {
	speed = s;
	cout << "�ӵ��� " << speed << "�� �����߽��ϴ�.\n";
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "���� ��ȣ�� " << num << "�̰�, ���ᷮ�� " << gas << "�� �ڵ����� ����������ϴ�.\n";
}

void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�.\n";
	cout << "���ᷮ�� " << gas << "�Դϴ�.\n";
	cout << "�ӵ��� " << speed << "�Դϴ�.\n";
}

Plane::Plane(int f) {
	flight = f;
	cout << "����� ��ȣ�� " << flight << "�� ����Ⱑ ����������ϴ�.\n";
}

void Plane::show() {
	cout << "����� ��ȣ�� " << flight << "�Դϴ�.\n";
	cout << "�ӵ��� " << speed << "�Դϴ�.\n";
}

int main() {
	int i;

	Vehicle* pVc[2];
	Car car1(1234, 20.5);
	Plane pln1(232);

	pVc[0] = &car1;
	pVc[1] = &pln1;

	for (i = 0; i < 2; i++) {
		if (typeid(*pVc[i]) == typeid(Car)) {
			cout << (i + 1) << "��° ��ü�� " << typeid(Car).name() << "�� ��ü�Դϴ�.\n";
		}
		else {
			cout << (i + 1) << "��° ��ü�� " << typeid(Car).name() << "�� ��ü�� �ƴմϴ�.\n";
			cout << typeid(*pVc[i]).name() << "�� ��ü�Դϴ�.\n";
		}
	}

	return 0;
}