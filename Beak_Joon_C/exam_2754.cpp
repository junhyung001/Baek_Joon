#include<iostream>
using namespace std;

int main() {
	string str;
	double result = 0;

	cout << fixed;		//�Ҽ����� �������� ǥ���ϴ� �ڵ�
	cout.precision(1);	//�Ҽ��� �� 6�ڸ����� ǥ�� �����ϰ� ������ִ� �ڵ�
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