#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cont = 0;
    int vetor[] = {0,1,2,4,8};
    unsigned char * p;
    p = (unsigned char * ) &vetor;
    for(i = 0; i < sizeof(vetor); i++){
        if(p[i] == 0x00)
            cont++;
        printf("Endereco: %p | Conteudo: %u\n\n", &p[i], p[i]);

    }
    printf("Sao %d enderecos do tipo 0x00", cont);
    return 0;
}
