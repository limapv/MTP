#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cont = 0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    unsigned char * p;
    p = (unsigned char * ) &vetor;
    for(i = 0; i < sizeof(vetor); i++){
        if(p[i] == 0xFF)
            cont++;
        printf("Endereco: %p | Conteudo: %u OU %X\n\n", &p[i], p[i], p[i]);

    }
    printf("Sao %d enderecos do tipo 0xFF", cont);
    return 0;
}
