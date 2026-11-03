#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int i,j,r,c,res=0;
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=10;j++)
            {
                char ch;
                std::cin>>ch;
                if(ch=='X')
                {
                    c=j;
                    if(c>5)
                    c=11-c;
                    r=i;
                    if(r>5)
                    r=11-r;
                    if(c>r)
                    res+=r;
                    else
                    res+=c;
                }
            }
        }
        std::cout<<res<<std::endl;
    }
}