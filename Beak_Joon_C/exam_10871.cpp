#include<iostream>
using namespace std;

int main() {
	int arr[10000];
	int res[10000];
	int n, x, cnt=0;

	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int m;
		scanf(" %d", &m);
		arr[i] = m;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			cnt++;
			if (cnt < x)
				printf("%d ", arr[i]);
		}
	}
}