#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a,b;
        std::cin>>a>>b;
        int n=(a+b)/2;
        n=(n-a)+(b-n);
        std::cout<<n<<std::endl;
    }
}