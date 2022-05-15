#include<iostream>
using namespace std;
long long int gcdt(int a,int b)
{
    if(b==0)
    return a;
    else return gcdt(b,a%b);
}
int main()
{
   long long  int a,b,t,g;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
       g=gcdt(a,b);
       cout<<b/g<<" "<<a/g<<endl;
    }
return 0;
}