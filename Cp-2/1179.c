
#include <stdio.h>



int main()
{
int par[5],impar[5],i,j=0,k=0,a,m;
for(i=1; i<16; i++)
{
scanf("%d",&a);
if(a%2==0)
{
par[j++]=a;
if(j==5)
{
for(m=0; m<5; m++)
printf("par[%d] = %d\n",m,par[m]);
j=0;
}
}
else
{
impar[k++]=a;
if(k==5)
{
for(m=0; m<5; m++)
printf("impar[%d] = %d\n",m,impar[m]);
k=0;
}
}
}
for(i=0;i<k;i++)printf("impar[%d] = %d\n",i,impar[i]);
for(i=0;i<j;i++)printf("par[%d] = %d\n",i,par[i]);
return 0;
}
