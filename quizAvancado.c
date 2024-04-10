#include <stdio.h>

int main() {
  int index, playerPoints = 0, numAnswer;
  char charAnswer;
  char questions[10][100] = {
      "Qual e o simbolo utilizado para representar um comentario em C?",
      "Qual e o operador utilizado para acessar o valor de uma variavel "
      "atraves de um ponteiro em C?",
      "Qual e a funcao utilizada para alocar memoria dinamicamente em C?",
      "Qual e a palavra-chave utilizada para definir uma constante em C?",
      "Como se declara uma matriz '3x3' em C?",
      "Qual e a estrutura de controle utilizada para repeticoes em C?",
      "Qual e o operador logico 'OU' em C?",
      "Qual e o operador de incremento em C?",
      "Qual e a funcao utilizada para imprimir na tela em C?",
      "Qual e o tipo de dado utilizado para armazenar caracteres em C?"};
  char answer1[10][20] = {
      "#",      "&",  "malloc()", "define",  "int matriz[3,3];",
      "repeat", "&&", "+=",       "print()", "char"};
  char answer2[10][20] = {
      "//",   "*", "calloc()", "const",   "int matriz(3,3);",
      "loop", "!", "++",       "write()", "string"};
  char answer3[10][20] = {
      "/",   "->", "realloc()", "final", "int matriz[3][3];",
      "for", "||", "--",        "out()", "character"};
  char answer4[10][20] = {
      "--",      "::", "free()", "constant", "int matriz(3)(3);",
      "foreach", "<>", "/=",     "printf()", "letter"};
  char answer5[10][20] = {
      "*",     "[]", "allocate()", "static",    "int matriz<3,3>;",
      "while", "|",  "*=",         "display()", "txt"};
  int rightAnswer[10] = {2, 2, 1, 2, 3, 5, 3, 2, 4, 1};
  // Iniciador do programa com uma chamada de instruções de inicialização
  printf("Bem vindo ao quiz!\n\n");
  for (index = 0; index < 10; index++) {
    printf("%d)%s\n\n", index + 1, questions[index]);
    printf("1)%s\n", answer1[index]);
    printf("2)%s\n", answer2[index]);
    printf("3)%s\n", answer3[index]);
    printf("4)%s\n", answer4[index]);
    printf("5)%s\n", answer5[index]);

    printf("Digite sua resposta:");
    scanf("%d",&numAnswer);
    getchar();
    

    if (numAnswer == rightAnswer[index]) 
        {
        printf("Correto\n\n");
        playerPoints += 1;
      }
    else {
      printf("Errado\n\n");
    }
  }
  printf("Voce ganhou %d pontos.\nObrigado por jogar!!!", playerPoints);
  return 0;
}