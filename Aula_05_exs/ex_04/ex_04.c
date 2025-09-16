#include<stdio.h>

int main(){
    int tamanho = 15;
    int lista[tamanho];
    int pares = 0;
    int impares = 0;

    for(int x = 0; x<tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &lista[x]);
    }
    for (int x = 0; x< tamanho; x++){
        if(lista[x] % 2 == 0){
            pares += 1;
        } else{
            impares +=1;
        }
    }

    printf("Existem %d números pares nesse array\n", pares);
    printf("Existem %d números impares nesse array\n", impares);
    printf("\n");
    return 0;
}