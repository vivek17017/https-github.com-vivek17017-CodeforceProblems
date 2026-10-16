#include<iostream>
int main()
{
    int x;
    std::cin>>x;
    int res=0;
    while(x)
    {
        if(x%2==0)
        {
            x=x/2;
        }
        else
        {
            res++;
            x=x-1;
            x=x/2;
        }
    }
    std::cout<<res;
}