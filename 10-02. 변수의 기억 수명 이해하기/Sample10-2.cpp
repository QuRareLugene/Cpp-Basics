#include <iostream>
using namespace std;

void func();

int a = 0;

int main() {
	int i;

	for (i = 0; i < 5; i++) {
		func();
	}
	int b = 1;

	return 0;
}

void func() {
	int b = 0;
	static int c = 0;//정적 변수와 같은 수명을 가진 지역변수

	cout << "변수 a는 " << a << ", 변수 b는 " << b << ", 변수 c는 " << c << "입니다.\n";
	a++;
	b++;
	c++;
}