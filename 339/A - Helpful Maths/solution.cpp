#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='+')
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    s="";
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        s+=v[i];
        else
        s=s+"+"+v[i];
    }
    cout<<s;
    
}