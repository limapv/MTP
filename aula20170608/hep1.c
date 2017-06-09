#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float M(float * vetor, int qtde){
    int i;
    float m = 0.f;
    for(i = 0; i < qtde; i++)
        m = m + vetor[i];
    return m/qtde;
}

float S(float * vetor, int qtde){
    int i;
    float m = M(vetor,qtde), x = 0;
    for(i = 0; i < qtde; i++)
        x = x + pow((vetor[i] - m), 2);
    return sqrt((1.f/(qtde - 1))*x);

}

int main(){
    float * vetor;
    int qtde, i;
    printf("Quantos numeros deseja entrar:");
    scanf("%d", &qtde);
    vetor = (float *)malloc(qtde*sizeof(float));
    for(i = 0; i < qtde; i++){
        printf("Elemento [%d]: ");
        scanf("%f",&(vetor[i]));
    }
    printf("Media = %g \n", M(vetor, qtde));
    printf("Desvio.Padrao = %g\n", S(vetor,qtde));
    free(vetor);
    return 0;

}
