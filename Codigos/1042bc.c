#include <stdio.h>

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int n = 3;
    int temp = 0;
    int blau [3]= {n1, n2, n3};
    
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if(blau[j]>blau[j+1]){
                temp = blau[j];
                blau [j] = blau [j+1];
                blau [j+1] = temp;
        
            }
        }
    } 
    for(int i = 0; i<3; i++){
        printf("%d\n", blau [i]);
    }
    printf("\n%d\n%d\n%d\n", n1, n2, n3);

    return 0;
}