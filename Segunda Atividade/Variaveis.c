#include <stdio.h>

int main() {
    int numero1, numero2, soma, subtracao, multiplicacao, resto;
    float divisao;
    int escolha;

    printf("Escolha o par de numeros que deseja utilizar:\n");
    printf("1. -20 e 5\n");
    printf("2. -30 e 4\n");
    printf("3. -40 e 3\n");
    printf("4. -50 e 2\n");
    printf("5. -60 e 1\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            numero1 = -20;
            numero2 = 5;
            break;
        case 2:
            numero1 = -30;
            numero2 = 4;
            break;
        case 3:
            numero1 = -40;
            numero2 = 3;
            break;
        case 4:
            numero1 = -50;
            numero2 = 2;
            break;
        case 5:
            numero1 = -60;
            numero2 = 1;
            break;
        default:
            printf("Opcao invalida.\n");
            return 1; 
    }

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = (float) numero1 / numero2;
    resto = numero1 % numero2;

    printf("Numero 1: %d\nNumero 2: %d\n", numero1, numero2);
    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\nDivisao: %.2f\nResto: %d\n", 
           soma, subtracao, multiplicacao, divisao, resto);
}