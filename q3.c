#include <stdio.h>

int main()
{
    int i, sequencia;
    int anterior = 0;
    int anterior2 = 1;
    int resultado;

    scanf("%d", &sequencia);

    printf("%d %d", anterior, anterior2);

    for (i = 2; i < sequencia; i++) {
        resultado = anterior + anterior2;
        anterior = anterior2;
        anterior2 = resultado;
        printf(" %d", resultado);
    }

    printf("\n");
    return 0;
    /*
    Última submissão enviada no beecrowd(Accepted) #41155939 29/08/2024
    ggsao@cesar.school
    */
}