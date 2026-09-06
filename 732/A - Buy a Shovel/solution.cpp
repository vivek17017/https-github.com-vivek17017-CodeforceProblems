#include<iostream>
int main()
{
    int k,r;
    std::cin>>k>>r;
    int i=1;
    while(true)
    {
        int sum=i*k;
        if(sum%10==0 || sum%10==r)
        break;
        i++;
    }
    std::cout<<i;
}