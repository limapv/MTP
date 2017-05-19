#include <stdio.h>
#include <stdlib.h>

int main (){
    char str[17]={0};
    unsigned int * p;
    int i;
    p = (unsigned int *) &str;
    printf("Digite uma mensagem usuario :\n");
    fgets(str, 17, stdin);
    printf("Conteudo em decimal:\n");
    for(i = 0; i < sizeof(str)/sizeof(int); i++)
        printf("%u  ", p[i]);
    printf("\n");
    printf("Conteudo em hexadecimal: \n");
    for(i = 0; i < sizeof(str)/sizeof(int); i++)
        printf("%X  ", p[i]);
    return 0;
}
