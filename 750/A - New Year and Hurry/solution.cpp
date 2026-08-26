#include<iostream>
int main()
{
    int n,k;
    std::cin>>n>>k;
    int h=240-k;
    int question=0;
    int i=1;
    while(5*i<=h&&n>0)
    {
        question++;
        n--;
        h-=5*i;
        i++;
        
    }
    std::cout<<question;
}