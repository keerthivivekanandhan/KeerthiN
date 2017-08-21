#include <stdio.h>

int main()
{
   int n,m,p=1,q=0,i;
   printf("enter the number");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       printf("%d",p);
       m=p+q;
       q=p;
       p=m;
   }
}
