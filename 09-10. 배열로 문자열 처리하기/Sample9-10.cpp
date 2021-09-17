#include <iostream>
using namespace std;

int main() {
	int i;
	char str[] = "Hello";

	cout << "Hello\n";

	for (i = 0; str[i] != '\0'; i++) {
		cout << str[i] << '*';
	}
	cout<<'\n';

	return 0;
}