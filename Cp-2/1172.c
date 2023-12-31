#include<stdio.h>
int main()
{
int i;
float a[10];
for(i=0;i<10;i++)
{
scanf("%f",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]<=0)
{
a[i]=1;
printf("X[%d] = %.0f\n",i,a[i]);
}
else
printf("X[%d] = %.0f\n",i,a[i]);

}
return 0;
}
