#include<iostream>
#include<string>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int i=0;
        int l=n;
        while(l)
        {
            if(l==1||s[i]==s[n-1-i])
            break;
            else
            l=l-2;
            i++;
        }
        std::cout<<l<<std::endl;
        
    }
}