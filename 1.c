#include<stdio.h>
#include <conioo.h>
#include<string.h>
void main()
{
    character str[100];
    gets(str);
    int i, len;
    len=strlen(str);
    for(i=len;i>=0;i--)
     printf("%c",str[i]);
    return(0);
}
