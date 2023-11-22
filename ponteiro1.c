#include <stdio.h> //icluir biblioteca
#include <stdlib.h>

int main(){
    system("clear");//limpar a tela
    int valor = 32;
    int novo = valor;
    int num = 2;
    int* pnum = &num;
    int xnum = *pnum;
    printf("o valor é %d\n",valor);//printf mais o valor da veriavel, mostra para usuario
    printf("a posiçao de memoria de valor é %p\n",&valor);
    printf("O valor de novo é %d\n",novo);
    printf("A posiçao de memoria novo é %p\n",&novo);
    printf("O valor de num é %d\n",num);
    printf("A posiçao de memoria num é %p\n",pnum);
    printf("o valor de xnum %d\n",xnum);

    return 0;

    
    }
