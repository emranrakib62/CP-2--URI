#include <stdio.h>
int main()
{
    int n, m , i, an=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        scanf("%d", &m);
        if(m==n) an++;
    }
    printf("%d\n", an);
    return 0;
}
