#include<iostream>
using namespace std;


int main() {
	int a, b;

	cin >> a;	//ù��° ���� �Է�
	cin >> b;	//�ι�° ���� �Է�
	
	cout << a * (b % 10) << "\n";			//1�� �ڸ� ��� ���
	cout << a * (b % 100 / 10) << "\n";		//10�� �ڸ� ��� ���
	cout << a * (b / 100)	<< "\n";		//100�� �ڸ� ��� ���
	cout << a * b	<< "\n";				//���� ��� ���
	
	return 0;
}