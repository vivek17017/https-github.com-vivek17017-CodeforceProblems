#include<iostream>
#include<vector>
#include <algorithm> 
int main()
{
    int t,n,k;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        std::cin>>n>>k;
        std::vector<int>arr(n);
        for(int j=0;j<n;j++)
        std::cin>>arr[j];
        if(k>1)
        std::cout<<"YES"<<std::endl;
        else
        {
            if(std::is_sorted(arr.begin(),arr.end()))
            std::cout<<"YES"<<std::endl;
            else
            std::cout<<"NO"<<std::endl;
        }
    }
}  