#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x, n, sum = 0;
	int a[1000000];
	int b[10];

	cin >> x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sum += a[i] * b[i];
	}
	if (sum == x)
		cout << "Yes";
	else
		cout << "No";
}