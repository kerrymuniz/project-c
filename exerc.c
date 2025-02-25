#include <stdio.h>

typedef struct Alunos
{
    char nomeAluno[10];
    float mat;
    float fisica;
    float media;
} A;

int main(){
    A aluno1;
    A aluno2;
    A aluno3;

    printf("\nDigite o nome do aluno 1: ");
    getchar();
    scanf("%[^\n]s", aluno1.nomeAluno);
    getchar();
    printf("\nDigite a nota de matematica do aluno 1: ");
    scanf("%f", &aluno1.mat);
    printf("\nDigite a nota de fisica do aluno 1: ");
    scanf("%f", &aluno1.fisica);
    aluno1.media = (aluno1.mat + aluno1.fisica)/2;
    printf("\nMedia do aluno: %.2f", aluno1.media);
    printf("\n----------------------------\n");
}
