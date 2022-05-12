#include<stdio.h>
#include<stdlib.h>

struct lista{

    int valor;
    struct lista* ant;
    struct lista* prox;
};

typedef struct lista LISTA;

//funções: criar, inserir, imprime, !!!buscar!!!, retirar, liberar, vazia

LISTA* lista_cria(){
    return NULL;
}

LISTA* lista_insere(LISTA* listinha, int valor){

    LISTA* aux = (LISTA*) malloc(sizeof(LISTA));
    aux -> valor = valor;
    aux -> prox = listinha;
    aux -> ant = NULL;

    if(listinha != NULL){ // verifica se a lista nao estava vazia
        listinha -> ant = aux;
    }
    return aux;
}

LISTA* lista_imprime(LISTA* listinha){

    LISTA* aux;
    for(aux = listinha; aux != NULL; aux = aux -> prox){
        printf("Valor: %d\n", aux -> valor);
    }
}

 LISTA* lista_retira(LISTA* listinha, int valor){

    LISTA* aux = busca(listinha, valor);

    if(aux == NULL) // nao achou elemento na lista
        return listinha; 

    if(listinha == aux)
        listinha = aux -> prox;

    else 
        aux->ant-> prox = aux-> prox;

    if(aux-> prox != NULL)
        aux -> prox -> ant = aux -> ant;

    free(aux);
    return listinha; 
}

LISTA* lista_libera(LISTA* listinha, int valor){

    LISTA* aux;
    if(aux != NULL){
        for(aux = listinha; aux != NULL; aux = aux -> prox){
        LISTA* t = aux -> prox;
        free(aux);
        aux = t;
        }
    }
}    

int main(void){

    LISTA* listinha;
    listinha = lista_cria();
    listinha = lista_insere(listinha, 59);
    listinha = lista_insere(listinha, 19);
    listinha = lista_insere(listinha, 49);
    lista_imprime(listinha);

    return 0;

}