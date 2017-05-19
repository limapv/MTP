#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main(){
    srand(time(0));
    int i, numero;
    int cont = 0;
    int vetor[N];
    unsigned char * p;
    for(i = 0; i < N; i++)
        vetor[i] = rand();
    p = (unsigned char * ) &vetor;
    printf("Escolha um numero entre 0 e 255: \n");
    scanf("%d", &numero);
    for( i = 0; i < sizeof(vetor); i++){
        if(p[i]== numero) {
            cont++;
            printf("Endereco %p | Conteudo %u ou %X \n", &p[i],p[i],p[i]);
            }
    }
    printf("%d bytes com %d entre %p e %p\n",cont, numero,p,p+sizeof(vetor));
    return 0;
}







