#include<stdio.h>
#include<stdlib.h>

// funcoes:criarvazia, imprimir, pertencer, liberar, inserir(criar), vazia

struct arvore{
    
    int valor;
    struct arvore* dir; // aponta para o lado esquerdo
    struct arvore* esq; // aponta para o lado direito
};

typedef struct arvore Arvore;

 Arvore* arv_cria(){ // cria uma arvore vazia
     return NULL;
 }
 
 Arvore* arv_insere(int valor, Arvore* sae, Arvore* sad){
    Arvore* aux = (Arvore*) malloc(sizeof(Arvore));
    aux->valor = valor;
    aux->esq = sae; //subarvore da esquerda
    aux->dir = sad; // subarvore da direita
    return aux;
 }

 Arvore* arv_vazia(){ // função para verificar se a arvore esta vazia
    return NULL;
}

 Arvore* arv_libera(Arvore* arv){  // arv é o nó raiz da arvore
     if (!arv_vazia(arv)){
         arv_libera(arv->esq);
         arv_libera(arv->dir);
         free(arv); // libera a raiz
     }
 }
 
 void arv_imprime(Arvore* arv){  //  função void nao retorna nada
    if (!arv_vazia(arv)){
        printf("%d", arv -> valor); // mostra raiz
        arv_imprime(arv->esq); // mostra esquerda
        arv_imprime(arv->dir); // mostra direita
    }
 }

 
int main(){

    Arvore* arv1 = arv_insere(2,arv_cria(),arv_cria());
    Arvore* arv2 = arv_insere(3,arv_cria(),arv_cria());
    Arvore* arv3 = arv_insere(1,arv1, arv2);
    arv_imprime(arv3);
    
    return 0;
    
}

     
     
 
 