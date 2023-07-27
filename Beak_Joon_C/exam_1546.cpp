#include<iostream>
using namespace std;


int main() {
	double avg = 0;
	int n;
	int sum = 0, max = 0;
	int arr[1000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	avg = 100.0 * sum / max / n;
	cout << avg;
}