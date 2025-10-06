//Questão 7 - Tabela de Multiplicação
#include <stdio.h>
int main() {
    int i1, i2; 
    
    //Os dois loops vão até o 9, como o exemplo mostrou.
    for (i1 = 1; i1 < 10; i1++) {
        for (i2 = 1; i2 < 10; i2++) {
            printf("%d x %d = %d \n", i1, i2, i1 * i2);
        }
    }

    return 0;
}