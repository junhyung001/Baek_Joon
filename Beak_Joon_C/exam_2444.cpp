#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { /*줄 출력*/
		for (int j = 1; j <= n - i; j++) /*공백 출력*/
			printf(" ");
		for (int k = 1; k < 2 * i; k++) /*별 출력*/
			printf("*");
		printf("\n");
	}

	for (int i = n - 1; i > 0; i--){ /*줄 출력*/
		for (int j = n - i; j > 0; j--)/*공백 출력*/
			printf(" ");
		for (int k = 2 * i - 1; k > 0; k--) /*별 출력*/
			printf("*");
		printf("\n");
	}
	return 0;
}