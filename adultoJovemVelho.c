#include<stdio.h>

/*
        Entrada: idade
        Enunciado: Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a mensagem "Novos 50". Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem.
        Saida: novos 50 , adulto , jovem.


*/


int main(){

//Declaraçao de variavel :

int idade;


//Entrada de Dados:

        printf("Insira sua Idade:");
        scanf("%d",&idade);

//Processamento / Saida

        if(idade > 70){
         printf("NOVOS 50");
         return 0;
        }
        if(idade > 21){
         printf("\nADULTO");
        }
        else{
        printf("JOVEM");
        }


}
