#include <stdio.h>

int main() {
    //Declaração de variáveis
   //Entrada
   float peso = 0;
   float altura = 0;

   printf("Ola qual e o seu peso\n");
   scanf("%f", &peso);

   printf("Ola qual e o seu altura\n");
   scanf("%f", &altura);

   //Processamento
   float imc = peso / (altura * altura);

   //Saída
   printf("O seu imc e %.2f!\n", imc);

   if (imc >=18.5 && imc < 24.0) {
   printf ("O seu IMC se encaixa na classificação peso normal");
   } else if (imc >=25.0 && imc< 29.9) {
    printf("O seu IMC se encaixa na classificação sobrepeso");
    } else if (imc >= 30.0) {
        printf("O seu IMC se encaixa na classificação Obesidade");
    }

return 0;

}
