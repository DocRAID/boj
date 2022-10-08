#include<iostream>
#include<vector>
#include<algorithm>
int main() {
    //1000000
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    for(;1;){
        std::vector<int>vt;
        long long n,m;
        std::cin>>n>>m;
        if(n==0&&m==0){
            break;
        }
        long long input;
        int cnt=0;
        for(int i=0;i<n;i++){
            std::cin>>input;
            vt.push_back(input);
        }
        for(int i=0;i<m;i++){
            std::cin>>input;
            if(std::binary_search(vt.begin(),vt.end(),input)){
                cnt++;
            }
        }
        std::cout<<cnt<<'\n';
    }

}