#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt=0;
	int a[1000], b[1000];
	for(int i=0; ; i++) {
		cin >> a[i] >> b[i];
		if (a[i] == 0 && b[i] == 0)
			break;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		if (a[i] > b[i]) {
			cout << "Yes"<< "\n";
		}
		else {
			cout << "No" << "\n";
		}
	}
}