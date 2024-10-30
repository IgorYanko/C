#include <stdio.h>

int AcharPares(int numeros[])
{
    int pares[20], i, count = 0;
    
    for(i = 0; i < 20; i++){
        if(numeros[i] % 2 == 0){
            pares[count] = numeros[i];
            count++;
        }
    }
    
    for (i = 0; i < count; i++) {
        printf(" %d ", pares[i]);   
    }
}

int AcharImpares(int numeros[])
{
    int impares[20], i, count = 0;
    
    for(i = 0; i < 20; i++){
        if(numeros[i] % 2 != 0){
            impares[count] = numeros[i];
            count++;
        }
    }
    
    for (i = 0; i < count; i++){
        printf(" %d ", impares[i]);   
    }
}

int main()
{
    int numeros[20], i;
    
    for(i = 0; i < 20; i++){
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("Numeros pares: ");
    AcharPares(numeros);
    printf("\nNumeros impares: ");
    AcharImpares(numeros);
    
    return 0;
}