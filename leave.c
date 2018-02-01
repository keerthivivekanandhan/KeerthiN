#include <stdio.h>
#include<string.h>

int main()
{
    char a[]="saturday";
    char c[20], b[]="sunday";
    int x,y;
    scanf("%s",c);
    x=strcmp(c,a);
    y=strcmp(c,b);
    
    if(x==0||y==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
