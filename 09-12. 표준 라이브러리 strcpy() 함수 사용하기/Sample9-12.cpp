#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main() {
	char str0[20];
	char str1[10];
	char str2[10];

	strcpy(str1, "Hello");
	strcpy(str2, "Goodbye");
	strcpy(str0, str1);
	strcat(str0, str2);

	cout << "배열 str1은 " << str1 << "입니다.\n";
	
	cout << "배열 str2는 " << str2 << "입니다.\n";

	cout << "연결하면 " << str0 << "입니다.\n";

	return 0;
}