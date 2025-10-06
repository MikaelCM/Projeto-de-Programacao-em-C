//Questão 5 - Cálculo da Média de 10 Alunos
#include <stdio.h>
int main() {
    float nota, soma = 0;
    int i, alunos = 10;

    for (i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("Media da turma = %.2f\n", soma / i);

    return 0;
}