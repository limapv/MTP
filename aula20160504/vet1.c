#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
int main (){
    srand(time(0));
    int i, maximo;
    int numeros[N];
    float media;
    printf("Insira um valor natural maximo :");
    scanf ("%d", & maximo);
    for (i=0; i < N; i++)
        numeros[i]= rand()%maximo + 1;
    media = 0.0;
    for(i = 0; i < N; i++)
        media = media + numeros[i];
    media = media/N;
    printf("A meida obtida e: %g.\n", media);
    return 0;
}
