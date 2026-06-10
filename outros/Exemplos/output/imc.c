#include <stdio.h>

int main() {
   //Declaração de variáveis
   //Entrada
   float peso = 65;
   float altura = 1.77;

   printf("Ola vamos calcular o IMC\n");

   //Processamento
   float imc = peso / (altura * altura);

   //Saída
   printf("O seu imc e %f!", imc);

    return 0;
}