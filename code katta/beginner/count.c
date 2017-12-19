#include <stdio.h>

int main() {
int n;

scanf("%d",&n);
int count=0,mod;
int temp;
temp=n;
while(n>0)
{
mod=n%10;
count++;
n=n/10;
}
printf("%d",count);
return 0;

}
