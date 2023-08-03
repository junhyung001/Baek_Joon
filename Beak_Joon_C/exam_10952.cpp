#include<iostream>
using namespace std;

int main() {
	int a, b, i=0;
	int sum[1000];
	
	while (true){
		cin >> a >> b;
		sum[i] = a + b;
		if (a == 0 && b == 0) {
			break;
		}
		i++;
	}
	for (int j = 0; j < i; j++) {
		cout << sum[j] << "\n";
	}
}