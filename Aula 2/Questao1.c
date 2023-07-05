#include <stdio.h>
#include <stdlib.h>
 int main(void){
    int tamanho;
     printf("digite o tamanho do vetor\n");
     scanf("%d",  &tamanho);

     int * vetor = (int*) malloc(tamanho*sizeof(int));
     if (vetor == NULL){
        printf("erro do alocacao\n");
        exit (1);
     }
     else{
        printf("alocacao realizada com sucesso");

     }
     //reeber elementos inseridos pelo usuario
     int contador;
      printf("digite os valores do vetor: \n");
     for (contador = 0; contador < tamanho; contador ++){
        scanf("%d", &vetor[contador]);

     }
      printf("os numeros invertidos do vetor fica");
     for (contador = tamanho-1; contador >=0; contador--){
        printf("\n%d\n", vetor[contador]);
     }
     free (vetor);
     return 0;
 }