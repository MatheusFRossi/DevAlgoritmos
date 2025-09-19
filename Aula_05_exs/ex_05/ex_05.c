#include<stdio.h>

int main(){
    int tamanho = 10;
    int lista[tamanho];
    int buscar;
    int posicao;
    int numero;
    int procura = 0;
    for(int x = 0; x<tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &lista[x]);
    }
    while (1){
    printf("Qual número deseja procurar? ");
    scanf("%d", &buscar);
    if (buscar != 0 ){
    for (int x = 0; x< tamanho; x++){
        if(buscar == lista[x]){
            procura +=1;
            posicao = x;
            numero = lista[x];
        }
    }   
    if(procura == 1){
        printf("Número %d encontrado na posição %d\n\n", numero, posicao);
        procura = 0;
    } else{
        printf("Número não encontrado\n\n");
    }
} else{
    break;
}
}

    printf("\n");
    return 0;
}