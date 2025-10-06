//Questão 4 - Verificação de Idade para Evento
#include <stdio.h>
int main() {
    int idade;

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 25) {
        printf("Inscricao Permitida\n");

    } else {
        printf("Inscricao nao permitida\n");
    }

    return 0;
}