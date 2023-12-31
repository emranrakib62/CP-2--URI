
#include <stdio.h>

int main(){
    double sa;
    scanf("%lf", &sa);

    if(sa <= 2000.00){
        printf("Isento\n");
    }else if (sa >= 2000.01 && sa <= 3000.00){
          printf("R$ %.2f\n", (sa - 2000.00)*0.08);
    }else if (sa >= 3000.01 && sa <= 4500.00){
          printf("R$ %.2f\n", ((sa - 3000.00)*0.18 + 1000.00*0.08));
    }else if (sa >= 4500.01){
          printf("R$ %.2f\n", ((sa - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}
