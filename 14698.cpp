#include<iostream>
#include<queue>
void solv(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::priority_queue<long long,std::vector<long long>,std::greater<long long>> qu;
	long long a,input;
	std::cin>>a;
	for(long long i=0;i<a;i++){
		std::cin>>input;
		qu.push(input);
	}
	long long cnt=1;
	while(qu.size()>1){
		long long tmp1 = qu.top();
		qu.pop();
		long long tmp2 = qu.top();
		qu.pop();
		cnt *=(((tmp1%1000000007)*(tmp2%1000000007))%1000000007);
		qu.push(tmp1*tmp2);
		cnt%=1000000007;
//		std::cout<<"process:"<<tmp1<<' '<<tmp2<<' '<<index<<'\n';
	}
	std::cout<<cnt<<'\n';
}
int main(){
	std::ios_base :: sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	long long n;
	std::cin>>n;
	while(n--){
		solv();
	}
}