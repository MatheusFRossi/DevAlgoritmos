#include<stdio.h>
#include"funcoes.h"

int main(){

    printf("%d\n", soma(2, 5));
    printf("%i\n", mult(2, 5));
    printf("%d\n", sub(5, 2));
    printf("%.2f\n", div(10, 2));
    printf("%.2f\n", div(10, 0));
    return 0;
}