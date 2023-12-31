#include <stdio.h>
int main()
{
    int x,y,z,max=0;
    while(scanf("%d",&x)!=EOF)
    {
        for(y=1,max=0; y<=x; y++)
        {
            scanf("%d", &z);
            if(z>max)
                max=z;
        }
        if(max<10)
            printf("1\n");
        else if(max<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}

