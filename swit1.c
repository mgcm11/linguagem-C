#include<stdio.h>
#include<stdlib.h>

int main(){
    int final_placa;
    printf("Digite o final da placa do carro\n");
    scanf("%d",&final_placa);

switch (final_placa){
    case 1:
    printf("Rodizio de veiculo na segunda-feira\n");
    break;

    case 2:
    printf("Rodizio de veiculos na segunda-feira\n");
    break;

    case 3:
    printf("Rodizio de veiculos na terça-feira\n");
    break;

    case 4:
    printf("Rodizio de veiculos na terça-feira\n");
    break;

    case 5:
    printf("Rodizio de veiculos na quarta-feira\n");
    break;
    
    case 6:
    printf("Rodizio de veiculos na quarta-feira\n");
    break;

    case 7:
    printf("Rodizio de veiculos na quinta-feira\n");
    break;
    
    case 8:
    printf("Rodizio de veiculos na quinta-feira\n");
    break;
    
    case 9:
    printf("Rodizio de veiculos na sexta-feira\n");
    break;

    case 0:
    printf("Rodizio de veiculos na sexta-feira\n");
    break;
    
    default:
    printf("este final nao existe\n");
    break;
    
    }
    printf("\n");
    return 0;
}