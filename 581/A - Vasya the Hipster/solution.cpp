#include<iostream>
int main()
{
    int a,b;
    std::cin>>a>>b;
    int max,min;
    if(a>b)
    max=a;
    else
    max=b;
    if(a<b)
    min=a;
    else
    min=b;
    std::cout<<min<<" "<<(max-min)/2;
}