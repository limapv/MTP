#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256
int main(){
    char vet1[NCHAR], vet2[NCHAR];
    int i, j = 1;
    printf("Digite uma frase : \n");
    fgets(vet1, NCHAR, stdin);
    if(vet1[0]!= ' '){
        vet2[0] = vet1[0];
    }
    for(i = 0; vet1[i] != '\0'; i++){
        if(vet1[i] == ' ' && vet1[i + 1]!= ' '){
                vet2[j] = vet1[i + 1];
                j++;
        }
    }
    vet2[j] = '\0';
    for(i = 0; i < NCHAR; i++)
        vet2[i] = toupper(vet2[i]);
    printf("A mensagem oculta e :%s",vet2);
    return 0;







}
