#include<iostream>
int main() {
    int a,b;
    int cnt=1;
    std::cin>>a>>b;
    int before=b;
    for(;1;){
        if(a==b){
            break;
        }
        else if(b%2==0){
            b/=2;
        }else if(b%10==1){
            b=b/10;
        }
        if(before == b) {
            cnt=-1;
            break;
        }
        before=b;
        cnt++;
    }
    std::cout<<cnt;
}