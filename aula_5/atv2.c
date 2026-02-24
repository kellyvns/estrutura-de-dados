#include <stdio.h>

int main () {

int numeros[10];
int valor;

        for (int i = 0; i < 10; i++){ 
            printf("Informe o Valor da posicao [%d]: ", i);
            scanf(" %d", &valor);
            numeros[i] = (valor);
        }

        int menor = numeros[0];
        int maior = numeros[0];

        for (int i = 1; i <10; i++) {
            if (numeros[i] < menor){
                menor = numeros[i];
            } 
            if (numeros[i] > maior){
                maior = numeros[i];
            }
        }
        printf("\nMenor valor: %d", menor);
        printf("\nMaior valor: %d", maior);
}