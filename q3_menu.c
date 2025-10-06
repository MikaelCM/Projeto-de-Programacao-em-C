//Questão 3 - Menu de Atendimento Universitário
#include <stdio.h>
int main() {
    int codigo;

    printf("Digite o codigo da opcao: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("Matricula em disciplinas\n");

    } else if (codigo == 2) {
        printf("Consulta de historico\n");

    } else if (codigo == 3) {
        printf("Solicitacao de documentos\n");

    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}