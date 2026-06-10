#include <stdio.h>

int main() {
    // Entrada de informações, variaveis e constantes
    const float valorPorLitro = 0.05;
    const int qtdeLitrosMulta = 400;
    const int qtdeLitrosDesconto = 250;
    const float valorMulta = 150;
    const float valorDesconto = 50;
    const int periodo30 = 30;
    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    int qtdePessoasResidencia = 0;
    float valorTotalConta = 0;
    int qtdeLitrosConsumida = 0;
    int idade = 0;

    // Processamento das informações
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Para iniciar, quantas pessoas moram na residencia?");
    scanf("%i", &qtdePessoasResidencia);

    for (int i=0; i<qtdePessoasResidencia; i++) {
        printf("Legal, agora qual idade da %i pessoa: ", i);
        scanf("%i", &idade);

        if (idade <= 10) {
             qtdeLitrosConsumida += 18;
            }else if (idade > 10 && idade <= 18) {
             qtdeLitrosConsumida += 30;
            }else if (idade > 18 && idade <= 25) {
             qtdeLitrosConsumida += 42;
            }else if (idade > 25) {
             qtdeLitrosConsumida +=24;
            }
    }

    // Valor total da conta
    valorTotalConta = valorPorLitro * qtdeLitrosConsumida * periodo30;

    // Saida, relatorio
    if (qtdeLitrosConsumida >= faixaExcessiva) {
        // Faixa excessiva
        printf("Faixa de consumo: Excessiva");
        printf("Total de pessoas na residencia:  %i\n", qtdePessoasResidencia);
        printf("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
        printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("Multa aplicada: R$ %.2f\n", valorMulta);
    }else if(qtdeLitrosConsumida <= faixaEconomica) {
        // Faixa economica
        printf("Faixa de consumo: Economica\n");
        printf("Total de pessoas na residencia:  %i\n", qtdePessoasResidencia);
        printf("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
        printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("Multa aplicada: R$ %.2f\n", valorMulta);
    }else {
        // Faixa normal
        printf("Faixa de consumo: Normal\n");
        printf("Total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("Quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
        printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
    }

    return 0;
}
