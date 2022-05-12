#include<stdio.h>
#include<stdlib.h>

typedef struct lista Lista;

struct lista {
 int info;
 Lista* prox;
};

    Lista* lst_cria (void) {
 return NULL;
} 

    Lista* lst_insere (Lista* lst, int val) {
 Lista* novo = (Lista*) malloc(sizeof(Lista));
 novo->info = val;  /*novo espaço */
 novo->prox = lst;
 return novo;
}

    int main (void) {
 Lista* lst; /* declara uma lista não inicializada */
 lst = lst_cria(); /* cria e inicializa lista como vazia */
 lst = lst_insere(lst, 23); /* insere na lista o elemento 23 */
 lst = lst_insere(lst, 45); 

 return 0;

}

