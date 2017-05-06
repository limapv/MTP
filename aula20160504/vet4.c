#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int N, i, max = 0, min = 9;
    printf("Digite um numero inteiro nao negativo para o tamanho do seu vetor:\n");
    scanf("%d", & N);
    int vet[N];
    for(i = 0; i < N; i++)
        vet[i] = rand()%10;
    for(i = 0; i < N ; i++){
        if(vet[i] >= max)
            max = vet[i];
    }
    for(i = 0; i < N ; i++){
        if(vet[i] <= min)
            min = vet[i];
    }
    printf("O max do vetor e : %d\n\n", max);
    printf("O min do vetor e : %d \n\n", min);
    return 0;
}
