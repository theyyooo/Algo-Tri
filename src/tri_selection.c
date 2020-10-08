//CROISSANT

void tri_selection_croissant(float *valeur, int taille)
{
    
    int i, j, min;
    
    for (i = 0; i < taille-1; i++)
    {
        min = i;
        
        for (j = i + 1; j < taille; j++){
            
            if (valeur[j] < valeur[min]){
                min = j;
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


//DECROISSANT
void tri_selection_decroissant(float *valeur, int taille)
{
    
    int i, j, min;
    
    for (i = 0; i < taille-1; i++)
    {
        min = i;
        
        for (j = i + 1; j < taille; j++){
            
            if (valeur[j] > valeur[min]){
                min = j;
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