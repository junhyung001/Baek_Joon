#include<iostream>
using namespace std;

int main() {
	int sum[100];
	int n, a, b;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum[i] = a + b;
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << "\n";
	}
}