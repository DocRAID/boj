#include <iostream>
int main()
{
    int num1;
    std::cin >> num1;
    char arr[num1];
    std::cin >> arr;
    int sum = 0;
    for(int i=0; i<num1; i++)
    {
        sum += arr[i] - '0';   
    }
    std::cout<<sum<<std::endl;
    return 0;
}