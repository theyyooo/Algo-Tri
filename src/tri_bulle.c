
/**
 * @brief Algorythm de tri à bulle
 * 
 * @param tab tableau a trier
 * @param taille taille du tableau a trier
 * @param sens sens du tri (décroissant 0, croissant 1)
 */
void tri_bulle(float tab[], int taille, int sens)
{
    for (int i=0 ; i < taille-1; i++)
  {
    for (int j=0 ; j < taille-i-1; j++)
    {
        if (sens == 1)
        {
            if (tab[j] > tab[j+1]) 
            {
                float tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        } 
        else
        {
            if (tab[j] < tab[j+1]) 
            {
                float tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
           
    } 
  }   
}
