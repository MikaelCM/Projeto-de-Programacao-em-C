//Questão 1 - Verificação de Aprovação em Disciplina
#include <stdio.h>
int main() {
    float nota;

    printf("Digite a nota final do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6.0) {
        printf("Aprovado\n");

    } else {
        printf("Reprovado\n");
    }

    return 0;
}