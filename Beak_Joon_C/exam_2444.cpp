#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { /*�� ���*/
		for (int j = 1; j <= n - i; j++) /*���� ���*/
			printf(" ");
		for (int k = 1; k < 2 * i; k++) /*�� ���*/
			printf("*");
		printf("\n");
	}

	for (int i = n - 1; i > 0; i--){ /*�� ���*/
		for (int j = n - i; j > 0; j--)/*���� ���*/
			printf(" ");
		for (int k = 2 * i - 1; k > 0; k--) /*�� ���*/
			printf("*");
		printf("\n");
	}
	return 0;
}