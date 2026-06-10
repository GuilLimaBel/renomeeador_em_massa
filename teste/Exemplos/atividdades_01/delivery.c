#include <stdio.h>

// Função para retornar o valor por km
float calcularValorKm(int qtdeKmPercorridos) {
    if (qtdeKmPercorridos <= 100) {
        return qtdeKmPercorridos * 0.20;
    }
   
    if (qtdeKmPercorridos > 100 && qtdeKmPercorridos <= 200) {
        return qtdeKmPercorridos * 0.45;
    }

    if (qtdeKmPercorridos > 200 && qtdeKmPercorridos <= 300) {
        return qtdeKmPercorridos * 0.80;
    }

    if (qtdeKmPercorridos > 300) {
        return qtdeKmPercorridos * 1.05;
    }
}

float calcularValorEntrega(int qtdeEntregas) {
    if ()
}

int main() {
    // Variaveis
    int trabalhouSegunda = 0;
    int qtdeEntregasSegunda = 0;
    int kmSegunda = 0;
    float totalEntregasSegunda = 0;
    float totalKmSegunda = 0;

    int trabalhouTerca = 0;
    int qtdeEntregasTerca = 0;
    int kmTerca = 0;
    float totalEntregasTerca = 0;
    float totalKmTerca = 0;

    int trabalhouQuarta = 0;
    int qtdeEntregasQuarta = 0;
    int kmQuarta = 0;
    float totalEntregasQuarta = 0;
    float totalKmQuarta = 0;

    int trabalhouQuinta = 0;
    int qtdeEntregasQuinta = 0;
    int kmQuinta = 0;
    float totalEntregasQuinta = 0;
    float totalKmQuinta = 0;

    int trabalhouSexta =0;
    int qtdeEntregasSexta = 0;
    int kmSexta = 0;
    float totalEntregasSexta = 0;
    float totalKmSexta = 0;

    int trabalhouSabado = 0;
    int qtdeEntregasSabado = 0;
    int kmSabado = 0;
    float totalEntregasSabado = 0;
    float totalKmSabado = 0;

    int trabalhouDomingo = 0;
    int qtdeEntregasDomingo = 0;
    int kmDomingo = 0;
    float totalEntregasDomingo = 0;
    float totalKmDomingo = 0;

    int totalDias = 0;

    printf("Sou algoritmo que ajuda o Matias, let's Go\n ");

    printf("Trabalhou segunda-feira? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouSegunda);
     if(trabalhouSegunda == 1)
    {
        totalDias ++
        printf("Quantas entregas fez na segunda? ");
        scanf("%i", &qtdeEntregasSegunda);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmSegunda);

        totalEntregasSegunda = calcularValorEntrega (qtdeEntregasSegunda);
        totalKmSegunda = calcularValorKm (kmSegunda);
    }

    printf("Trabalhou terca-feira? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouTerca);
     if(trabalhouTerca == 1)
     {
        printf("Quantas entregas fez na terca? ");
        scanf("%i", &qtdeEntregasTerca);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmTerca);

        totalEntregasTerca = calcularValorEntrega (qtdeEntregasTerca);
        totalKmTerca = calcularValorKm (kmTerca);
     }

    printf("Trabalhou quarta-feira? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouQuarta);
     if(trabalhouQuarta == 1)
     {
        totalDias ++
        printf("Quantas entregas fez na quarta? ");
        scanf("%i", &qtdeEntregasQuarta);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmQuarta);

        totalEntregasQuarta = calcularValorEntrega (qtdeEntregasQuarta);
        totalKmQuarta = calcularValorKm (kmQuarta);
     }

    printf("Trabalhou quinta-feira? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouQuinta);
     if(trabalhouQuinta == 1)
     {
        totalDias ++
        printf("Quantas entregas fez na quinta? ");
        scanf("%i", &qtdeEntregasQuinta);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmQuinta);

        totalEntregasQuinta = calcularValorEntrega (qtdeEntregasQuinta);
        totalKmQuinta = calcularValorKm (kmQuinta);
     }

    printf("Trabalhou sexta-feira? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouSexta);
     if(trabalhouSexta == 1)
     {
        totalDias ++
        printf("Quantas entregas fez na sexta? ");
        scanf("%i", &qtdeEntregasSexta);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmSexta);

        totalEntregasSexta = calcularValorEntrega (qtdeEntregasSexta);
        totalKmSexta = calcularValorKm (kmSexta);
     }

    printf("Trabalhou sabado? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouSabado);
     if(trabalhouSabado == 1)
     {
        totalDias ++
        printf("Quantas entregas fez no sabado? ");
        scanf("%i", &qtdeEntregasSabado);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmSabado);

        totalEntregasSabado = calcularValorEntrega (qtdeEntregasSabado);
        totalKmSabado= calcularValorKm (kmSabado);
     }

    printf("Trabalhou domingo? 1(sim), 2 (nao) ");
     scanf("%i", &trabalhouDomingo);
     if(trabalhouDomingo == 1)
     {
        totalDias ++
        printf("Quantas entregas fez no Domingo? ");
        scanf("%i", &qtdeEntregasDomingo);

        printf("Quantos kilometros percorreu? ");
        scanf("%i", &kmDomingo);

        totalEntregasDomingo = calcularValorEntrega (qtdeEntregasDomingo);
        totalKmDomingo = calcularValorKm (kmDomingo);


        //  Relatorio

        printf ("\nSegunda: %s", trabalhouSegunda == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasSegunda);
        printf ("\n km percorridos: %i", kmSegunda);
        printf ("\n Valor a receber: R$.2f", totalEntregasSegunda + totalKmSegunda);

        
        printf ("\nSegunda: %s", trabalhouTerca == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasSegunda);
        printf ("\n km percorridos: %i", kmTerca);
        printf ("\n Valor a receber: R$.2f", totalEntregasTerca + totalKmTerca);

        
        printf ("\nSegunda: %s", trabalhouQuarta == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasQuarta);
        printf ("\n km percorridos: %i", kmQuarta);
        printf ("\n Valor a receber: R$.2f", totalEntregasQuarta + totalKmQuarta);

        
        printf ("\nSegunda: %s", trabalhouQuinta == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasQuinta);
        printf ("\n km percorridos: %i", kmQuinta);
        printf ("\n Valor a receber: R$.2f", totalEntregasQuinta + totalKmQuinta);

        
        printf ("\nSegunda: %s", trabalhouSexta == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasSexta);
        printf ("\n km percorridos: %i", kmSexta);
        printf ("\n Valor a receber: R$.2f", totalEntregasSexta + totalKmSexta);

        
        printf ("\nSegunda: %s", trabalhouSabado == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasSabado);
        printf ("\n km percorridos: %i", kmSabado);
        printf ("\n Valor a receber: R$.2f", totalEntregasSabado + totalKmSabado);

        
        printf ("\nSegunda: %s", trabalhouDomingo == 1 ? "sim": "nao");
        printf ("\nQuantidade entregas: %i", qtdeEntregasDomingo);
        printf ("\n km percorridos: %i", kmDomingo);
        printf ("\n Valor a receber: R$.2f", totalEntregasDomingo + totalKmDomingo);


     }
     printf ("\nTotalSemana");
     printf ("\nTotal de dias trabalhandos: %i", totalDias);
     int totalEntregas = qtdeEntregasSegunda + qtdeEntregasTerca + qtdeEntregasQuarta + qtdeEntregasQuinta + qtdeEntregasSexta + qtdeEntregasSabado + qtdeEntregasDomingo;
     printf ("\nTotal das entregas &i", totalEntregas );
     int totalKms = totalKmDomingo + totalKmSegunda + totalKmTerca + totalKmQuarta + totalKmQuinta + totalKmSexta + totalKmSabado;
     printf ("\nTotal de KMs %i", totalKms);

     printf ("\nMedia entregas por dia %i", totalEntregas + totalDias );

     float totalGeral = totalEntregasDomingo + totalKmDomingo + 
     totalEntregasSegunda + totalKmSegunda + 
     totalEntregasTerca + totalKmTerca + 
     totalEntregasQuarta + totalKmQuarta + 
     totalEntregasQuinta + totalKmQuinta + 
     totalEntregasSexta + totalKmSexta + 
     totalEntregasSexta + totalKmSexta +
     totalEntregasSabado + totalKmSabado;

     printf ("\nMedia valor por dia %.2f", totalGeral);

     //Ganhou o bonus
     int media = totalEntregas / totalDias;
     if (totalDias == 7 && totalKms >= 200 && media >= 26) {
        printf ("\nBonus de R$ 178, 99") ;

     }

    return 0;
}
