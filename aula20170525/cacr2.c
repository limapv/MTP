#include <stdio.h>
#include <math.h>

float delta(float a1, float b1, float c1){
    float D, a, b, c;
    D = b*b - 4*a*c;
    return D;
}

void variacao(float D, float * raiz1, float * raiz2, float a2, float b2){
    float D1, a,b,c;
    if (D > 0){
        *raiz1 = -b + (sqrt(D)/2*a);
        *raiz2 = -b - (sqrt(D)/2*a);
    }
    if (D == 0)
        *raiz1 = *raiz2 = -b/2*a;
    if (D < 0)
        printf("Nao possui raizes reais!");

}

void main(){
    float a, b, c, x1, x2;
    printf("Digite os coeficientes a, b,c da equacao! \n");
    scanf("%f %f %f", &a, &b, &c);
    varicao(delta(a,b,c), &x1, &x2);
    printf("%f %f", x1, x2);
    return 0;



}
