#include<iostream>
int main()
{
    long long n,m;
    std::cin>>n>>m;
    long long res=0;
    long long cur=1;
    while(m--)
    {
        long long a;
        std::cin>>a;
        if(a>=cur)
        {
            res=res+(a-cur);
            cur=a;
        }
        else
        {
            res=res+(n-cur);
            res=res+a;
            cur=a;
        }
       
    }
    std::cout<<res;
}