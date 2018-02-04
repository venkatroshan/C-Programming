#include <stdio.h>
#include<string.h>

int main() {
	//code
	char str[100];
	gets(str);
	int i,count[100];
	char ch;
	
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
	    count[str[i]-97]=0;
	}
	for(i=0;i<l;i++)
	{
	    count[str[i]-97]++;
	}
	printf("%d",count[0]);
	int max=-1;
	for(i=0;i<l;i++)
	{
	    if(max<count[str[i]-97])
	    {
	        max=count[str[i]-97];
	        ch=str[i];

	       
	    }
	}
		     printf("%c",ch);
         return 0;
}
