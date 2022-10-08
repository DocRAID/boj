#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
int answer;
char s[256];

int main()
{

	while (1)
	{
		answer = 0;
		
		std::cin.getline(s, 256);

		if (s[0]=='#') break;

		for (int i = 0; i < strlen(s) - 1; i++)
		{
			if (s[i] == 'a') answer++;
			if (s[i] == 'e') answer++;
			if (s[i] == 'i') answer++;
			if (s[i] == 'o') answer++;
			if (s[i] == 'u') answer++;
			if (s[i] == 'A') answer++;
			if (s[i] == 'E') answer++;
			if (s[i] == 'I') answer++;
			if (s[i] == 'O') answer++;
			if (s[i] == 'U') answer++;
		}
		std::cout<<answer<<'\n';
	}
}