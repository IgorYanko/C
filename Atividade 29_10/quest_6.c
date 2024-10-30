#include <stdio.h>

int i;

int Positivo(int numeros[])
{
    int count = 0;
    
    for (i = 0; i < 10; i++) {
        if(numeros[i] > 0) {
            count++;
        }
    }
    
    return count;
}

int Negativo(int numeros[])
{
    int count = 0;
    
    for (i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            count++;
        }
    }
    
    return count;
}

int main()
{
    int numeros[10];
    
    for (i = 0; i < 10; i++) {
        printf("Escreva o %dº numero: ", i + 1); 
        scanf("%d", &numeros[i]);
    }
    
    printf("%d numeros sao positivos e %d sao negativos. ", Positivo(numeros), Negativo(numeros));
    
    return 0;
}