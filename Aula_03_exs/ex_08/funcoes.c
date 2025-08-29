#include<stdio.h>


int menu(){
    int opcao;
    while(1){

    printf("=========================================\n");
    printf("1) Calcular área do círculo\n");
    printf("2) Calcular a área do retângulo\n");
    printf("3) Calcular a área do triângulo\n");
    printf("4) Valide um triângulo\n");
    printf("5) Sair\n");
    printf("=========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    if(opcao >= 1 && opcao <= 5){
        return opcao;
    }
    printf("\nValor inválido!\n");
}
}

float area_circulo(){
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    return 3.1415 * raio * raio;
}

float area_retangulo(){
    float base, altura;
    printf("Digite a base do retângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: \n");
    scanf("%f", &altura);
    return base * altura;

}
float area_triangulo(){
    float base, altura;
    printf("Digite a base do triângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &altura);
    return base * altura / 2;
}
float validar_triangulo(){
    float A, B, C;
    printf("Digite o lado A do triângulo: \n");
    scanf("%f", &A);
    printf("Digite o lado B do triângulo: \n");
    scanf("%f", &B);
    printf("Digite o lado C do triângulo: \n");
    scanf("%f", &C);
    if(A + B > C || B + C > A || A + C > B){
        if(A == B && A == C){
            return printf("\nestes lados formam um triângulo equilátero!!\n");
        } else if(A == B || B == C || A == C){
            return printf("\nestes lados formam um triângulo isósceles!!\n");
        } else {
            return printf("\nestes lados formam um triângulo escaleno!!\n");
        }
        return printf("\nEstes 3 lados informados não formam um triângulo!\n");
    }
}


