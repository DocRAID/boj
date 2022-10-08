#include<iostream>
#include<algorithm>
using std::string;
string arr[20000];
int policy(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }else{
        return a.length()<b.length();
    }
}
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::sort(arr,arr+n,policy);
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            std::cout<<arr[i]<<"\n";
        }
    }
}