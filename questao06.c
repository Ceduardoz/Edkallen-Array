#include <stdio.h>

int main() {
    int n;
    printf("Quantos numeros de Fibonacci? ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    if(n > 1) fib[1] = 1;

    for(int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequencia de Fibonacci:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
