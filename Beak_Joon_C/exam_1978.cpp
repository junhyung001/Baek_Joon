#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, n;
	int res = 0;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 1; j <= a; j++) {
			if (a % j == 0) 
				cnt++;
		}
		if (cnt == 2)
			res++;
		cnt = 0;
	}
	cout << res;
}