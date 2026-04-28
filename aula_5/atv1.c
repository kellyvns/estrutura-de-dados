#include <stdio.h>  

int main () {

int valor;
int indice;

    int tamVetor; 
    printf("Informe o tamanho do vetor: ");
    scanf(" %d", &tamVetor);

    if (tamVetor <= 0) { 
        printf("Tamanho invalido!");
        return 1; 
    } 

    int numeros[tamVetor]; 

        for (int i = 0; i < tamVetor; i++){ 
            printf("Informe o Valor da posicao [%d]: ", i);
            scanf(" %d", &valor);
            numeros[i] = (valor);
        }

        printf("Informe o indice ");
        scanf(" %d", &indice);

            if (indice >= 0 && indice < tamVetor){ 
                printf("O valor na posicao %d e %d", indice, numeros[indice]); 
            } else {
                printf("Indice invalido! Digite um valor entre 0 e %d", tamVetor);
}

return 0; 

}