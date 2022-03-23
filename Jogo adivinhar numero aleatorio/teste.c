#include <stdio.h>

int main(void)
{
    int contador = 9;
    int numero_digitado;
    int numero_aleatorio;
    char nome[20];

    printf("-------------------------------- \n");
    printf("DESENVOLVIDO POR Marcelin \n");
    printf("-------------------------------- \n");
    printf("-----Seja bem vindo!-----\n ");
    printf("--------------------------------------\n");
    printf("Para comecar, por favor digite seu nome:\n");
    printf("---------------------------------------- \n");
    scanf("%[^\n]s", nome);
    printf("Ola, %s\n", nome);

    numero_aleatorio = srand() % 100;
    printf("Foi sorteado um numero aleatorio (de 0 a 100), tente adivinhar qual e: \n");
    printf("VOCE TEM 10 TENTATIVAS: \n");
    printf("----------------------------------------------------------------------- \n");
    while (numero_aleatorio != numero_digitado)
    {
        scanf("%d", &numero_digitado);

        if (numero_aleatorio != numero_digitado)
        {
            printf("Numero errado, tente outro : \n");
            printf("VOCE TEM %d TENTATIVAS RESTANTS \n", contador);
            contador--;
        }
        if (contador == -1)
        {
            printf("Suas tentativas acabaram! \n");
            printf("O NUMERO GERADO ERA: %d \n", numero_aleatorio);
            printf("---GAME OVER!--- \n");
            printf("Obrigado por participar: %s \n", nome);
            sleep(1);
            printf("%s, EM ALGUNS SEGUNDOS VOCE SERA REDIRECIONADO PARA O MEU SITE, MINHAS REDES SOCIAIS ESTAO NO RODAPE \n", nome);
            printf("--------------------------------------------------------------------------------------------------- \n");
            sleep(7);
            system("start chrome.exe http://marcelin.vercel.app");
            break;
        }
        if (numero_aleatorio < numero_digitado)
        {

            printf("O numero sorteado e menor que o numero que vc digitou... \n");
            printf("--------------------------------------------------------- \n");
        }

        if (numero_aleatorio > numero_digitado)
        {

            printf("O numero sorteado e maior que o numero que vc digitou... \n");
            printf("--------------------------------------------------------- \n");
        }
    }

    if (numero_digitado == numero_aleatorio)
    {
        printf("PARABENS! VOCE ACERTOU COM %d tentativas restantes!! \n", contador);
        printf("---------------------------------------------------- \n");
        sleep(1);
        printf("Fim de jogo! Obrigado por participar: %s \n", nome);
        printf("--------------------------------------------------- \n");
        sleep(1);
        printf("%s, EM ALGUNS SEGUNDOS VOCE SERA REDIRECIONADO PARA O MEU SITE, MINHAS REDES SOCIAIS ESTAO NO RODAPE \n", nome);
        printf("--------------------------------------------------------------------------------------------------- \n");
        sleep(7);
        system("start chrome.exe http://marcelin.vercel.app");
    }
    getchar();
    return 0;
}
