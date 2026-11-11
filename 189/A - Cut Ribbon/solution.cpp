#include<iostream>
#include<vector>
int main()
{
    int n,a,b,c;
    std::cin>>n>>a>>b>>c;
    std::vector<int>vec(n+1,-10000);
    vec[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(i>=a && vec[i-a]!=-10000)
        vec[i]=std::max(vec[i],vec[i-a]+1);
        if(i>=b && vec[i-b]!=-10000)
        vec[i]=std::max(vec[i],vec[i-b]+1);
        if(i>=c && vec[i-c]!=-10000)
        vec[i]=std::max(vec[i],vec[i-c]+1);
    }
    std::cout<<vec[n];
}