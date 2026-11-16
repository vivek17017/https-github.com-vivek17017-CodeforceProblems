#include<iostream>
int main()
{
    int n,m;
    std::cin>>n>>m;
    int win=1;
    while(n>1&&m>1)
    {
        n--;
        m--;
        win=1-win;
    }
    if(win==1)
    {
        std::cout<<"Akshat";
    }
    else
    std::cout<<"Malvika";
}