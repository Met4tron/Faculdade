#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

typedef struct professores {
  char Nome[50];
  char Ensino[50];
  int idade;
  int matricula;
  struct professores *prox;
} professores;

int main() {
  professores *p, *auxp, *prim, *aux, *novo;
  int i = 0;

  prim = NULL;
  p = (professores *) malloc(sizeof (professores));
  prim = p;
  printf("\nNome:\t");
  scanf("%s", &p->Nome);
  printf("\nEnsino:\t");
  scanf("%s", &p->Ensino);
  printf("\nIdade:\t");
  scanf("%d", &p->idade);
  
  p->prox = NULL;

  for (i = 1; i < 27; i++) {
    printf("\n=============================================\n");
    auxp = (professores *) malloc(sizeof (professores));
    p->prox = auxp;
    printf("\nNome:\t");
    scanf("%s", &auxp->Nome);
    printf("\nEnsino:\t");
    scanf("%s", &auxp->Ensino);
    printf("\nIdade:\t");
    scanf("%d", &auxp->idade);
    p = auxp;
  }

  aux = prim;
  p->prox = NULL;

  while (aux != NULL) {
    printf("\n==============================================\n");
    printf("\nPrimeira Vez\n");
    printf("\n==============================================\n");
    printf("\nNome: %s", aux->Nome);
    printf("\nEnsino: %s", aux->Ensino);
    printf("\nIdade: %d", aux->idade);
    aux = aux->prox;
  }

  aux = prim;

  for (i = 0; i < 7; i++) {
    aux = aux->prox;
  }

  novo=(professores *) malloc(sizeof (professores));
  novo->idade=56;
  novo->matricula=2233;
  strcpy(novo->Ensino, "Mestrado");
  strcpy(novo->Nome, "Haroldo");
  novo->prox = aux->prox;
  aux->prox = novo;
  aux = prim;

  while (aux != NULL) {
    printf("\n==============================================\n");
    printf("\nSegunda Vez\n");
    printf("\n==============================================\n");
    printf("\nNome: %s", aux->Nome);
    printf("\nEnsino: %s", aux->Ensino);
    printf("\nIdade: %d", aux->idade);
    aux = aux->prox;
  }

  aux = prim;

  aux = aux->prox;
  auxp = aux->prox;
  aux->prox = auxp->prox;
  free(auxp);

  while (aux != NULL) {
    printf("\n==============================================\n");
    printf("\nTerceira Vez\n");
    printf("\n==============================================\n");
    printf("\nNome: %s", aux->Nome);
    printf("\nEnsino: %s", aux->Ensino);
    printf("\nIdade: %d", aux->idade);
    aux = aux->prox;
  }

  return 0;
}