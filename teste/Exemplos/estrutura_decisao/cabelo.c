#include <stdio.h>

int main() {

    float valorCorte= 0;
    float valorLuzes= 0;
    float valorSobrancelha= 0;
    float valorBarba = 20;
    int opcao = 0; // 1->sim, 0->não
    int opcao1 = 0; // 1->a vista, 0->parcelado

    printf("Voce vai pintar o cabelo? 1->sim, 0->nao");
    scanf ("%i", &opcao);

    if (opcao == 1) {
        printf ("Qual o valor para pintar o cabelo?");
        scanf ("%f", &valorLuzes);
    }

        printf(" Voce vai cortar o cabelo? 1->sim, 0->nao");
        scanf("%i", &opcao);
        
    
         if (opcao == 1) {
            printf ("Qual o valor para cortar o cabelo?");
            scanf ("%f", & valorCorte);
        }

        printf(" Voce vai fazer a barba? 1->sim, 0->nao");
        scanf("%i", &opcao);
        
         if (opcao == 1) {
            printf ("Qual o valor para fazer a barba?");
            scanf ("%f", & valorCorte);
        }

        printf(" Voce vai fazer a sobrancelha? 1->sim, 0->nao");
        scanf("%i", &opcao);
        
         if (opcao == 1) {
            printf ("Qual o valor para fazer a sobrancelha?");
            scanf ("%f", & valorCorte);
        }
            
        float total = valorBarba + valorCorte + valorLuzes + valorSobrancelha;

        if (total <= 150) {
            printf ("Está barato, valor %.2f", total);
        }else if (total > 150 && total <+ 250) {
            printf ("Esta razoavel, valor R$ %.2f", total);
        }else if (total > 250 ) {
            printf ("Esta caro, valor R$ %.2f", total);
        }


       printf("Voce vai fazer a vista ou parcelado? 1->a vista, 0->parcelado");
       scanf ("%i", &opcao);
        if (opcao == 1) {
            printf ("Voce ganhou 5 porcento de desconto. ");
            float desconto = total * 0.05;
            float totalDesconto = total - desconto;
            printf("O total e R$ %.2f", total);
            printf ("O total com desconto e R$ %.2f", totalDesconto);


        }else if (opcao == 0) {

            int qtdeParcelas = 0;
            printf ("Quantas parcelas deseja fazer?");
            scanf("%i", & qtdeParcelas);

            float valorParcela = total / qtdeParcelas;
            printf ("O valor de cada parcela sera %.2f", valorParcela);
        }
          

   return 0;
}
