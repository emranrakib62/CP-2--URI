#include<stdio.h>
int main(){
   int a,s=1;
   scanf("%d",&a);
   for(int i=a;i>=1;i--){
    s=s*i;
   }
   printf("%d\n",s);

return 0;

}
