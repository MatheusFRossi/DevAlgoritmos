#include<stdio.h>
#include<stdlib.h>

int conta_caracteres(char *s ,char c){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == c){
            count++;
        }
    }
    return count;
}

int main(){
    int x = conta_caracteres("o rato roeu a roupa",  ' ');
    printf("%d\n", x);
    return 0;
}