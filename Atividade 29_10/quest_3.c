#include <stdio.h>

float MediaVetor(int numeros[])
{
    int i, soma = 0;
    float media = 0.0;
    
    for(i = 0; i < 8; i++){
        soma += numeros[i];
    }
    
    media = soma / 8;
    
    return media;
}

int main()
{
    int numeros[8], i;
    
    for(i = 0; i < 8; i++){
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("A media dos elementos do vetor eh %f", MediaVetor(numeros));
}