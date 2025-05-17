#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, ""); // Configura a locale para suportar caracteres especiais
    float kwh = 0.618; // Pre�o do Kilowatt-hora (kWh) na regi�o de MG
    float consumo_total = 0; // Inicializa o consumo total de energia
    float custo_total = 0; // Inicializa o custo total

    // L�mpadas LED
    int numlamp_led, wattspor_lampadaled = 8; // Pot�ncia das l�mpadas LED em watts
    float horaspordia_led = 0, consumodiario_led = 0, consumomensal_led = 0, customensal_led = 0;

	printf("Ol�, eu sou uma IA criada para calcular seu gasto de energia mensalmente. \n");
	printf("Responda �s perguntas abaixo com a maior precis�o poss�vel para que o c�lculo seja o mais pr�ximo poss�vel. \n");
	  printf("---------------------------------------------------------------------------\n");

    printf("Quantas L�mpadas LED voc� tem em casa?\n");
    scanf("%d", &numlamp_led);

    if (numlamp_led > 0) {
        do {
            printf("Quantas horas as l�mpadas ficam ligadas (at� 24 horas)?\n");
            scanf("%f", &horaspordia_led);

            // Verifica se as horas est�o dentro do intervalo v�lido
            if (horaspordia_led < 0 || horaspordia_led > 24) {
                fprintf(stderr, "Erro: O n�mero de horas deve ser maior ou igual a 0 e n�o pode ser maior que 24.\n");
            }
        } while (horaspordia_led < 0 || horaspordia_led > 24);

        consumodiario_led = (numlamp_led * wattspor_lampadaled * horaspordia_led) / 1000.0;   // C�lculo do consumo di�rio em kWh
        consumomensal_led = consumodiario_led * 30; // C�lculo do consumo mensal em kWh
        customensal_led = consumomensal_led * kwh; // C�lculo do custo mensal
        consumo_total += consumomensal_led; // Atualiza o consumo total
        custo_total += customensal_led; // Atualiza o custo total
    }

    // L�mpadas Fluorescentes
    int numlamp_fluorescente, wattspor_lampadafluorescente = 15; // Pot�ncia das l�mpadas fluorescentes em watts
    float horaspordia_fluorescente = 0, consumodiario_fluorescente = 0, consumomensal_fluorescente = 0, customensal_fluorescente = 0;

    printf("Quantas L�mpadas FLUORESCENTES voc� tem em casa?\n");
    scanf("%d", &numlamp_fluorescente);

    if (numlamp_fluorescente > 0) {
        do {
            printf("Quantas horas as l�mpadas ficam ligadas (at� 24 horas)?\n");
            scanf("%f", &horaspordia_fluorescente);

            // Verifica se as horas est�o dentro do intervalo v�lido
            if (horaspordia_fluorescente < 0 || horaspordia_fluorescente > 24) {
                fprintf(stderr, "Erro: O n�mero de horas deve ser maior ou igual a 0 e n�o pode ser maior que 24.\n");
            }
        } while (horaspordia_fluorescente < 0 || horaspordia_fluorescente > 24);

        consumodiario_fluorescente = (numlamp_fluorescente * wattspor_lampadafluorescente * horaspordia_fluorescente) / 1000.0; // C�lculo do consumo di�rio em kWh
        consumomensal_fluorescente = consumodiario_fluorescente * 30; // C�lculo do consumo mensal em kWh
        customensal_fluorescente = consumomensal_fluorescente * kwh; // C�lculo do custo mensal
        consumo_total += consumomensal_fluorescente; // Atualiza o consumo total
        custo_total += customensal_fluorescente; // Atualiza o custo total
    }

    // Televisores
    int num_tv, wattspor_tv = 90; // Pot�ncia das TVs em watts
    float horaspordia_tv = 0, consumodiario_tv = 0, consumomensal_tv = 0, customensal_tv = 0;

    printf("Quantas TVs voc� tem em casa?\n");
    scanf("%d", &num_tv);

    if (num_tv > 0) {
        do {
            printf("Quantas horas as TVs ficam ligadas (at� 24 horas)?\n");
            scanf("%f", &horaspordia_tv);

            // Verifica se as horas est�o dentro do intervalo v�lido
            if (horaspordia_tv < 0 || horaspordia_tv > 24) {
                fprintf(stderr, "Erro: O n�mero de horas deve ser maior ou igual a 0 e n�o pode ser maior que 24.\n");
            }
        } while (horaspordia_tv < 0 || horaspordia_tv > 24);

        consumodiario_tv = (num_tv * wattspor_tv * horaspordia_tv) / 1000.0;  // C�lculo do consumo di�rio em kWh
        consumomensal_tv = consumodiario_tv * 30; // C�lculo do consumo mensal em kWh
        customensal_tv = consumomensal_tv * kwh; // C�lculo do custo mensal
        consumo_total += consumomensal_tv; // Atualiza o consumo total
        custo_total += customensal_tv; // Atualiza o custo total
    }

    // Ar-Condicionados
    int num_ar, diaspor_mes_ar = 0, wattspor_ar = 1200; // Pot�ncia dos Ar-Condicionados em watts
    float horaspordia_ar = 0, consumo_por_dia_ar = 0, consumomensal_ar = 0, customensal_ar = 0;

    printf("Quantos Ar-Condicionados voc� tem em casa?\n");
    scanf("%d", &num_ar);

    if (num_ar > 0) {
        do {
            printf("Quantas horas os Ar-Condicionados ficam ligados por dia (at� 24 horas)?\n");
            scanf("%f", &horaspordia_ar);

            // Verifica se as horas est�o dentro do intervalo v�lido
            if (horaspordia_ar < 0 || horaspordia_ar > 24) {
                fprintf(stderr, "Erro: O n�mero de horas deve ser maior ou igual a 0 e n�o pode ser maior que 24.\n");
            }
        } while (horaspordia_ar < 0 || horaspordia_ar > 24);

        do {
            printf("Quantos dias no m�s voc� utiliza os Ar-Condicionados (at� 31 dias)?\n");
            scanf("%d", &diaspor_mes_ar);

            // Verifica se o n�mero de dias est� dentro do intervalo v�lido
            if (diaspor_mes_ar < 0 || diaspor_mes_ar > 31) {
                fprintf(stderr, "Erro: O n�mero de dias deve ser maior ou igual a 0 e n�o pode ser maior que 31.\n");
            }
        } while (diaspor_mes_ar < 0 || diaspor_mes_ar > 31);

        consumo_por_dia_ar = (num_ar * wattspor_ar * horaspordia_ar) / 1000.0; // C�lculo do consumo di�rio em kWh
        consumomensal_ar = consumo_por_dia_ar * diaspor_mes_ar; // C�lculo do consumo mensal em kWh
        customensal_ar = consumomensal_ar * kwh; // C�lculo do custo mensal
        consumo_total += consumomensal_ar; // Atualiza o consumo total
        custo_total += customensal_ar; // Atualiza o custo total
    }

    // Chuveiros
    int num_chuveiro, wattspor_chuveiro = 4800, banhos_por_dia = 0; // Pot�ncia dos chuveiros em watts
    float tempo_por_banho = 0, consumodiario_chuveiro = 0, consumomensal_chuveiro = 0, customensal_chuveiro = 0;

    printf("Quantos Chuveiros voc� tem em casa?\n");
    scanf("%d", &num_chuveiro);

    if (num_chuveiro > 0) {
        do {
            printf("Quanto tempo demora cada banho (em minutos)?\n");
            scanf("%f", &tempo_por_banho);

            // Verifica se o tempo de banho est� dentro do intervalo v�lido
            if (tempo_por_banho < 0 || tempo_por_banho > 1440) { // 1440 minutos = 24 horas
                fprintf(stderr, "Erro: O tempo de banho deve ser entre 0 e 1440 minutos (24 horas).\n");
            }
        } while (tempo_por_banho < 0 || tempo_por_banho > 1440);

            printf("Quantos banhos voc� toma por dia ?\n");
            scanf("%d", &banhos_por_dia);

        tempo_por_banho /= 60.0; // Converte minutos para horas
        consumodiario_chuveiro = (num_chuveiro * wattspor_chuveiro * tempo_por_banho) / 1000.0; // C�lculo do consumo di�rio em kWh
        int banhos_no_mes = banhos_por_dia * 30; // Calcula o total de banhos no m�s
        consumomensal_chuveiro = consumodiario_chuveiro * banhos_no_mes; // C�lculo do consumo mensal em kWh
        customensal_chuveiro = consumomensal_chuveiro * kwh; // C�lculo do consumo mensal em kWh
        consumo_total += consumomensal_chuveiro; // Atualiza o consumo total
        custo_total += customensal_chuveiro; // Atualiza o custo total
    }

    // M�quinas de Lavar	
    int num_maqlavar, vezes_por_mes = 0, wattspor_maqlavar = 1000; // Pot�ncia das m�quinas de lavar em watts
    float horaspordia_maqlavar = 0, consumo_por_lavagem = 0, consumomensal_maqlavar = 0, customensal_maqlavar = 0;

    printf("Quantas M�quinas de Lavar voc� tem em casa?\n");
    scanf("%d", &num_maqlavar);

    if (num_maqlavar > 0) {
        do {
            printf("Quantas horas cada lavagem da M�quina de Lavar dura (at� 24 horas)?\n");
            scanf("%f", &horaspordia_maqlavar);

            // Verifica se as horas est�o dentro do intervalo v�lido
            if (horaspordia_maqlavar < 0 || horaspordia_maqlavar > 24) {
                fprintf(stderr, "Erro: O n�mero de horas deve ser maior ou igual a 0 e n�o pode ser maior que 24.\n");
            }
        } while (horaspordia_maqlavar < 0 || horaspordia_maqlavar > 24);

        do {
            printf("Quantas vezes no m�s voc� usa a M�quina de Lavar (at� 31 vezes)?\n");
            scanf("%d", &vezes_por_mes);

            // Verifica se o n�mero de vezes est� dentro do intervalo v�lido
            if (vezes_por_mes < 0 || vezes_por_mes > 31) {
                fprintf(stderr, "Erro: O n�mero de vezes deve ser maior ou igual a 0 e n�o pode ser maior que 31.\n");
            }
        } while (vezes_por_mes < 0 || vezes_por_mes > 31);

        consumo_por_lavagem = (num_maqlavar * wattspor_maqlavar * horaspordia_maqlavar) / 1000.0; // C�lculo do consumo por lavagem em kWh
        consumomensal_maqlavar = consumo_por_lavagem * vezes_por_mes; // C�lculo do consumo mensal em kWh
        customensal_maqlavar = consumomensal_maqlavar * kwh;  // C�lculo do custo mensal
        consumo_total += consumomensal_maqlavar; // Atualiza o consumo total
        custo_total += customensal_maqlavar; // Atualiza o custo total
    }

      // Impress�o dos resultados em forma de tabela
      
    printf("\n| Tipo de Equipamento          | Consumo Mensal (kWh) | Custo Mensal (R$) |\n");
    printf("|------------------------------|----------------------|-------------------|\n");
    printf("| L�mpadas LED                 | %.2f                 | %.2f              |\n", consumomensal_led, customensal_led);
    printf("| L�mpadas Fluorescentes       | %.2f                 | %.2f              |\n", consumomensal_fluorescente, customensal_fluorescente);
    printf("| TVs                          | %.2f                 | %.2f              |\n", consumomensal_tv, customensal_tv);
    printf("| Ar-Condicionados             | %.2f                 | %.2f              |\n", consumomensal_ar, customensal_ar);
    printf("| Chuveiros                    | %.2f                 | %.2f              |\n", consumomensal_chuveiro, customensal_chuveiro);
    printf("| Maquina de lavar             | %.2f                 | %.2f              |\n", consumomensal_maqlavar, customensal_maqlavar);
    printf("|------------------------------|----------------------|-------------------|\n");
    printf("| Total                        | %.2f                 | %.2f              |\n", consumo_total, custo_total);
    
    return 0;
}
