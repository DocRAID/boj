#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	if (N / 10 == 0) cout << N << '\n';
	else {
		int digit = 0;
		int x=N;
		while (x > 0) {
			x /= 10;
			digit++;
		}
		long long sum = 0;
		for (int i = 0; i <= digit - 2; i++) {
			sum += (9 * pow(10, i) * (i + 1));
		}
		long long cnt = 0;
		for (int i = 1 * pow(10, digit - 1); ; i++) {
			cnt++;
			if (N == i) {
				cout << sum + (cnt * digit) <<'\n';
				break;
			}
		}
	}


	return 0;
}