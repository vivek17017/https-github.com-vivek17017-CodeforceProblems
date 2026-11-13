#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int max=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    int t=0;
    for(int i=0;i<n;i++)
    {
        t=t+(max-arr[i]);
    }
    std::cout<<t;
}