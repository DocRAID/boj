#include<iostream>
#include<set>
int main(){
	std::set<int> st;
	std::set<int>::iterator iter;
	int n,max,cnt=0;
	std::cin>>max>>n;
	for(int i=2;i<=max;i++){
		st.insert(i);
	}
	for(int i=2;i<=max;i++){
		for(int j=1;j*i<=max;j++){
			iter = st.find(i*j);
			if(iter!=st.end()){
				cnt++;
				if(cnt==n){
					std::cout<<i*j;
					return 0;
				}
				st.erase(st.find(i*j));
			}
		}
	}
}