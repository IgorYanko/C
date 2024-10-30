#include <stdio.h>

int i;

int MultiplicarArray(int numeros[])
{
    int produto = 1;
    
    for (i = 0; i < 6; i++) {
        produto *= numeros[i];
    }

    return produto;
}

int main()
{
    int numeros[6];
    
    for (i = 0; i < 6; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
        if(numeros[i] == 0){
            printf("O produto do array eh 0");
            return 0;
        }
    }
    
    printf("O produto do array eh %d", MultiplicarArray(numeros));
    
    return 0;
}