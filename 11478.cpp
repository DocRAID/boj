#include<iostream>
#include<map>
int main() {
    std::map<std::string,int>mp;
    std::string n;
    std::cin>>n;
    for(int i=0;i<n.length();i++){
        for(int j=1;j+i<n.length()+1;j++){
            mp[n.substr(i,j)]++;
            // std::cout<<n.substr(i,j)<<'\n';
        }
    }
    std::cout<<mp.size();

}