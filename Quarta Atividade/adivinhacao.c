#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    
    int randNum = rand() % 21;
    int palpite;

    while (palpite != randNum)
    {
        for (int i = 3; i > 0; i--)
        {     
            printf("\nAdivinhe o numero sorteado entre 1 e 20 em %d tentativas!\n ", i);
            scanf("%d", &palpite);
            if (palpite < 0 || palpite > 20)
            {
                printf("\nInsira um numero entre 0 e 20!\n");
                i++;
            }
            else
            {
                if (palpite == randNum)
                {       
                    printf("Voce acertou!");
                    return 0;
                } 
                else if (palpite > randNum) 
                {
                    printf("\nO numero tentado eh maior que o sorteado!\n");
                } 
                else 
                {
                    printf("\nO numero tentado eh menor que o sorteado!\n");  
                }
            }
        }
        if (palpite != randNum)
        {
            printf("O numero sorteado era %d!", randNum);
            return 0;
        }
    }      
}