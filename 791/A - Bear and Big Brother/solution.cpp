#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    while(a<=b)
    {
        res+=1;
        a=a*3;
        b=b*2;
    }
    cout<<res;
}