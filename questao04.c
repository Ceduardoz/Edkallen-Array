#include <stdio.h>

int main() {
    int impares[50], num = 1;

    for(int i = 0; i < 50; i++) {
        impares[i] = num;
        num += 2;
    }

    printf("50 primeiros numeros impares:\n");
    for(int i = 0; i < 50; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
