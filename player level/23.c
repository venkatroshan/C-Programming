#include <stdio.h>
#include<string.h>

int main() {
	
	char ch[100];
	gets(ch);
	int i;
	int l=strlen(ch);
	
	for(i=0;i<l;i++)
	{
	    if(ch[i]>='0' && ch[i]<='9')
	    {
	        printf("no");
	    }
	    else
	    {
	        printf("yes");
	    }
	}
	return 0;
}
