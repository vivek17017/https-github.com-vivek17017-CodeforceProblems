#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a==b)
        std::cout<<c<<std::endl;
        if(b==c)
        std::cout<<a<<std::endl;
        if(a==c)
        std::cout<<b<<std::endl;
        
    }
}