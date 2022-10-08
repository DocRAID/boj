#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ap1, ap2, oran1, oran2;
    cin >> ap1 >> oran1 >> ap2 >> oran2;
    ap1+=oran2;
    ap2+=oran1;
    cout << min(ap1, ap2);
}