#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    char nome[] ="";
    //char* pnome = &nome;
    printf("digite seu nome\n");
    scanf("%s\n",&nome);
    printf("ola %s\n",nome);

    return 0;
}