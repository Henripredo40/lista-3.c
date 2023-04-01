#include<stdio.h>

/*      Entrada: 5 notas do aluno.
        Enunciado: Programa que calcule a média de 5 notas de um aluno.
        Saida: media da notas.


*/
    #include <stdio.h>

int main(void)
{
  //Declaração das variáveis
  float nota1, nota2,nota3,nota4,nota5, media;


  printf("---- Calculando a media para um aluno -----\n\n");

    printf("Digite a primeira nota do aluno:\n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota do aluno:\n");
    scanf("%f",&nota2);

    printf("Digite a terceira  nota do aluno:\n");
    scanf("%f",&nota3);

    printf("Digite a quarta nota do aluno :\n");
    scanf("%f",&nota4);

    printf("Digite a quinta nota do aluno :\n");
    scanf("%f",&nota5);

    //Processamento
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    //Saída
    printf("\nMedia do aluno = %.1f\n",media);
    printf("------------------------------------------\n\n");

    return 0;
  }


