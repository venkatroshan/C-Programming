
#include<stdio.h>

 
void main()
{
    int i,n;
    scanf("%d",&n);
  int a[100];
  for(i=0;i<n;i++)
  {
      scanf("%d",a[i]);
  }
 for(i=0;i<n;i++)
  {
      printf("%d %d\n",a[i],i);
  }
 
}
