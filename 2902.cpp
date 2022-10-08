
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int i = 0;
	int cnt = 0;
	char Alg[101];
	char Short[101];
	cin.getline(Alg, 101);

	while (Alg[i] ==45 || (Alg[i]>=65 && Alg[i]<=122))
	{
		if (Alg[i] >= 65 && Alg[i] <= 90)
		{
			Short[cnt] = Alg[i];
			cnt++;
		}
		i++;
	}
	for (int j = 0; j < cnt; j++)
	{
		cout << Short[j];
	}
}