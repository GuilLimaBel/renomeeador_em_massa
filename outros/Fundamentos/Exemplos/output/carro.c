/*
Você precica comprar um carro e
preteender realizar o pagamento de
forma parcelada.
Crie um algoritiomo que calcula o valor
das parcelas descontando a o valor 
da entrada de 30%.
*/
#include <stdio.h>

int main () {
    // Entrda
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30= 0.30;

    printf("Qual o valor do carro?");
    scanf ("%f", &valorCarro);

    printf("Quantas parcelas deseja pegar?");
    scanf("%i", &qtdeParcelas);

    //Processamento
    float valorEntrada = valorCarro * entrada30;
    float valorRestante = valorCarro - valorEntrada;
    float parcelas = valorRestante / qtdeParcelas; 
    
    //Saída
   printf("O valor da Parcela %.2f! \n", parcelas);
   printf(" O valor da entrada sera %.2f", valorEntrada);


    return 0;
}