#include<stdio.h>
int main()
{
	int n,low,high;
	scanf("%d",&low);
	scanf("%d",&high);
	scanf("%d",&num);
	if((num>=low) && (num<=high))
	{
		printf("number included");
	}
	else
	{
		printf("not included");
	}
}
