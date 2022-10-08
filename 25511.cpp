#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v(n);
	v[0].first=-1;
	for(int i=0;i<n-1;i++){
		int t1,t2;
		cin>>t1>>t2;
		v[t2].first=t1;
	}
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v[i].second = t;
	}
	int height=0;
	for(int i=0;i<n;i++){
		if(v[i].second==k){
			int p = v[i].first;
			while(p!=-1){
				//cout<<p;
				p = v[p].first;
				height++;					
			}
		}
	}
	cout<<height;
	
}