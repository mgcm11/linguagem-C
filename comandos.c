#include<stdio.h>
#include<stdlib.h>
#include"cabecalho.h"

int main(){
    tela();
    system("mkdir documento");
    system("cd documento");
    system("touch elementos.txt");
    printf("os comandos foram execultados....\n");
    return 0;
}
