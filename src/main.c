#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tri_bulle.h"
#include "tri_selection.h"
#include "tri_insertion.h"
#include "tri_par_tas.h"


int main()
{


	  float tab[] = {10.5, 11.7, 54.1, 45.5, 85.2, 21.5, 34.1, 27.7, 4.9, 54.6};

    //tri_selection_croissant(tab, 10);
    //tri_selection_decroissant(tab, 10);
    //tri_insertion_croissant(tab, 10);
    //tri_insertion_decroissant(tab, 10);
    
    
    //AfficheurTableau (VERIFICATION)
    for (int i = 0; i < 10; i++)
    {
        printf("%f \n", tab[i]);
    }
    
    
    
    //ECRITURE FICHIER.TXT
    FILE* fichier = NULL;
        
    fichier = fopen("benchme_data.txt", "w");
    
    for (int i = 0; i < 10; i++)
    {
        fprintf(fichier, "Resultat assertion : %f \n", tab[i]);
    }
    
    fclose(fichier);









	return (0);
}