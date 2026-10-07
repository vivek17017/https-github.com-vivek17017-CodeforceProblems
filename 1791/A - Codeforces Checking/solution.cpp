#include<iostream>
#include<string>
int main()
{
    int t;
    std::cin>>t;
    char c;
    std::string text="codeforces";
    while(t--)
    {
        std::cin>>c;
        if(text.contains(c))
        std::cout<<"YES"<<std::endl;
        else
        std::cout<<"NO"<<std::endl;
    }
}