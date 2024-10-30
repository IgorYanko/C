#include <stdio.h>

int i, j;

int PassarProLado(int numeros[])
{
    int novoArray[12], count = 0;
    
    for (i = 1; i < 12; i++) {
        novoArray[i] = numeros[count];
        count++;
    }
    
    novoArray[0] = numeros[11];
    
    for (j = 0; j < 12; j++) {
        printf("%d ", novoArray[j]);
    }
}

int main()
{
    int numeros[12];
    
    for (i = 0; i < 12; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    PassarProLado(numeros);
}