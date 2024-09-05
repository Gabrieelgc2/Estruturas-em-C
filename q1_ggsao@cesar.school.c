#include <stdio.h>
#include <math.h>

int main() {
    float valor;
    float notas[6] = {100, 50, 20, 10, 5, 2};
    float moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int quantidade;

    scanf("%f", &valor);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        quantidade = (int)(valor / notas[i]);
        valor = valor - (quantidade * notas[i]);
        printf("%d nota(s) de R$ %.2f\n", quantidade, (float)notas[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        valor = roundf(valor * 100) / 100;
        quantidade = (int) (valor / moedas[i]);
        valor = valor - (quantidade * moedas[i]);
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i]);
    }
    /*
    Última submissão enviada no beecrowd(Accepted) #41155973 29/08/2024
    ggsao@cesar.school
    */
    return 0;
}