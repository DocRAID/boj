#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N,K;
    std::cin>>N>>K;
    int ans=0;
    for(int i=1;i<=K;i++)
    {
        std::string s = std::to_string((i*N));
        std::reverse(s.begin(),s.end());
        int tmp = stoi(s);
        ans=std::max(ans,tmp);
    }
    std::cout<<ans;
}