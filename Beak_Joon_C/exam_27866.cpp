#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	int n;

	cin >> str;
	cin >> n;

	cout << str[n - 1];
}