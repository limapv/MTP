#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256

int main(){
    int i;
    char frase[NCHAR];
    printf("Digite uma frase: \n");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase) - 1] = '\0'; // tirar o ENTER
    for(i = 0; i < NCHAR; i++)
        frase[i] = toupper(frase[i]);
    for(i = 0; i < NCHAR; i++){
        if(frase[i] == 'A')
            frase[i] = '4';
        if(frase[i] == 'E')
            frase[i] = '3';
        if(frase[i] == 'I')
            frase[i] = '1';
        if(frase[i] == 'O')
            frase[i] = '0';
        if(frase[i] == 'S')
            frase[i] = '5';
        if(frase[i] == 'G')
            frase[i] = '6';
        if(frase[i] == 'Z')
            frase[i] = '2';
        if(frase[i] == 'T')
            frase[i] = '7';
    }
    printf("%s", frase);
    return 0;
}
