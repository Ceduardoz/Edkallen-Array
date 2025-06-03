#include <stdio.h>

int main() {
    int n;
    printf("Quantos numeros? ");
    scanf("%d", &n);

    int numeros[n];
    float soma = 0;
    
    for(int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    float media = soma / n;
    int maior = numeros[0], menor = numeros[0], cont_maiores = 0;

    for(int i = 0; i < n; i++) {
        if(numeros[i] > maior) maior = numeros[i];
        if(numeros[i] < menor) menor = numeros[i];
        if(numeros[i] > media) cont_maiores++;
    }

    printf("Maior: %d\nMenor: %d\nMedia: %.2f\nMaiores que a media: %d\n", maior, menor, media, cont_maiores);

    return 0;
}
