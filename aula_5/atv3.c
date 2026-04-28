#include <stdio.h>

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n;
    int resultado;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido! Digite um numero maior ou igual a 0.\n");
        return 1;
    }

    resultado = fibonacci(n);

    printf("O %dº termo da sequencia de Fibonacci e: %d\n", n, resultado);

    return 0;
}