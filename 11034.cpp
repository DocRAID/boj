#include <iostream>

#include<vector>

#include<algorithm>

using namespace std;

vector<string> v;

int main() {

	int a, b, c;	while (cin >> a >> b >> c) {

		int cnt = 0;

		while (true) {

			if (b - a == 1 && c - b == 1) break;

			int lgap = (b - a);

			int rgap = (c - b);

			if (lgap < rgap) {

				a = b;

				b = b + 1;

			}

			else {

				c = b;

				b = b - 1;

			}

			cnt++;

		}

		cout << cnt<<"\n";

	}

	return 0;

}