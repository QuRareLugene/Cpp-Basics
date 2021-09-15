#include <iostream>
using namespace std;

int main() {
	int num1 = 5;
	int num2 = 4;
	double div;

	div = num1 / num2;

	cout << "5/4는 " << div << "입니다.\n";

	div = double(num1) / double(num2);

	cout << "5/4는 " << div << "입니다.\n";
	return 0;
}