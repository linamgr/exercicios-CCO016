#include <stdio.h>

int main(void) {
  //define os dados de entrada
   float x,y;
   //define os dados de saída
   float media;
   
   //escreve na tela
   printf("Digite o valor do primeiro número:");
   //lê o valor da tela
   scanf("%f", &x);
   //escreve na tela
   printf("Digite o valor do segundo número:");
   //lê o valor da tela
   scanf("%f", &y);
   //calcula a media aritmética dos números lidos
   media = (x+y)/2;
  //escreve na tela o resultado
   printf("A media dos números é:%f", media);
   return 0;
}
