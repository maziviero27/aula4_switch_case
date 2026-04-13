#include <stdio.h>

int main(){
    int opcao,  presenca;
    float nota_1, nota_2, media;
    printf("Digite a opcao desejada: \n");
    printf("---------menu---------\n");
    printf("OPCAO 1 - MEDIA DAS NOTAS\n");
    printf("OPCAO 2 - PRESENCA\n");
    scanf("%i", &opcao);

    switch(opcao){

        case 1: 
        printf("VOCE SELECIONOU A OPCAO 1\n");
        printf("-----CALCULADORA DE MEDIA DAS NOTAS-----\n");
        printf("DIGITE SUA PRIMEIRA NOTA: ");
        scanf("%f", &nota_1);
        printf("DIGITE SUA SEGUNDA NOTA: ");
        scanf("%f", &nota_2);
        media = (nota_1 + nota_2)/2;
        printf("A MEDIA FINAL E: %.2f", media, ".");        
        break;

        case 2: 
        printf("VOCE SELECIONOU A OPCAO 2\n");
         printf("-------AVERIGUAR PRESENCA-------\n");
        printf("DIGITE A SUA PRESENCA: ");
        scanf("%i", &presenca);
        if(presenca > 74 && presenca < 101){
            printf("APROVADO COM %i %%", presenca);
        }
        else if(presenca > 100 || presenca < 0 ){
            printf("vai se fuder porra");
        }
        else{
            printf("REPROVADO COM %i %%", presenca);
        }
        break;

        default:
        printf("OPCAO INVALIDA");
        
    }
    return 0;
}