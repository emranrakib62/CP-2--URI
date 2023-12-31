#include <stdio.h>

int main(){

    int n;
    int x, y, a;
    int m;

    while(1){

                scanf("%d%d",&x,&y);
                if(x <= 0) break;
                if(y <= 0) break;

                if(x > y){
                     a = x;
                     x = y;
                     y = a;
                }
                m = 0;
                for(int i = x; i <= y; i++){
                       printf("%d ",i);
                       m =m+ i;
                }
                printf("Sum=%d\n",m);

    }
    return 0;
}
