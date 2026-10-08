#include<iostream>
#include<vector>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    int i=1;
    while(i<n)
    {
        if(a[i]-a[i-1]<=1)
        i++;
        else
        break;
    }
    if(i==n)
    std::cout<<"YES"<<std::endl;
    else
    std::cout<<"NO"<<std::endl;
    }
}