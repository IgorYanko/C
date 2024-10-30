#include <stdio.h>

int i;

int RemoverRepetidos(int numeros[])
{
    int j, existe, indice = 0, numerosNovo[15];

    for(i = 0; i < 15; i++) {
        existe = 0;
        
        for(j = 0; j < indice; j++){
            if(numerosNovo[j] == numeros[i]){
                existe = 1;
                break;
            }    
        }
        
        if(!existe){
            numerosNovo[indice] = numeros[i];
            indice++;
        }
    }
    
    for (i = 0; i < indice; i++) {
        printf("%d ", numerosNovo[i]);
    }
    return 0;
}

int main()
{
    int numeros[15];
    
    for (i = 0; i < 15; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    RemoverRepetidos(numeros);
    
    return 0;
}