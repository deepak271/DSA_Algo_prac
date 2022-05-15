#include<iostream>
using namespace std;
bool isp(int m,int a[],int n,int k)
{
  int p=1,i,pr=0;
  for(i=0;i<n;i++)
  {
      if(a[i]>m)
     return false;
   if(pr+a[i]>m)
   {
       p++;
       pr=a[i];
          if(p>k)
          return false;
   }
   else 
   {
       pr+=a[i];
   }
  }
 return true;
}
int main()
{
    int t,m,k;
    cin>>t;
    while(t--)
    {
        cin>>m>>k;
        int a[m],i,l,h,mid,s=0,ans=0;
        for(i=0;i<m;i++)
        {cin>>a[i];
         s+=a[i];}
         l=0;h=s;
         while(l<=h)
         {
             mid=l+(h-l)/2;
             if(isp(mid,a,m,k))
             {
                ans=mid;
                h=mid-1;
             }
             else l=mid+1;
         }
    int pr=0;  
    cout<<ans<<"e ";   
      for(i=0;i<m;i++)
  {
      if(a[i]>m)
     return false;
   if(pr+a[i]>m)
   {
       pr=a[i];
          if(p>k)
          return false;
   }
   else 
   {
       pr+=a[i];
   }
    }
return 0;
}