#include <stdio.h>

int main()
{
    int numAnswer,playerPoints=0;
    char charAnswer;
    // Iniciador do programa com uma chamada de instruções de inicialização
    printf("Bem vindo ao quiz!\n\n");
    printf("Digite 1 para entrar no jogo\n");
    printf("Digite 2 para sair do jogo\n");
    scanf("%d", &numAnswer);

    // If-else para começar o jogo
    if (numAnswer == 1)
    {
        printf("Comeca o jogo\n\n");
    }
    else if (numAnswer == 2)
    {
        printf("Terminou o jogo\n\n");
    }

    if (numAnswer = 1)
    // Exposição das perguntas com printf
    {
        printf("1)Qual eh o simbolo utilizado para representar um comentario em C?\n\n");
        printf("a) #\n");
        printf("b) //\n");
        printf("c) /\n");
        printf("d) --\n");
        printf("e) *\n");
    // Recepção da resposta e validação com if-else para a contagem de pontos  
        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'b')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("2) Qual eh o operador utilizado para acessar o valor de uma variavel através de um ponteiro em C?\n\n");
        printf("a) &\n");
        printf("b) *\n");
        printf("c) ->\n");
        printf("d) ::\n");
        printf("e) \'\'\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'b')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("3) Qual eh a função utilizada para alocar memoria dinamicamente em C?\n\n");
        printf("a) malloc()\n");
        printf("b) calloc()\n");
        printf("c) realloc()\n");
        printf("d) free()\n");
        printf("e) allocate()\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'a')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("4) Qual eh a palavra-chave utilizada para definir uma constante em C?\n\n");
        printf("a) define\n");
        printf("b) const\n");
        printf("c) final\n");
        printf("d) constant\n");
        printf("e) static\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'b')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("5) Como se declara uma matriz 3x3 em C?\n\n");
        printf("a) int matriz[3,3];\n");
        printf("b) int matriz(3,3);\n");
        printf("c) int matriz[3][3];\n");
        printf("d) int matriz(3)(3);\n");
        printf("e) int matriz<3,3>;\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'c')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("6) Qual eh a estrutura de controle utilizada para repeticoes em C?\n\n");
        printf("a) repeat\n");
        printf("b) loop\n");
        printf("c) for\n");
        printf("d) foreach\n");
        printf("e) while\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'e')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("7) Qual eh o operador logico 'OU' em C?\n\n");
        printf("a) &&\n");
        printf("b) !\n");
        printf("c) ||\n");
        printf("d) <>\n");
        printf("e) |\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'c')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("8) Qual eh o operador de incremento em C?\n\n");
        printf("a) +=\n");
        printf("b) ++\n");
        printf("c) --\n");
        printf("d) /=\n");
        printf("e) *=\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'b')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("9) Qual eh a função utilizada para imprimir na tela em C?\n\n");
        printf("a) print()\n");
        printf("b) write()\n");
        printf("c) out()\n");
        printf("d) printf()\n");
        printf("e) display()\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'd')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("10) Qual eh o tipo de dado utilizado para armazenar caracteres em C?\n\n");
        printf("a) char\n");
        printf("b) string\n");
        printf("c) character\n");
        printf("d) letter\n");
        printf("e) txt\n");

        printf("Digite sua resposta:");
        getchar();
        charAnswer = getchar();

        if (charAnswer == 'a')
        {
           printf("Correto\n\n");
            playerPoints +=1;
        }
        else 
        {
            printf("Errado\n\n");
        }

        printf("Voce ganhou %d pontos.\n Obrigado por jogar!!!", playerPoints);
    }
    return 0;
}