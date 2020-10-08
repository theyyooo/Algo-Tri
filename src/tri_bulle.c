void tri_bulle(float tab[], int taille, int sens)
{
    if (sens = 1)
    {
        for (int i = 0; i < taille; i++)
        {
            for (int j = taille-1; j >= i; j--)
            {
                if (tab[j+1] > tab[j])
                {
                    float temp = tab[j+1];
                    tab[j+1] = tab[j];
                    tab[j] = temp;
                }
                
            }
            
        }
        
        for (int i = 0; i < taille; i++)
        {
            printf(" %.01f", tab[i]);
        }
    }
    else
    {
        for (int i = taille; i > 0; i++)
        {
            for (int j = taille-1; j >= i; j--)
            {
                if (tab[j+1] > tab[j])
                {
                    float temp = tab[j+1];
                    tab[j+1] = tab[j];
                    tab[j] = temp;
                }
                
            }
            
        }
        
        for (int i = 0; i < taille; i++)
        {
            printf(" %.01f", tab[i]);
        }
    }
    
   
}