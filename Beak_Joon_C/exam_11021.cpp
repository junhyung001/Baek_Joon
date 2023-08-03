#include<iostream>
using namespace std;

int main() {
	int sum[100];
	int n, a[1000], b[1000];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sum[i] = a[i] + b[i];
	}
	for (int i = 0; i < n; i++) {
		printf("Case #%d: %d + %d = %d\n", i+1,a[i], b[i], sum[i]);
	}
}