#include <iostream>
#include <vector>
int main()
{
    std::vector<char> vt;
    vt.push_back('S');
    vt.push_back('c');
    vt.push_back('i');
    vt.push_back('C');
    vt.push_back('o');
    vt.push_back('m');
    vt.push_back('L');
    vt.push_back('o');
    vt.push_back('v');
    vt.push_back('e');
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        char tmp = vt.front();
        vt.erase(vt.begin());
        vt.push_back(tmp);
    }
    for(auto i:vt){
        std::cout<<i;
    }
}
