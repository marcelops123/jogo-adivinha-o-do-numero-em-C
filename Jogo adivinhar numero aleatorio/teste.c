#include <stdio.h>

int main(void)
{
    int contador = 9;
    int numero_digitado;
    int numero_aleatorio;
    char nome[20];

    printf("---------------------------- \n");
    printf("-----Seja bem vindo!-----\n ");
    printf("---------------------------- \n");
    printf("Para comecar, por favor digite seu nome:\n");
    scanf("%[^\n]s", nome);
    printf("Ola,  %s\n", nome);

    numero_aleatorio = srand() % 100;
    printf("Foi sorteado um numero aleatorio, tente adivinhar qual e: \n");
    printf("------------------------------------------------------- \n");
    while (numero_aleatorio != numero_digitado)
    {
        scanf("%d", &numero_digitado);

        if (numero_aleatorio != numero_digitado)
        {
            printf("Numero errado, tente outro : \n");
            printf("------------------------------------------- \n");
            printf("Voce tem %d tentativas restantes \n", contador);
            contador--;
        }
        if (contador == -1)
        {
            printf("Suas tentativas acabaram! \n");
            printf("---GAME OVER!--- \n");
            printf("Obrigado por participar: %s \n", nome);
            sleep(3);
            printf("%s, VOCE SERA REDIRECIONADO PARA O MEU SITE, MINHA REDES SOCIAIS ESTAO NO RODAPE \n", nome);
            printf("------------------------------------------------------------------------------- \n");
            sleep(5);
            system("start chrome.exe http://marcelin.vercel.app");
            break;
        }
        if (numero_aleatorio < numero_digitado)
        {

            printf("O numero sorteado e menor que o numero que vc digitou...");
        }

        if (numero_aleatorio > numero_digitado)
        {

            printf("O numero sorteado e maior que o numero que vc digitou...");
        }
    }

    if (numero_digitado == numero_aleatorio)
    {
        printf("PARABENS! VOCE ACERTOU COM %d tentativas restantes!! \n", contador);
        printf("-------------------------------------------- \n");
        sleep(2);
        printf("Fim de jogo! Obrigado por participar: %s \n", nome);
        printf("-------------------------------------------- \n");
        sleep(2);
        printf("%s, VOCE SERA REDIRECIONADO PARA O MEU SITE, MINHA REDES SOCIAIS ESTAO NO RODAPE \n", nome);
        printf("------------------------------------------------------------------------------- \n");
        sleep(5);
        system("start chrome.exe http://marcelin.vercel.app");
    }
    getchar();
    return 0;
}
