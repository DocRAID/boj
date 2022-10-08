#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n,k,i;
	cin >> n>>k;
	queue<int> s;
	for (int i=1; i<=n; i++) {		
		s.push(i);
	}
	cout << "<";
	i = 1;
	while (n-1) {			
		
		if (i % k != 0) {		
			s.push(s.front());
			s.pop();
		}
		else {				
			cout << s.front() << ", ";
			s.pop();
			n--;				
		}
		i++;			

	}
	cout << s.front() << ">";		
	return 0;
}