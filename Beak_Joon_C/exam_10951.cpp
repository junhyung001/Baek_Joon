#include<iostream>
using namespace std;

int main() {
	int a, b, i = 0;
	int sum[1000];

	while (true) {
		cin >> a >> b;
		sum[i] = a + b;
	}
	for (int j = 0; j < i; j++) {
		cout << sum[j] << "\n";
	}
}