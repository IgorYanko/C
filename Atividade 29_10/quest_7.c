#include <stdio.h>

int i;

int BuscarNumero(int numeros[])
{
    int num, posicao = -1;
    
    printf("Pesquise um numero no vetor: ");
    scanf("%d", &num);
    
    for (i = 0; i < 12; i++) {
        if(num == numeros[i]){
            posicao = i;
            break;
        }  
    }

    return posicao;
}

int main()
{
    int numeros[12];
    
    for (i = 0; i < 12; i++) {
        printf("Escreva o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    int posicao = BuscarNumero(numeros);
    
    if(posicao == -1){
        printf("O numero nao foi encontrado!");
    } else {
        printf("O numero esta na posicao %d.", posicao);
    }
    
    return 0;
}