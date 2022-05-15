#include<iostream>
using namespace std;
int main()
{
int t,c;
cin>>t;
while(t--)
{
    cin>>c;
    int dp[c+1],i;
    dp[0]=0;
    dp[1]=2;
    for(i=2;i<c+1;i++)
    {
        dp[i]=(i*2+i-1+dp[i-1])%1000007;
    }
    cout<<dp[c]<<endl;
}
return 0;
}