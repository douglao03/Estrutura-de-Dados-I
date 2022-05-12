#include<stdio.h>
#include<stdlib.h>

struct tAluno {

    int matricula;
    float prova1;
    float prova2;
};

typedef struct tAluno tAluno;

int main(){

    tAluno aluno;
    float media = 0;
    printf("Informe matricula do aluno:");
    scanf("%d", &aluno.matricula);

    printf("Informe nota da primeira prova:");
    scanf("%f", &aluno.prova1);

    printf("Informe nota da segunda prova:");
    scanf("%f", &aluno.prova2);

    media = ((aluno.prova1) + (aluno.prova2))/2;

    printf("Matricula do aluno: %d\n", aluno.matricula);
    printf("Media do aluno: %.2f\n", media);

    if(media > 7)
    printf("Aprovado");

    else 
    printf("Reprovado");

    return 0; 

}