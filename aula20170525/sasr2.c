#include <stdio.h>
#include <math.h>

void imprimi_pares(int a){
    int i;
    for(i = 1; i <= a; i++){
        if(i%2 == 0)
            printf("%d,", i);
    }
}

void imprimi_impares(b){
    int i;
    for(i = 1; i < b; i++){
        if(i%2 == 1)
            printf("%d,", i);
    }
}

void main(){
    int A;
    printf("Digite um numero! \n");
    scanf("%d", &A);
    printf("Os numeros pares de 1 a %d e: ", A);
    imprimi_pares(A);
    printf("\n");
    printf("Os numeros imperes de 1 a %d e: ", A);
    imprimi_impares(A);
    return 0;
}

