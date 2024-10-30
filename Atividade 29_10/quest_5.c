#include <stdio.h>
#include <limits.h>

int i;

int MaiorNum(int numeros[])
{
    int maior = 0;
    
    for (i = 0; i < 15; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    return maior;
}

int MenorNum(int numeros[])
{
    int menor = INT_MAX;
    
    for (i = 0; i < 15; i++) {
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    return menor;
}

int main()
{
    int numeros[15];
    
    for (i = 0; i < 15; i++) {
        printf("Escreva o %dº numero: ", i + 1); 
        scanf("%d", &numeros[i]);
    }
    
    printf("O maior numero eh %d e o menor eh %d", MaiorNum(numeros), MenorNum(numeros));
    
    return 0;
}