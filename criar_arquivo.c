#include"cabecalho.h"

int main(){
    FILE *arq = fopen("texto.txt","w");
    fprintf(arq,"Hoje é quarta-feira");
    fclose(arq);

    printf("o arquivo foi criado...\n");


}