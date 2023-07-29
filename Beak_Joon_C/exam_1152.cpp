#include<string>
#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	int cnt=1;
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ')
		cnt--;
	if (str[str.length() - 1] == ' ')
		cnt--;

	cout << cnt;
}