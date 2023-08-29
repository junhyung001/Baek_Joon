#include<stdio.h>

int main() {
	int a, b, c;
	int temp;
	

	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	else if (b < c) {
		temp = b;
		b = c;
		c = temp;
	}
	
	printf("%d", b);
}