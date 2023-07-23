#include <stdio.h>

int main() {
    int array[] = { 64, 32, 16, 8, 4, 2, 1 };
    int count = 0;
    int x;

    scanf("%d", &x);


    for (int i = 0; i < 7; i++) {
        if (x >= array[i]) {
            count++;
            x -= array[i];
        }

        if (x == 0) {
            break;
        }
    }
    printf("%d", count);
}