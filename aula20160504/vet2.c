#include <stdio.h>

int main(){
    int i,j, aux;
    int vet[10];
    for(i = 0; i < 10; i++){
        printf("Digite um numero para o vetor :\n");
        scanf("%d",&vet[i] );
    }
    printf("\n\n");
    for(j = 9, i = 0; i < 5; j--){
            aux = vet[j];
            vet[j] = vet[i];
            vet[i] = aux;
            i++;
    }

    for(i= 0; i < 10; i++)
        printf("%d ", vet[i]);
    return 0;
}

