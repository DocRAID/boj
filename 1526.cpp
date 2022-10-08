#include<iostream>
using namespace std;
bool check(int n){
	while (n){
		if (n%10==4||n%10==7){
             n /= 10;   
        }
		else{
             return false;   
        }
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int ans;
	for(int i=n;i>=4;i--){
		if(check(i)){
			ans = i;
			break;
		}
	}
	cout<<ans<<endl;
}