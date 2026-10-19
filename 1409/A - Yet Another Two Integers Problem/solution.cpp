#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long a,b;
        std::cin>>a>>b;
        long long res=0;
        if(a>b)
        {
            res=a-b;
            if(res%10==0)
            res=res/10;
            else
            res=res/10+1;
        }
        else if(a<b)
        {
            res=b-a;
            if(res%10==0)
            res=res/10;
            else
            res=res/10+1;
        }
        else
        res=0;
        std::cout<<res<<std::endl;
    }
}