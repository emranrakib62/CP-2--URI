
#include<stdio.h>
int main(){
    int a,b,i,tem,s=0;
scanf("%d%d",&a,&b);
if(a>b){tem=a;a=b;b=tem;}
for(i=a;i<=b;i++){
    if(i%13!=0)s +=i;
}
printf("%d\n",s);


return 0;
}
