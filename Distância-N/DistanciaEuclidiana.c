#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){
    float d;
    Ponto *p,*q;
    int j;
    int i;
    int vet=0;
    float *vec1=NULL;
    float *vec2=NULL;
    
    printf("digite o numero de dimensoes dos pontos:\n");
    scanf("%d", &i);
    
    vec1 = (float*) malloc(i * sizeof(float));
    for (j=0; j<i;j++){
        printf("digite a dimensao %i do primeiro ponto:\n", j+1);
        scanf("%f", &vec1[j]);
    }

    vec2 = (float*) malloc(i * sizeof(float));
    for (j=0; j<i; j++){
        printf("digite a dimensao %i do segundo ponto:\n", j+1);
        scanf("%f", &vec2[j]);
    }
    
    p = pto_cria(vec1,i);
    q = pto_cria(vec2,i);
    d = pto_distancia(p,q,i);
    printf("Distancia entre pontos: %f\n",d);

    pto_libera(q);
    pto_libera(p);

    return 0;
}
