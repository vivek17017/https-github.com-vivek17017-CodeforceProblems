#include<iostream>
 
int main()
{
    int n,m,a,b;
    std::cin>>n>>m>>a>>b;
    int sum1=n*a;
    int sum2=n/m*b+n%m*a;
    int sum3=(n/m+1)*b;
    int sum=std::min(sum1,std::min(sum2,sum3));
    std::cout<<sum;
    
}