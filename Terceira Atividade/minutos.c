#include <stdio.h>

int main()
{
    int minutos, segundos;
    
    printf("Escreva uma quantidade de minutos: ");
    scanf("%d",&minutos);
    
    segundos = minutos * 60;
    
    if(minutos > 0){
        printf("%d minutos eh igual a %d segundos", minutos, segundos);    
    } else {
        printf("Nao eh possivel realizar a conversao!");    
    }
}