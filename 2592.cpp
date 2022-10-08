#include<iostream>
#include<map>
int main(){
    std::map<int,int>mp;
    int sum=0,input,max=0,maxindex;
    for(int i=0;i<10;i++){
        std::cin>>input;
        sum+=input;
        mp[input]++;
        if(mp[input]>max){
            max=mp[input];
            maxindex=input;
        }
    }
    std::cout<<sum/10<<"\n"<<maxindex;
    
    
}