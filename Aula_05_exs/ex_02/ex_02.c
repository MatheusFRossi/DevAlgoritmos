#include<stdio.h>

int main(){
    int tamanho = 10;
    int lista[tamanho];
    int soma = 0;
    int positivo = 0;
    for(int x = 0; x<tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &lista[x]);
    }
    for (int x = 0; x< tamanho; x++){
        soma += lista[x];
        if(lista[x] > 0 ){
            positivo += 1;
        }
    }

    printf("%d\n", soma);
    printf("Existem %d números positivos nesse array\n", positivo);
    printf("\n");
    return 0;
}