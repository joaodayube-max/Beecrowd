#include <stdio.h>

int main (){
    int X, maior = -1, pos = 0;

    for (int i = 1; i <= 100; i++){
        scanf("%d", &X);
        if (X > maior){
            maior = X;
            pos = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}