#include <stdio.h>

int main()
{
    int escolha, num;
    float resposta;
    
    printf("1. KM para milha\n 2. Celsius para Fahrenheit\n 3. KM/S para M/S \n 4. Sair \n");
    scanf("%d",&escolha);
    printf("Digite o numero a ser convertido: \n");
    scanf("%d",&num);
    
    switch (escolha) {
        case 1:
            resposta = num / 1.6;
            printf("%.2f",resposta);
            break;
        case 2:
            resposta = num * 1.8 + 32; 
            printf("%.2f",resposta);
            break;
        case 3:
            resposta = num / 3.6;
            printf("%.2f",resposta);
            break;
        case 4:
            break;
        default:
            printf("Opcao invalida!");
            break;       
    }
}