//Questão 8 - Verificação de Notas Válidas
#include <stdio.h>
int main() {
    int i, alunos = 10;
    float nota, soma = 0;

    for (i = 0; i < alunos; i++) {
        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;

        } else {
            printf("Nota invalida\n");
        }
    }

    printf("A soma das notas = %.2f\n", soma);

    return 0;
}