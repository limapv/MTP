#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

float M(float vet[N]){
    int i;
    float m = 0;
    for(i = 0; i < N; i++)
        m = m + vet[i];
    return m/N;
}

float S(float vet[N], float J){
    int i;
    float x = 0;
    for(i = 0; i < N; i++)
        x = x + pow((vet[i] - J), 2);
    return sqrt(x/(N - 1));

}


int main (){
    float vetor[N];
    int i;
    float media, desvio;
    for(i = 0; i < N; i++){
        printf("Digite um numero : \n");
        scanf("%f", &vetor[i]);
    }
    media = M(vetor);
    printf("A media dos numeros e : %g \n", media);
    desvio = S(vetor, media);
    printf("O desvio padrao dos numeros e : %g \n", desvio);
    return 0;
}
