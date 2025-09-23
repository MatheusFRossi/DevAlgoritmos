#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inverte_string(char *s){
 char *inicio = s;
 char *fim = s + strlen(s) - 1;
 while (inicio < fim) {
 char tmp = *inicio;
 *inicio = *fim;
 *fim = tmp;
 inicio++; fim--;
 }
}

int main(char *s){
    char s[] = "abobora";
    printf("");

    return 0;
}