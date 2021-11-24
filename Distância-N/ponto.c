#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h" //inclui os Prot�tipos

//Definindo o tipo de dado
struct ponto{
  float* vet;
};
//Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float* vet,int size){
    int i;
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));

    p->vet = (float*) malloc(size*sizeof(float));

    if(p != NULL){
        for(i=0;i<size;i++){
            p->vet[i]=vet[i];
        }
    }
    return p;
}
//Libera a mem�ria alocada para um ponto
void pto_libera(Ponto* p){
    free(p);
}
//Recupera, por refer�ncia, o valor de um ponto
int pto_acessa(Ponto* p, float* x, int size){
    int i;
    if(p == NULL)
        return 0;
        for(i=0;i<size;i++){ 
            p->vet[i]
        }    
    return 1;
}
//Atribui a um ponto as coordenadas "x" e "y"
int pto_atribui(Ponto* p, float *vet){
    int i;

    if(p == NULL)
        return 0;
    for(i=0;i<(sizeof(p->vet)/sizeof(float));i++){
        p->vet[i]=vet[i];
    }
     return 1;    
}
//Calcula a dist�ncia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2, int size){
    int i;

    float aux =0;

        for(i=0;i<size;i++){
            aux+ = pow((p1->vet[i] - p2->vet[i+1]),2);
    }
    return sqrt(aux);
}
