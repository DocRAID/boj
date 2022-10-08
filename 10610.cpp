#include<iostream>
#include<algorithm>
#include<string>
bool cmp(char a,char b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    std::string a;
    int len,is=0,cnt=0,index,arr[6];
    std::cin>>a;
    len=a.length();
    for(int i=0;i<len;i++){
        index=a[i]-'0';
        if(index==0){
            is++;
        }
        cnt+=index;
    }
    if(is==0||cnt%3!=0||is==len){
        std::cout<<-1;
    }
    else{
        sort(a.begin(),a.end(),cmp);
        std::cout<<a;
    }
}