#include <stdio.h>

int main() {
    int n;
    printf("Quantas notas? ");
    scanf("%d", &n);

    float notas[n], soma = 0;
    for(int i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("Media = %.2f\n", soma / n);

    return 0;
}
