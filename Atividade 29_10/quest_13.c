#include <stdio.h>

int i, j;

int GetNumAboveAverage(int numeros[])
{
    int produto = 0, media, count = 0;
    
    for(i = 0; i < 15; i++) {
        produto += numeros[i];
    }
    
    media = produto / 15;
    
    for(j = 0; j < 15; j++) {
        if(numeros[j] > media) {
            count++;
        }
    }
    
    return count;
}

int main()
{
    int numeros[15];
    
    for (i = 0; i < 15; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("Temos %d numeros acima da media", GetNumAboveAverage(numeros));
}