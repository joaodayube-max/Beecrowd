#include <stdio.h>

int main (){
    int pares = 0;
    int positivos = 0, valor;

    for (int i = 1; i <= 5; i++){
        scanf("%d", &valor);
        if (valor % 2 == 0){
            pares++;
            
        }
    }
    printf("%d valores pares\n", pares);
    
    return 0;
}