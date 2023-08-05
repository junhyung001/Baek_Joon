#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	int cnt[9];
	char str[1000][1000];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cnt[i] >> str[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < cnt[i]; j++)
			cout << str[i];
		cout << "\n";
	}
}