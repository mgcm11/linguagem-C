#include <stdio.h>
#include <stdlib.h>//comando system(\bin\clear) para limpar a tela

int main(){
    //vamos usar o system(/bin/clear) para
    //limpar a tela antes de execultar os demais comandos
    system("/bin/clear");
    int num;
    printf("digite um numero e vamos dizer se e par ou impar\n");
    scanf("%d",&num);
    if(num % 2 == 0 )
        printf("o numero %d e par\n",num);
    else
        printf("o numero %d e impar\n",num);
    
    return 0;
}