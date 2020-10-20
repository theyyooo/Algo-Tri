/**
 * @brief Algorithme tri d'un tableau avec la méthode insertion
 * 
 * @param valeur tableau de float
 * @param taille taille du tableau en colonne
 */
void tri_insertion(float *valeur, int taille, int sens)
{
 int j;
   for (int i = 1; i < taille; i++)
   {
      float temp = valeur[i];
      j = i - 1;
      while ((temp < valeur[j]) ^ sens && j >= 0)
      {
            valeur[j + 1] = valeur[j];
            j = j - 1;
      }
      valeur[j + 1] = temp;
   }
    
}