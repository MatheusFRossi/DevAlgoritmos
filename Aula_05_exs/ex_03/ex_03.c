#include<stdio.h>

int main(){
    int tamanho = 8;
    int lista[tamanho];
    int menor = 0;
    int maior = 0;
    int posmaior = 0;
    int posmenor = 0;

    for(int x = 0; x<tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &lista[x]);
    }
    for (int x = 0; x< tamanho; x++){
        if(lista[x] > maior){
            maior = lista[x];
            posmaior = x;
            continue;
        }
        if(lista[x]< menor){
            menor = lista[x];
            posmenor = x;
        }

        
    }

    printf("Esse é o maior número: %d\n", maior);
    printf("Essa é a posição do maior número dentro do array: %d\n", posmaior);
    printf("Esse é o menor número: %d\n", menor);
    printf("Essa é a posição do menor número dentro do array: %d\n", posmenor);
    printf("\n");
    return 0;
}