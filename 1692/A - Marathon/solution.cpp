#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
    int a,b,c,d,res=0;
    std::cin>>a>>b>>c>>d;
    if(a<b)
    res++;
    if(a<c)
    res++;
    if(a<d)
    res++;
    std::cout<<res<<std::endl;
    }
    
}