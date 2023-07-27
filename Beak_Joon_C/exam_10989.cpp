#include<stdio.h>
#include<iostream>

#define size 10001

using namespace std;
int cnt[size] = {0, };


int main() {
	int N, num;
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> num;
		cnt[num] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= cnt[i]; j++)
		{
			cout << i << "\n";
		}
	}
}