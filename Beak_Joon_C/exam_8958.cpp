#include<iostream>
#include<string>
using namespace std;

int OX(string& s) {
	int sum = 0, cnt = 0;
	
	for (char& v : s) {

		if (v == 'O') {
			cnt++;
			sum += cnt;
		}
		else {
			cnt = 0;
		}
	}
	return sum;
}

int main() {
	//stdio의 동기화를 끊어주는 코드
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);


	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		cout << OX(s) << "\n";	
	}
	return 0;
}