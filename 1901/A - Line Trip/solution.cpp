#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,x;
        std::cin>>n>>x;
        int arr[n];
        int dif=0;
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
        dif=arr[0];
        for(int i=1;i<n;i++)
        {
            int temp=arr[i]-arr[i-1];
            if(dif<temp)
            dif=temp;
        }
        int temp=2*(x-arr[n-1]);
        if(dif<temp)
        dif=temp;
        std::cout<<dif<<std::endl;
    }
}