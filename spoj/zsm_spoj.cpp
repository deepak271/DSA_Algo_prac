#include<iostream>
using namespace std;
long long int fnd(long long int a,long long int b,long long int m)
{
  if(b==0)
  return 1;
  else if(b%2==0)
  return fnd((a*a)%m,b/2,m);
 else return (a*fnd((a*a)%m,(b-1)/2,m))%m;
}
int main()
{
    long long int n,k,s;
    long long int m=10000007;
    cin>>n>>k;
    while(n!=0 && k!=0)
    {
         s=(2*fnd(n-1,k,m)+fnd(n,k,m)+2*fnd(n-1,n-1,m)+fnd(n,n,m))%m; 
         cout<<s<<endl;
         cin>>n>>k;
    }
  return 0;
}