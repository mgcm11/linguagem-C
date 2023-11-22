#include<stdio.h>

int main(){
    int ano;
    
        printf("digite o ano\n");
        scanf("%d",&ano);
        if(ano % 4 == 0)
            printf("se %d e bissexto\n",ano);
            
        else
            printf("o numero %d nao e bissexto\n",ano);

        
        return 0;


}