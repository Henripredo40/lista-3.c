#include<stdio.h>

/*
        Entrada: Idade.

        Enuciado: Elabore um programa para verificação de situação eleitoral, onde será informada somente a idade do eleitor, considere as situações abaixo:

        Saida:  Menor que 0 não nasceu
        0-15 não vota
        16-17 opcional
        18-65 obrigatório
        exatamente 41- somente ganha prêmio e não vota!!!
        > 65 opcional
        exatamente 88 - somente ganha prêmio e não vota!!!

*/

int main(){

//Declaraçao de Variaveis:

    int idade;


//Entrada de Dados:

    printf("Insira sua Idade:");
    scanf("%d",&idade);

//Processamento/Saida:

        if(idade <= 0) {
        printf("\nNAO NASCEU");
        return 0;
        }
        if(idade == 88){
        printf("SOMENTE GANHA PREMIO E NAO VOTA!!");
        return 0;
        }
        if(idade == 65){
        printf("\nOPCIONAL");
        return 0;
        }
        if(idade == 48){
        printf("SOMENTE GANHA PREMIO E NAO VOTA!!");
        return 0;
        }
        if(idade <= 15){
        printf("\nNAO VOTA");
        return 0;
        }
        if(idade == 16){
        printf("\nOPCIONAL");
        return 0;
        }
        if(idade == 17){
        printf("\nOPCIONAL");
        return 0;
        }
        if(idade == 18){
        printf("\nOBRIGATORIO");
        return 0;
        }
        if(idade <= 47){
        printf("\nOBRIGATORIO");
        return 0;
        }


    return 0;
}
