//Questão 2 - Classificação de Bolsas de Estudo
#include <stdio.h>
int main() {
    double renda;

    printf("Digite a renda familiar mensal: ");
    scanf("%lf", &renda);

    if (renda < 1500.00) {
        printf("Bolsa integral\n");

    } else if (renda <= 3000.00) {
        printf("Bolsa parcial\n");

    } else {
        printf("Sem bolsa\n");
    }

    return 0;
}