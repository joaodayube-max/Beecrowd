#include <stdio.h>

int main(){
    int impar = 0, X, i;

    scanf("%d", &X);

    for (int i = 1; i <= X; i += 2){  
        printf("%d\n", i);
    }
    return 0;
}