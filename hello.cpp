#include <iostream>
using namespace std;
void merge(int a[],int l,int m,int r)
{ 
    int n1=m-l+1;
    int n2=r-m;
    int a1[n1],a2[n2],i,j,k;
    for(i=0;i<n1;i++)
    a1[i]=a[l+i];
    for(j=0;j<n2;j++)
    a2[j]=a[j+m+1];
    i=0;
    j=0;k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            i++;
        }
        else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k]=a1[i];
        k++;i++;
        /* code */
    }
    while (j<n2)
    {
        a[k]=a2[j];
        k++;
        j++;
        /* code */
    }
    
    
}
void merges(int a[],int l,int r)
{
  
  if(l<r)
  {
      int m = (l+r)/2;
      merges(a,l,m);
      merges(a,m+1,r);
      merge(a,l,m,r);
  }
}
int main()
{
int a[10],i;
 for(i=0;i<10;i++)
 cin>>a[i];
 merges(a,0,9);
 for(i=0;i<10;i++)
 cout<<a[i]<<' ';
}