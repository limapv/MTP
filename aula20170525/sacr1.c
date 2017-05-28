#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int DADO(){
    int valor_dado = rand()%6+1;
    return valor_dado;
}

void game(){
    int i,b,soma = 0;
    char entrada;
    printf("Para jogar o dado tecle ENTER!\n");
    for(i = 1; i < 4; i++){
        getchar();
        for(b = 1; b < 6; b++)
            soma += DADO();
        printf("A soma dos dados e: %d\n", soma);
        if(soma >= 18 && soma <= 23){
            printf("Parabens voce e o novo CHAMPIONS\n");
            break;}
        else
            printf("Tente novamente!\n");
    }
    printf("Parabens voce e um LOSER\n");
}
void main (){
    int ;
    srand(time(0));
    game();
    return 0;
}
