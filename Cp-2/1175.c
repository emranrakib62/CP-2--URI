
#include <stdio.h>
int main()
{
int number[20];
int i,x;
for(i=0; i<20; i++)
{
scanf("%d", &number[i]);

}
for(i=0; i<=9; i++)
{
x = number[i];
number[i] = number[19-i];
number[19-i]= x;
}
for(i=0; i<=19; i++)
{
printf("N[%d] = %d\n", i, number[i]);
}
return 0;
}
