#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    unordered_map<char,int>m;
    for(char c:input)
    {
        m[c]++;
    }
    int count=m.size();
    if(count%2)
    {
        cout<<"IGNORE HIM!";
        
    }
    else
    cout<<"CHAT WITH HER!";
    
}