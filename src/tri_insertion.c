/**
 * @brief Algorithme tri d'un tableau avec la méthode insertion
 * 
 * @param valeur tableau de float
 * @param taille taille du tableau en colonne
 */
void tri_insertion(float *valeur, int taille)
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