 #include<stdio.h>
   #include<stdlib.h>
      // struct e ponteiros
   
   typedef struct diciplina{
      char nome[30];
      float nota;
   }Diciplina;

   typedef struct aluno{
   char nome[20];
   int matricula;
   Diciplina * diciplina;
   }Aluno;

   int main(void){

      Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
      if (aluno == NULL){
         printf("Sem memoria\n");
      exit (1);

   }
   printf("Digite o nome do aluno: \n");
   scanf(" %[^\n]", aluno->nome);
   printf("Difite a matricula: \n");
   scanf("%d", &aluno->matricula);
   printf("Digite o nome da diciplina: \n");
   scanf(" %[^\n]", aluno->diciplina->nome);
   printf("Dados \n Nome: %s \n Matriculas: %d \n Diciplina: %s \n", aluno->nome, aluno->matricula, aluno->diciplina->nome);
   free(aluno->diciplina);
   free(aluno);
   return 0;
   }