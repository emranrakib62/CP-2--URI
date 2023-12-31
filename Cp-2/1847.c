#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    if(x>y)
    {
        if(y>z)
        {
            if((y-z)<(x-y)) printf(":)\n");
            else printf(":(\n");
        }
        else printf(":)\n");
    }
    else if(y>x)
    {
        if(z>y)
        {
            if((z-y)<(y-x)) printf(":(\n");
            else printf(":)\n");
        }
        else printf(":(\n");
    }
    else if(z>y) printf(":)\n");
    else printf(":(\n");
    return 0;
}
