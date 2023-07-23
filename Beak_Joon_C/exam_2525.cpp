#include<stdio.h>

int main() {
	int h, m, load;
	scanf("%d %d %d", &h, &m, &load);

	h += load / 60;
	m += load % 60;

	if (m >= 60) {
		h++;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}
	printf("%d %d", h, m);

	return 0;
}