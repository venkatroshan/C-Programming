#include <stdio.h>

int main() {
	//code
	int a,b,n,i,j;
	scanf("%d %d",&a,&b);
	int cnt;
	for(i=a;i<=b;i++)
	{
	    cnt=0;
	     for (int j=1; j*j<=i; j++)
	     {
            if (j*j == i)
                cnt++;
                	     
	     }
            printf("%d",cnt);
	}
		     
	return 0;
}
