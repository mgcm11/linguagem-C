#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    char aluno[] = "";
    float n1,n2,n3,n4,media;

    printf("digite o nome do aluno\n");//printf oque interage com o usuario 
    scanf("%s",&aluno);//scanf execulta o comando para o usuario

    printf("digite a primeira nota\n");
    scanf("%f",&n1);

    printf("digite a segunda nota\n");
    scanf("%f",&n2);

    printf("digite a terceira nota\n");
    scanf("%f",&n3);

    printf("digite a quarta nota\n");
    scanf("%f",&n4);
    
    media=(n1 + n2 + n3 + n4) /4;

    

    if(media>=6){
        printf("aluno aprovado\n");
    }
    else if (media<= 4){
        printf("aluno reprovado");
    }
    else{
        printf("aluno recuperaçao");
    }
        
    }
    
    else{
        printf("aluno reprovado\n");
    }

    return 0;
}