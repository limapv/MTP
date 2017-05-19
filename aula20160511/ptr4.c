#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, SOMA;
    printf("Digite dois numeros reais: \n");
    scanf("%d %d", &A, &B);
    SOMA = A+B;
    printf("O endereco de %d e %p e o endereco de %d e %p\n",A , &A,B,&B);
    printf("O endereco da soma deles e %p e o conteudo e %u ou %X\n",&SOMA, SOMA, SOMA);
    return 0;
}
