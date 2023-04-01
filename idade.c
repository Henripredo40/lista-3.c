#include<stdio.h>


/*
        Entrada: Idade.
        Enunciado: Faça um programa que receba a idade de uma pessoa e se idade menor que 30 aparece a mensagem "Você é muito jovem". Caso idade maior que 30 anos, o programa não fará nada.
        Saida: Voce eh muito jovem.

*/

int main(){

//Declaração das variáveis:

             int idade;

//Entrada de dados:

            printf("Insira Sua Idade:");
            scanf("%d",&idade);

//Processamento

            if(idade <= 30){
            printf("Voce eh muito jovem !");
            }
            else{
            }

        return 0;
}
