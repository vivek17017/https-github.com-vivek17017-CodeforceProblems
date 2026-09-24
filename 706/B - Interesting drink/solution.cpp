#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>shop(n);
    for(int i=0;i<n;i++)
    {
        cin>>shop[i];
    }
    sort(shop.begin(),shop.end());
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        int ans=upper_bound(shop.begin(),shop.end(),m)-shop.begin();
        cout<<ans<<endl;
        
    }
    
    
} 