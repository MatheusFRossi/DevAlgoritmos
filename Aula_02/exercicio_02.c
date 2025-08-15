#include<stdio.h>

int main(){

    int hora, minuto, segundo, temp_atual, temp_rest, temp_pass;

    printf("Digite o horário de agora\n");
    printf("Digite as horas\n");
    scanf("%i", &hora);
    printf("Digite os minutos\n");
    scanf("%i", &minuto);
    printf("Digite os segundos\n");
    scanf("%i", &segundo);

    temp_atual = (hora * 3600) + (minuto * 60) + segundo;

    temp_rest = 86400 - temp_atual;

    temp_pass = temp_atual;

    printf("Já se passaram %i segundos desde 00:00\n\n", temp_pass);
    printf("Faltam %i segundos para 00:00\n", temp_rest);

    return 0;
}