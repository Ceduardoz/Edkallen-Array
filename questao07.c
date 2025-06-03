#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valores[100];
    int maior, menor, soma = 0, count_menor_media = 0;

    srand(time(NULL));

    for(int i = 0; i < 100; i++) {
        valores[i] = rand() % 1001;
        soma += valores[i];
    }

    float media = soma / 100.0;
    maior = menor = valores[0];

    printf("Valores menores que a media:\n");
    for(int i = 0; i < 100; i++) {
        if(valores[i] > maior) maior = valores[i];
        if(valores[i] < menor) menor = valores[i];
        if(valores[i] < media) {
            printf("%d ", valores[i]);
            count_menor_media++;
        }
    }

    printf("\nMedia: %.2f\nMaior: %d\nMenor: %d\nQuantidade menores que a media: %d\n", media, maior, menor, count_menor_media);

    return 0;
}
