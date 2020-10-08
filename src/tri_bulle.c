void tri_bulle(float tab[], int taille)
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