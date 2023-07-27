#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int cnt, maxValue = -1, input;
	
	for(int i=0; i<9; i++) {
		cin >> input;
		if (input > maxValue) {
			maxValue = input;
			cnt = i;
		}
	}

	cout << maxValue << "\n";
	cout << cnt+1 << "\n";
}