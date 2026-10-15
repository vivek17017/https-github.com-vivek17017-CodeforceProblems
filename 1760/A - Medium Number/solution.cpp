#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if((a>b||a>c)&&(a<c||a<b))
        std::cout<<a<<std::endl;
        else if((b>c||b>a)&&(b<a||b<c))
        std::cout<<b<<std::endl;
        else
        std::cout<<c<<std::endl;
    }
    
    
} 