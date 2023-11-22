/*progama que realiza a soma entre dois numeros*/
/*inclusao de biblioteca de cabeçalho de entrada e saida*/

#include<stdio.h>

/*funçao principal*/
int main(){
    int numero1,numero2,resultado;
    printf("digite um numero:\n");
    scanf("%d",&numero1);
    
    printf("digite outro numero:\n");
    scanf("%d",&numero2);

    resultado = numero1 + numero2;
    printf("o resultado da soma E %d\n\n",resultado);

    printf("posiçao em memoria da variavel numero1 %p\n",&numero1);
    printf("posiçao em memoria da variavel numero1 %p\n",&numero2);
    printf("posiçao em memoria da variavel resultado %p\n",&resultado);

}