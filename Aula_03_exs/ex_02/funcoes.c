#include<stdio.h>

float media(float nota1, float nota2, float nota3){
   float resultado = (nota1 + nota2 + nota3) / 3;

    if(resultado >= 7){
        printf("Aprovado com %.2f de média", resultado);
    } else if(resultado >= 5 && resultado < 7){
        printf("Recuperação com %.2f de média", resultado);
    } else{
            printf("Reprovado com %.2f de média", resultado);
    }

}