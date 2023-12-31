#include <stdio.h>


int main()
{
int n,i,a,x;
scanf("%d",&n);

for(i=0;i<10;i++)
{
x=n;
printf("N[%d] = %d\n",i,x);
x=x*2;
n=x;
}
return 0;
}
