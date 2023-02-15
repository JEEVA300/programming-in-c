#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],i,j,k=0,s[100],t;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {   
          if(a[i]>a[j])
          {
              t=a[i]
              a[i]=a[j];
              a[j]=t;
           }
      }
    }
    printf("%d",s[k-2]);
    return 0;
}
