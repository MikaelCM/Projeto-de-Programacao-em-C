//Questão 6 - Contagem de Aprovados e Reprovados
#include <stdio.h>
int main() {
    float nota;
    int i, aprovados = 0, reprovados = 0, alunos = 15;

    for (i = 0; i <= alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            aprovados++;

        } else {
            reprovados++;
        }
    }

    printf("Total de aprovados: %d\n", aprovados);
    printf("Total de reprovados: %d\n", reprovados);

    return 0;
}