#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int min=1001;
	int solv=-1;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(a<=b){
			solv=b;
		}
		if(min>solv&&solv>=0){
			min=solv;
		}
	}
	if(min==1001){
		cout<<solv;
	}	
	else cout<<min;
}
