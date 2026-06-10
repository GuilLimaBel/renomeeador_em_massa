/*
Você está trabalhando e gostaria de
guardar 25% do seu salário todo mês.
O banco está com um investimento
que rende 6.8% ao mês de juros e você
vai usar esse fomato de investimento.
Crie um algoritiimo para calcular seu
investimento.
*/
#include <stdio.h>

int main () {
    // Entrda
    float salario = 0;
    int tempo = 0;
    const float porcentagem = 0;
    const float juros = 6.8;


    //Processamento
    
    printf("Qual é o seu salario?");
    scanf ("%f", &salario);

    printf("Quanto tempo voce pretende guardar?");
    scanf("%i", &tempo);

    printf("Qual é a porcentagem do salario que voce vai guardar?");
    scanf ("%f", &porcentagem);

    float valorGuardado = salario / 100 * porcentagem; 
    float valorJuros = valorGuardado + juros;
    float valorTotal = valorJuros * tempo;
 
    //Saída
    printf("O valor guardado mensal é %.2f \n", valorJuros);
    printf("O valor guardado em todo este tempo é %.2f", valorTotal);


}