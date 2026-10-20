#include<iostream>
#include<string>
int main()
{
    std::string s;
    std::string res="";
    std::cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        res+='0';
        else if(s[i]=='-' &&s[i+1]=='.')
        {
            res+='1';
            i++;
        }
        else
        {
            res+='2';
            i++;
        }
    }
    std::cout<<res;
}