#include"funcoes.h"
#include<stdio.h>

int main(){
int opcao;
    while(1){
        int opcao = menu();
    if(opcao == 1){
        printf("Área do círculo: %.2f\n", area_circulo());
    }
    else if(opcao == 2){
        printf("Área do retângulo: %.2f\n", area_retangulo());
    }
    else if(opcao == 3){
        printf("Área do triângulo: %.2f\n", area_triangulo());
    } 
    else if(opcao == 4){
        validar_triangulo();
    } 
    else{
        printf("Até logo!\n");
        break;
    }
    }
    return 0;
}