#include<iostream>
#include<vector>
int main()
{
    int n;
    std::cin>>n;
    int s=0,d=0;
    std::vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>vec[i];
    }
    int l=0,r=n-1;
    
    while(l<=r)
    {
        if(l<=r){
        if(vec[l]<=vec[r])
        {s+=vec[r];r--;}
        else
        {s+=vec[l];l++;}
        }
        if(l<=r){
        if(vec[l]<=vec[r])
        {d+=vec[r];r--;}
        else
        {d+=vec[l];l++;}
        }
    }
    std::cout<<s<<" "<<d;
}