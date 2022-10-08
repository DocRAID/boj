#include<iostream>
#include<vector>
#include<algorithm>
std::vector<int> gold(){ 
    int n=10001;
    std::vector<int> primes;
    std::vector<bool> state(n+1,true);
    state[1]=false;
    for(int i=2;i*i<=n;i++){
        if(!state[i]) continue;
        for(int j=i*i;j<=n;j+=i){
            state[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(state[i]) primes.push_back(i);
    }
    return primes;
}
int main() {
    int n;
    std::vector<int> prime = gold();
    std::cin>>n;
    for(int i=0;i<n;i++){
        int input;
        std::cin>>input;
        int a,b;
        for(int i=2;i<=input;i++){
            if(i>input-i){
                break;
            }
            if(std::binary_search(prime.begin(),prime.end(),i)&&std::binary_search(prime.begin(),prime.end(),input-i)){
                a=i;
                b=input-i;
            }
        }
        std::cout<<a<<' '<<b<<'\n';
    }
}