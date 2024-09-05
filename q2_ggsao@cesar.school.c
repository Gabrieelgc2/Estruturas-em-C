#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < N; i++) {
        int numero = numbers[i];
        
        if (numero == 0) {
            printf("NULL\n");
        } else if (numero > 0 && numero%2 == 0) {
            printf("EVEN POSITIVE\n");
        } else if(numero < 0 && numero%2 != 0) {
            printf("ODD NEGATIVE\n");
        } else if(numero < 0 && numero % 2 == 0){
            printf("EVEN NEGATIVE\n");
        } else if(numero > 0 && numero % 2 != 0){
            printf("ODD POSITIVE\n");
        }
        
    }

    return 0;
}
