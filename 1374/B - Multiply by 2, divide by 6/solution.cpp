#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        int move=0;
        std::cin>>n;
        if(n==1)
        {
            std::cout<<move<<std::endl;
            continue;
        }
        
        if(n%3!=0)
        std::cout<<"-1"<<std::endl;
        else
        {
            while(n%3==0)
            {
                if(n%6==0)
                {
                    n=n/6;
                    move++;
                }
                else
                {
                    n=n*2;
                    move+=1;
                }
            }
            if(n==1)
            std::cout<<move<<std::endl;
            else
            std::cout<<"-1"<<std::endl;
        }
    }
    
}