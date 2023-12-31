#include<stdio.h>
int main(){

float a,b,c,d,e;
double av1,av2;
scanf("%f %f %f %f",&a,&b,&c,&d);
av1=((a*2)+(b*3)+(c*4)+d)/10;
printf("Media: %.1lf\n",av1);
if(av1>=7.0){
    printf("Aluno aprovado.\n");
}
else if(av1<5.0){
    printf("Aluno reprovado.\n");
}
else{
    printf("Aluno em exame.\n");
    scanf("%f",&e);
    printf("Nota do exame: %.1f\n",e);
    av2=(av1+e)/2;
    if(av2>=5.0)printf("Aluno aprovado.\n");
    else printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",av2);
}


return 0;
}


