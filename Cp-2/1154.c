
#include<stdio.h>
int main()
{
float n,a,sum=0;
float count=0;
scanf("%f",&n);
while(n>=0)
{

count++;
sum+=n;
scanf("%f",&n);
}
a=sum/count;
printf("%.2f\n",a);
return 0;
}
