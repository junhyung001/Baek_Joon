#include<iostream>
using namespace std;


int main() {
	int a, b;

	cin >> a;	//첫번째 숫자 입력
	cin >> b;	//두번째 숫자 입력
	
	cout << a * (b % 10) << "\n";			//1의 자리 결과 출력
	cout << a * (b % 100 / 10) << "\n";		//10의 자리 결과 출력
	cout << a * (b / 100)	<< "\n";		//100의 자리 결과 출력
	cout << a * b	<< "\n";				//최종 결과 출력
	
	return 0;
}