#include<stdio.h>
#include<string.h>
 
void main()
{
    char s[50];
    gets(s);
    int n=strlen(s);
    int i,count=0;
    for(i=0;i!=n;i++)
    {
        if(s[i]!=' ')
        {
            count++;
        }
    }
    printf("%d",count);
 
 
}
