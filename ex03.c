#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

typedef struct clientes {
  char Nacionalidade[50];
  char Nome[50];
  char Ensino[50];
  int idade;
  struct clientes *prox;
} clientes;

int main() {
  clientes *p, *auxp, *prim, *aux, *novo;
  int i = 0;
  int cont = 1;

  prim = NULL;
  p = (clientes *) malloc(sizeof (clientes));
  prim = p;
  printf("Nacionalidade:\t");
  scanf("%s", &p->Nacionalidade);
  printf("\nNome:\t");
  scanf("%s", &p->Nome);
  printf("\nEnsino:\t");
  scanf("%s", &p->Ensino);
  printf("\nIdade:\t");
  scanf("%d", &p->idade);
  
  p->prox = NULL;

  for (i = 1; i < 10; i++) {
    printf("\n=============================================\n");
    auxp = (clientes *) malloc(sizeof (clientes));
    p->prox = auxp;
    printf("Nacionalidade:\t");
    scanf("%s", &auxp->Nacionalidade);
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
    printf("\nPrimeira Vez: %d\n",cont);
    printf("\n==============================================\n");
    printf("\nNacionalidade: %s", aux->Nacionalidade);
    printf("\nNome: %s", aux->Nome);
    printf("\nEnsino: %s", aux->Ensino);
    printf("\nIdade: %d", aux->idade);
    aux = aux->prox;
    cont+=1;
  }
  cont = 1;

  aux = prim;

  for (i = 0; i < 3; i++) {
    aux = aux->prox;
  }

  novo=(clientes *) malloc(sizeof (clientes));
  novo->idade=56;
  strcpy(novo->Nacionalidade, "Brasil");
  strcpy(novo->Ensino, "Médio");
  strcpy(novo->Nome, "Alberto");
  novo->prox = aux->prox;
  aux->prox = novo;
  aux = prim;

  while (aux != NULL) {
    printf("\n==============================================\n");
    printf("\nSegunda Vez: %d\n", cont);
    printf("\n==============================================\n");
    printf("\nNacionalidade: %s", aux->Nacionalidade);
    printf("\nNome: %s", aux->Nome);
    printf("\nEnsino: %s", aux->Ensino);
    printf("\nIdade: %d", aux->idade);
    aux = aux->prox;
    cont+=1;
  }

  return 0;
}