#include<iostream>
#include<deque>
#include<queue>
std::deque<int> qu;
std::queue<int> arr;
int ff(){
    std::deque<int> test=qu;
    int count=0;
    for(;1;){
        if(arr.front()==test.front()){
            break;
        }
        else{
            test.push_back(test.front());
            test.pop_front();
            count++;
        }
    }
    return count;
}
void realf(){
    for(;1;){
        if(arr.front()==qu.front()){
            break;
        }
        else{
            qu.push_back(qu.front());
            qu.pop_front();
        }
    }
}
int fb(){
    std::deque<int> test=qu;
    int count=0;
    for(;1;){
        if(arr.front()==test.front()){
            break;
        }
        else{
            test.push_front(test.back());
            test.pop_back();
            count++;
        }
    }
    return count;
}
void realb(){
    for(;1;){
        if(arr.front()==qu.front()){
            break;
        }
        else{
            qu.push_front(qu.back());
            qu.pop_back();
        }
    }
}
int main(){
    int n,find,input;
    std::cin>>n>>find;
    for(int i=0;i<find;i++){
        std::cin>>input;
        arr.push(input);
    }
    for(int i=1;i<=n;i++){
        qu.push_back(i);
    }
    int cnt=0;
    for(;!arr.empty();){
        if(arr.front()==qu.front()){
            arr.pop();
            qu.pop_front();
        }else{
            int f=ff(),b=fb();
            if(f<b){
                cnt+=f;
                realf();
            }else{
                cnt+=b;
                realb();
            }
        }
    }
    std::cout<<cnt;

}