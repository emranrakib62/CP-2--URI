#include<stdio.h>
int main(){

int x,y,s=0,n,i,tem;
scanf("%d%d",&x,&y);
if(x>y){tem=y;y=x;x=tem;}
if(x%2==0){x++;n=x;}
else n=x+2;
for(i=n;i<y;i=i+2){
    s=s+i;
}
printf("%d\n",s);
return 0;
}
