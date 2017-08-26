#include <stdio.h>

int main()
{
  int p,q,result=1;
  scanf("%d %d",&p,&q);
  for(int i=q;i>=1;i--)
  {
      result=p*result;
  }
  printf("%d",result);
    return 0;
}
