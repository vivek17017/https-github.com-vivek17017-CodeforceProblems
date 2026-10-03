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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
    }
}