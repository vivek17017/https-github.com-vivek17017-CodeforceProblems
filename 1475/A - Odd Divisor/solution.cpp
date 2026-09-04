#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        std::cin>>n;
        if(n%2!=0)
        {
            std::cout<<"YES"<<std::endl;
        }
        else
        {
            while(n%2==0)
            {
                n=n/2;
            }
            if(n==1)
            std::cout<<"NO"<<std::endl;
            else
            std::cout<<"YES"<<std::endl;
        }
    }
    
}