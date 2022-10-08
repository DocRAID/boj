#include <iostream>
#include <string.h>
using namespace std;


int main() {
	char str[501];
	cin.getline(str, 501);
	while (strcmp(str, "END") != 0) {
		int length = strlen(str);
		while (length--) {
			cout << str[length];
		}
		cout<<'\n';
		cin.getline(str, 501);
	}
}