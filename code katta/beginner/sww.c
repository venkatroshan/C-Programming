#include <stdio.h>
int main() {
int n1,n2,t,i;
scanf("%d %d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("%d %d",n1,n2);
}
