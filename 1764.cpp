#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::map<std::string, int> ma;
    std::vector<std::string> vt;
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n+m; i++) {
        std::string str;
        std::cin >> str;
        ma[str]++;
        if (ma[str] > 1)
            vt.push_back(str);
    }
    sort(vt.begin(), vt.end());
    std::cout << vt.size() << '\n';
    for (int i=0;i<vt.size();i++){
    	std::cout << vt[i] << '\n';

	}
        

}