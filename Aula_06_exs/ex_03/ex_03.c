#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

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

void limpa_string(char* str){
    int i, j = 0, tam = strlen(str);
    for(i; str[i] != '\0'; i++){
        if(str[i] != ' '){
        
            str[j] = tolower(str[i]);
            j++;
        } 
        
    }
    str[i] = '\0';
}

int eh_palindromo(char *str){
    int tam = strlen(str);
    char cpy[tam + 1]; 
    strncpy(cpy, str, tam + 1);

    inverte_string(cpy);

    return !strcmp(str, cpy);
}

void formatar_nome(char *nome){
    int i = 0, j = 0;
    while(nome[i] == ' '){
        i++;
    }
    while (nome[j] != '\0'){
        nome[j] = nome[i];
        j++;
        i++;
    }
    nome[j] = '\0';

    i = 0;
    while(nome[i] != ' '){
        i++;
    }
    j = i + 1;
    while(nome[j] == ' '){
        j++;
    }
    while(nome[j] != '\0'){
        nome[i + 1] = nome[j];
        i++;
        j++;
    }
    nome[i] + 1;
}

int main(){
    char s[] = "    Matheus";
    formatar_nome(s);
    printf("%s\n", s);

    return 0;
}
