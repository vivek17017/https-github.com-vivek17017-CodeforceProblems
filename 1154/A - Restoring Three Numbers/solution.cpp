#include<iostream>
int main()
{
    int a,b,c,sum;
    std::cin>>sum;
    std::cin>>a;
    if(sum<a)
    {
        int temp=sum;
        sum=a;
        a=temp;
    }
    std::cin>>b;
    if(sum<b)
    {
        int temp=sum;
        sum=b;
        b=temp;
    }
    std::cin>>c;
    if(sum<c)
    {
        int temp=sum;
        sum=c;
        c=temp;
    }
    a=sum-a;
    b=sum-b;
    c=sum-c;
    std::cout<<a<<" "<<b<<" "<<c;
    
    
}