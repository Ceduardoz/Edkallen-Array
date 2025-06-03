#include <stdio.h>
#include <math.h>

int main() {
    float temp[20], soma = 0, media, variancia = 0;

    printf("Digite 20 temperaturas:\n");
    for(int i = 0; i < 20; i++) {
        printf("Temp %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / 20;

    for(int i = 0; i < 20; i++) {
        variancia += pow(temp[i] - media, 2);
    }
    variancia /= 20;

    printf("Media: %.2f\nVariancia: %.2f\nDesvio padrao: %.2f\n", media, variancia, sqrt(variancia));

    return 0;
}
