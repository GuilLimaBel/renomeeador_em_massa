#include <stdio.h>
''
int main() {
    int pessoas = 0;
    float valorLancheRodeio = 0;
    float valorBatataGrande = 0;
    float valorRefriCoca = 0;
    float valorSobremesa = 0;

    printf("Quantas pessoas vao?");
    scanf("%i", &pessoas);

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);
    
    printf ("Qual o valor da Batata Grande?");
    scanf ("%f", valorBatataGrande);
    
    printf ("Qual o valor do refri Coca?");
    scanf ("%f", &valorRefriCoca);

    printf ("Qual o valor da sobremesa?");
    scanf ("%f", &valorSobremesa);

    float valor= valorLancheRodeio + valorRefriCoca + valorSobremesa + valorBatataGrande;
    float total= valor / pessoas;
    
}
    
    for (float i= 1; i < 50 ; i++)  {      
        if (total < 40) {
      printf ("\n O valor ficou barato R$ %.2f e voce vai bancar", total);
    } else if  (total >55) {
        printf ("\n O valor ficou caro R$ %.2f cada um paga o seu", total);
    }


    
    


    return 0;
}