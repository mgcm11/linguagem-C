#include<stdlib.h>
#include<stdio.h>

int main(){
    system("clear");

    int numero,i;

    printf("Digite um número para exibir a tabuada: ");
    scanf("%d", &numero);


    printf("Tabuada do %d:\n", numero);
    
    for (i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", numero, i, numero * i);
    
    }
    
    return 0;

}
 


