#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int p,n;
	cin>>p>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int cnt=0;
	for(int i=0;i<v.size();i++){
		if(p<200){
			p+=v[i];
			cnt++;	
		}
		else break;
	}
		
	cout<<cnt;
}