#include<stdio.h>
int main()
{
int i,n,j,sum=0;
scanf("%d",&n);
while(n!=0)
{
if(n%2==0)
n=n;
else
n=n+1;
for(j=1;j<=5;j++)
{
sum=sum+n;
n=n+2;
}
printf("%d\n",sum);
n=0;
sum=0;
scanf("%d",&n);
}
return 0;
}
