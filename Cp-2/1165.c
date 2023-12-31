
#include<stdio.h>
int main()
{
int i,n,j,x,y=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&x);
for(j=2;j<x;j++)
{
if(x%j==0)
y++;
else
continue;
}
if(y!=0)
printf("%d nao eh primo\n",x);
else
printf("%d eh primo\n",x);
x=0;
y=0;

}
return 0;
}
