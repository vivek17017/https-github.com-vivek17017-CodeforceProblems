#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        int a[n];
        int res=0,temp=0;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            if(a[i]==0)
            {
                temp++;
                if(temp>res)
                res=temp;
            }
            else
            temp=0;
        }
        std::cout<<res<<std::endl;
    }
}