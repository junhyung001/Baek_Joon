#include<iostream>
using namespace std;

int main() {
	int n[100000];
	int sum = 0;
	int res;

	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		sum += n[i] * n[i];
	}
	cout << sum % 10;
}