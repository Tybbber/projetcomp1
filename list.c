#include <stdlib.h>
#include list.h


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

llist getValue(llist liste, char* variable)
{
  element* temp=liste;
  while (temp->nxt !=NULL)
  {
    if (variable == temp->var) {
      return temp->val;
    }
    temp = temp->nxt;
  }
  printf("caca prout c'est pas present\n");
  return false;
}
