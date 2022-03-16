#include <stdio.h>

int main(void)
{

    int numero_digitado;
    int numero_aleatorio;
    char nome[20];

    printf("---------------------------- \n");
    printf("-----Seja bem vindo!-----\n ");
    printf("---------------------------- \n");
    printf("Para comecarmos, por favor digite seu nome:\n");
    scanf("%[^\n]s", nome);
    printf("Ola,  %s\n", nome);

    numero_aleatorio = srand() % 100;
    printf("Foi gerado um numero aleatorio, tente adivinhar qual e \n");
    while (numero_aleatorio != numero_digitado)
    {
        scanf("%d", &numero_digitado);
        if (numero_aleatorio != numero_digitado)
            printf("Numero errado, tente outro : \n");

        if (numero_aleatorio < numero_digitado)

            printf("O numero gerado e menor que o numero que vc digitou...");

        if (numero_aleatorio > numero_digitado)
            printf("O numero gerado e maior que o numero que vc digitou...");
    }

    if (numero_digitado == numero_aleatorio)
    {
        printf("Parabens!! Voce acertou! \n");
    }
    printf("O numero gerado era: %d ", numero_aleatorio);
}
