#include <iostream>
using namespace std;

int main() {
	const int num = 5;
	int i, j, s, t;
	int test[num];
	cout << num << " 명의 점수를 입력하십시오.\n";
	for (i = 0; i < num; i++) {
		cin >> test[i];
	}

	for (s = 0; s < num - 1; s++) {
		for (t = s + 1; t < num; t++) {
			if (test[t] > test[s]) {
				int tmp = test[t];
				test[t] = test[s];
				test[s] = tmp;
			}
		}
	}

	for (j = 0; j < num; j++) {
		cout << j + 1 << " 번째 사람의 점수는 " << test[j] << "입니다.\n";
	}

	return 0;
}