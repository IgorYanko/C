#include <stdio.h>

int SomarVetor(int numeros[])
{
    int i, soma = 0;
    
    for(i = 0; i < 5; i++){
        soma += numeros[i];
    }
    
    return soma;
}

int main()
{
    int numeros[5], i;
    
    for(i = 0; i < 5; i++){
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("A soma dos elementos do vetor eh %d", SomarVetor(numeros));
}