/* 
 * File:   main.c
 * Author: Felipe Costa
 */
/*Cap4, ex9, resolvido*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t rawtime;
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"};

    struct tm * timeinfo;

    int dia, mes, ano, hora, minuto;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    dia = timeinfo -> tm_mday;
    mes = timeinfo -> tm_mon;
    ano = timeinfo -> tm_year + 1900;
    hora = timeinfo -> tm_hour;
    minuto = timeinfo -> tm_min;

    printf("Data atual do sistema é: %d de %s de %d %d:%d", dia, meses[mes], ano, hora, minuto);

    return 0;
}

