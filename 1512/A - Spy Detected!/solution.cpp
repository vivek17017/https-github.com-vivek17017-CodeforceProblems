#include<iostream>
#include<unordered_map>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        int a[n];
        int index;
        std::unordered_map<int,int>map;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            map[a[i]]++;
            if(map[a[i]]==1)
            index=i+1;
        }
        if(map[a[0]]==1)
        index=1;
        
       
        std::cout<<index<<std::endl;
    }
}