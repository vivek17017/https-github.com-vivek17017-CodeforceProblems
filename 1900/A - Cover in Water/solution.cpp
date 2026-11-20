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
        int dot=0;
        int continu=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                dot++;
                continu++;
            }
            else
            continu=0;
            if(continu==3)
            break;
        }
        if(continu==3)
        {
            res=2;
            std::cout<<res<<std::endl;
        }
        else
        {
            res=dot;
            std::cout<<res<<std::endl;
        }
    }
}