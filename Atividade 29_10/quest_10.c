#include <stdio.h>

int i;

int InverterArray(int numeros[])
{
    int inverter = 19, numerosInverso[20];

    for(i = 0; i < 20; i++) {
        numerosInverso[i] = numeros[inverter];
        printf(" %d ", numerosInverso[i]);
        inverter--;
    }
    
    return 0;
}

int main()
{
    int numeros[20];
    
    for (i = 0; i < 20; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("[");
    InverterArray(numeros);
    printf("]");
    
    return 0;
}