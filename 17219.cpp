#include <iostream>
#include <string>
#include <map>
int main(void)
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int N, M;
	std::cin >> N >> M;

	std::map<std::string, std::string> map;

	for (int i = 0; i < N; i++)
	{
		std::string site, password;
		std::cin >> site >> password;

		map[site] = password;
	}

	for (int i = 0; i < M; i++)
	{
		std::string site;
		std::cin >> site;

		std::cout << map[site] << "\n";
	}

	return 0;
}