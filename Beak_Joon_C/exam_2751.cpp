#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    
    int n, tmp;

    cin >> n;

    int* arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    std::sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}