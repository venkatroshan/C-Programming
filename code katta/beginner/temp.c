#include <stdio.h>
#include <string.h>
 
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("%d %d",n1,n2);
   
}
