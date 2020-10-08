#include "tri_insertion.h"

void tri_insertion_croissant(float *valeur, int taille)
{
    int i, j, x;
    
    for (i = 1; i < taille; i++)
    {
        x = valeur[i];
        
        for (j = i; j>0 && valeur[j-1]>x; j--)
        {
            valeur[j] = valeur[j - 1];
        }
        valeur[j]=x;
    }
    
}


void tri_insertion_decroissant(float *valeur, int taille)
{
    int i, j, x;
    
    for (i = 1; i < taille; i++)
    {
        x = valeur[i];
        
        for (j = i; j>0 && valeur[j-1]>x; j--)
        {
            valeur[j] = valeur[j - 1];
        }
        valeur[j]=x;
    }
    
}