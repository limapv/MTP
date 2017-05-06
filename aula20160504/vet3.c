#include <stdio.h>

int main(){
    int i, soma = 0, produto = 1;
    int vet[10];
    for(i = 0; i < 10; i++){
        printf("Digite um numero para o vetor :\n");
        scanf("%d",&vet[i] );
    }
    for(i = 0; i < 10; i++)
        soma = soma + vet[i];
    for(i = 0; i < 10; i++)
        produto = produto*vet[i];
    printf("A soma dos numeros do vetor e : %d \n\n", soma);
    printf("O produto dos numeros do vetor e : %d \n\n", produto);
    return 0;
}
