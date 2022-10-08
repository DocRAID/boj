#include<iostream>
#include<map>
int main() {
    std::string input;
    std::cin>>input;
    std::map <int,int>mp;
    for(int i=0;i<input.length();i++){
        if(input[i]=='9'||input[i]=='6'){
            mp[6]+=1;
        }
        else{
            mp[input[i]]+=2;
        }
    }
    int max=0;
    for(auto i:mp){
        if(i.second>=max){
            max=i.second;
        }
    }
    std::cout<<(max%2==0?max/2:max/2+1);

}