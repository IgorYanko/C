#include <stdio.h>

int i,j;

int SumArray(int arrayOne[], int arrayTwo[], int arrayThree[])
{
    
    for(i = 0; i < 10; i++) {
        arrayThree[i] = arrayOne[i] + arrayTwo[i];
        
        printf("%d ", arrayThree[i]);
    }
    
    return 0;
}

int main()
{
    int arrayOne[10], arrayTwo[10], arrayThree[10];
    
    for (i = 0; i < 10; i++) {
        printf("Escreva o %dº numero do vetor 1: ", i + 1);
        scanf("%d", &arrayOne[i]);
    }
    
    for (j = 0; j < 10; j++) {
        printf("Escreva o %dº numero do vetor 2: ", j + 1);
        scanf("%d", &arrayTwo[j]);
    }
    
    printf("[");
    SumArray(arrayOne, arrayTwo, arrayThree);
    printf("]");
}