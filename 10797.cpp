#include<iostream>
#include<stdio.h>
int main() {
	int day, car[5];
	std::cin>>day;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (day == car[i]) cnt++;
	}
	std::cout<<cnt;
}