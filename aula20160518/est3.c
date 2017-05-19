#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define CONVERTE(r, b ,g, y, cb, cr) \
        ({ y=16+(65.481*(r/255)+128.553*(g/255)+24.996*(b/255)) \
         cb=128+(−37.797*(r/255)−74.203*(g/255)+112.0*(b/255))\
         cr=128+(112.0*(r/255)−93.786*(g/255)−18.214*(b/255)})
#define IMPRIMIR(y, cb, cr) \
        ({printf("(%d, %d, %d)\n", cor.y, cor.cb, cor.cr);})
struct RGB{int r, g, b;}Cor;
struct YCbCr{int y, cb, cr;}cor;

int main (){
    printf("Digite o valor das componentes RGB:");
    scand("%d %d %d", &Cor.r, &Cor.g, &Cor.b);
    CONVERTE(Cor.r, Cor.b, Cor.g,cor.y,cor.cb,cor.cr);
    IMPRIMIR(cor.y, cor.cb, cor.cr);
    return 0;
}
