#include <stdio.h>

int main(){
    float valorProduto, desconto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valorProduto);

    printf("Digite o valor do desconto: \n");
    scanf("%f", &desconto);

    float descontoDecimal = (desconto / 100.0);
    float valorFinal = valorProduto - (descontoDecimal * valorProduto);

    printf("O valor final com desconto eh %f", valorFinal);
}