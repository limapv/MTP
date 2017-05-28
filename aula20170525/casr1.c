#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sorteio(int N){
    int i,S;
    for(i = 0; i < 10; i++){
        printf("Tecle ENTER para sortear um numero de 1 a 10\n");
        getchar();
        S = rand() % 10 + 1;
        printf("O numero sorteado foi: %d\n", S);
        if(S == N){
            printf("PARABENS\n");
            break;
        }
    }

}
void main(){
    int A;
    srand(time(0));
    printf("Digite um numero entre 1 a 10\n");
    scanf("%d", &A);
    sorteio(A);
    return 0;
}


