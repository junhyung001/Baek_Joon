/*
	1사분면 -> 양수 양수
	2사분면 -> 음수 양수
	3사분면 -> 음수 음수
	4사분면 -> 양수 음수
*/
#include<iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	
	if (a > 0 && b > 0) {
		cout << "1";
	}
	else if (a < 0 && b > 0) {
		cout << "2";
	}
	else if (a < 0 && b < 0) {
		cout << "3";
	}
	else if (a > 0 && b < 0) {
		cout << "4";
	}
}