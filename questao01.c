#include <stdio.h>

int main() {
    int numeros[10];
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    
    return 0;
}
