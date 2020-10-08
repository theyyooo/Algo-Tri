/**
 * @brief Algorithme de tri d'un tableau avec la méthode séléction
 * 
 * @param valeur tableau de float
 * @param taille taille du tableau en colonne
 * @param sens définis le sens (croissant ou decroissant)
 */
void tri_selection(float *valeur, int taille, int sens)
{
    int i, j, min;
    
    for (i = 0; i < taille-1; i++)
    {
        min = i;
        
        for (j = i + 1; j < taille; j++){
            if (sens == 1)
            {
                if (valeur[j] < valeur[min]){
                    min = j;
                }
            }
            else
            {
                if (valeur[j] > valeur[min]){
                    min = j;
                }
            }       
        }     
        //t[i] va échanger avec t[min]
        if (min != i){

            int permutateur;
            
            permutateur=valeur[i];
            valeur[i]=valeur[min];
            valeur[min]=permutateur;
        }
    }
}
