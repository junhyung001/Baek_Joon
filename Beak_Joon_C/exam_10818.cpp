#include<iostream>
using namespace std;

int main() {
	//stdio.h 연결 동기화 해제
	ios_base::sync_with_stdio(0);

	int n;
	int max = -1000001, min = 1000001;
	int input;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;

		if (input > max) {
			max = input;
		}
		if (input < min) {
			min = input;
		}
	}

	cout << min << ' ' << max;
}