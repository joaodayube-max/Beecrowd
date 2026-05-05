#include <stdio.h>

int main (){
    double valor, media, soma = 0;
    int positivos = 0;

    for (int i = 1; i <= 6; i++){
        scanf("%lf", &valor);
        if (valor > 0){
            positivos++;
            soma += valor;
        }
    }
    printf("%d valores positivos\n", positivos);

    if (positivos > 0){
        media = soma / positivos;
        printf("%.1lf\n", media);
    }

    return 0;
}