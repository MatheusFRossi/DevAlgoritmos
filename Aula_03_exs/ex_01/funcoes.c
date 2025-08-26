#include<stdio.h>

int maior(int num1, int num2){
    if(num1 > num2){
        return num1;
    } else if (num2 > num1){
        return num2;
    }
    printf("Os números são iguais");
    return 0;
}