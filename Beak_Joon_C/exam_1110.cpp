#include<iostream>
using namespace std;


int main() {
	int a, b, n, res;
	int cnt = 0;
	int sum = 0;

	cin >> n;

	a = n / 10;
	b = n % 10;
	while (true){		
		sum = a + b;
		a = b;
		b = sum % 10;

		if (n == res) {
			break;
		}
	}

	cout << cnt;
	return 0;
}