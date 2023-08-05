#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n, m, sum=0;
	cin >> n >> m;

	sum = n - m;

	if (sum < 0) {
		sum *= -1;
	}
	cout << sum;
}