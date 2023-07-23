#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (j = 1; j < i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}