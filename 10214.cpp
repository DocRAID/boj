#include <iostream>
int main() {
    int n,y,k, Ysum = 0, Ksum = 0;
    std::cin >> n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<9;j++)
        {
            std::cin>>y>>k;
            Ysum+=y;
            Ksum+=k;
        }
        if (Ysum > Ksum)
        {
            std::cout<<"Yonsei"<<'\n';
        }
        else if (Ysum == Ksum)
        {
            std::cout<<"Draw"<<'\n';
        }
        else if (Ysum < Ksum)
        {
            std::cout<<"Korea"<<'\n';
        }
        Ysum = 0;
        Ksum = 0;
    }
}



