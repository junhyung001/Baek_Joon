#include<iostream>
using namespace std;

int main() {
	string str;
	double result = 0;

	cout << fixed;		//소수점을 고정시켜 표현하는 코드
	cout.precision(1);	//소수점 밑 6자리까지 표현 가능하게 만들어주는 코드
	cin >> str;

	switch (str[0]){
	case 'A':
		result += 4.0;
		break;
	case 'B':
		result += 3.0;
		break;
	case 'C':
		result += 2.0;
		break;
	case 'D':
		result += 1.0;
		break;
	}

	switch (str[1]){
	case '+':
		result += 0.3;
		break;
	case '-':
		result -= 0.3;

	}
	cout << result;
}