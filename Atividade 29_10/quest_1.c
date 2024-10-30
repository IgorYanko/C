#include <stdio.h>

int main()
{
    int numero, numeros[10], i, j;
    
    for(i = 0; i < 10; i++){
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for(j = 0; j < 10; j++){
        printf(" |%d| ", numeros[j]);
    }
    
    return 0;
}