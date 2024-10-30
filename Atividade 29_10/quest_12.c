#include <stdio.h>
#include <math.h>

int i;

float EncontrarDesvio(float numeros[]) 
{
    float soma = 0, media, desvio = 0;
    for (i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    media = soma / 10.0;

    for (i = 0; i < 10; i++) {
        desvio += (numeros[i] - media) * (numeros[i] - media);
    }

    return sqrt (desvio / 10);
}

int main()
{
    float numeros[10];
    for (i = 0; i < 10; i++) {
        printf("Escreva o %dº numero", i + 1);
	scanf("%d", &numeros[i];
    }

    printf("%.2f\n", EncontrarDesvio(numeros));
    return 0;
}