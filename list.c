#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "list.h"


llist addVar(llist liste, int valeur, char* variable)
{
  element* nouvelElement = malloc(sizeof(element));
  nouvelElement->val = valeur;
  nouvelElement->nxt = NULL;
  nouvelElement->var = variable;

  if(liste == NULL)
  {
    return nouvelElement;
  }
  else
  {
    element* temp=liste;
    while(temp->nxt !=NULL)
    {
      temp = temp->nxt;
    }
    temp->nxt = nouvelElement;
    return liste;
  }
}

int getValue(llist liste, char* variable)
{
  element* temp=liste;
  while (temp->nxt !=NULL)
  {
    if (strcmp(variable, temp->var)) {
      int a;
      return temp->val;
    }
    temp = temp->nxt;
  }
  printf("caca prout c'est pas present\n");
  return false;
}
