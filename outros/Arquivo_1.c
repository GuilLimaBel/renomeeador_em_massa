#include <stdio.h>
#include <locale.h>

void mostrarPlanos(float Viva_saude_Anual, float Saude_em_Dia_Anual, float Fitness_Pro_Anual, float Viva_saude_Mes, float Saude_em_Dia_Mes, float Fitness_Pro_Mes ) {

    const float Viva_saude_Anual = 12 * 39.99;
    const float Saude_em_Dia_Anual = 12 * 48.99;
    const float Fitness_Pro_Anual = 12 * 58.99;
    const float Viva_saude_Mes = 12 * 49.99;
    const float Saude_em_Dia_Mes = 12 * 59.99;
    const float Fitness_Pro_Mes = 12 * 69.99;

    printf("\nVIVA SAUDE\n");
    printf("Valor anual: R$ %.2f\n", Viva_saude);
    printf("Uso: 3 vezes por semana\n");

    printf("\nSAUDE EM DIA\n");
    printf("Valor anual: R$ %.2f\n", Saude_em_Dia);
    printf("Uso: 4 vezes por semana\n");

    printf("\nFITNESS PRO\n");
    printf("Valor anual: R$ %.2f\n", Fitness_Pro);
    printf("Uso ilimitado\n");

    if (Viva_saude < Saude_em_Dia && Viva_saude < Fitness_Pro) {
        printf("\nPlano mais barato: Viva Saude\n");
    }
    else if (Saude_em_Dia < Fitness_Pro) {
        printf("\nPlano mais barato: Saude em Dia\n");
    }
    else {
        printf("\nPlano mais barato: Fitness Pro\n");
    }
}

int main() {

    mostrarPlanos();

    return 0;
}

