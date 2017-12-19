#include <stdio.h>
int main() 
{
int n,i=1;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{

    if(n%i==0)
    {
        printf("not prime number");
    }
    else
    {
        printf("prime number");
    }
}
}
