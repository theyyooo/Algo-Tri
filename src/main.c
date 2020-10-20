#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tri_bulle.h"
#include "tri_selection.h"
#include "tri_insertion.h"
#include "tri_par_tas.h"

// "%d" int

// "%ld" long

// "%f"float

// "%f"double

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

	float tab[20] = {10.5, 11.7, 54.1, 45.5, 85.2, 21.5, 34.1, 27.7, 4.9, 54.6, 10.6, 11.5, 54.3, 45.7, 85.9, 21.1, 34.6, 27.5, 4.7, 54.3};

	int taille = 20;

	int sens = 0; //0 = decroissant et 1 = croissant

	tri_bulle(tab, taille, sens);
    // tri_selection(tab, taille, sens);
     //tri_insertion(tab, taille);
    
    // ECRITURE FICHIER.TXT

    // FILE* fichier = NULL;
        
    // fichier = fopen("benchme_data.txt", "w");
    
    // for (int i = 0; i < taille; i++)
    // {
    //     fprintf(fichier, "Resultat assertion : %.01f \n", tab[i]);
    // }
    
    // fclose(fichier);

    // TEMPS D'EXECUTION

    // float temps;
    // clock_t t1, t2;
 
    // t1 = clock();

    //tri_bulle(tab, taille, sens);
    //tri_selection_croissant(tab, taille);
    //tri_selection_decroissant(tab, taille);
    //tri_insertion_croissant(tab, taille);
    //tri_insertion_decroissant(tab, taille); 

    // t2 = clock();
    // temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    // printf("temps d'exécution = %f\n", temps);

    //ECRITURE CSV FILE

    // FILE* fp = NULL;
    // FILE* fp = fopen ("excel.csv" , " w");

    // for (int i = 0; i < taille; i++)
    // {
    //     fprintf(fp, ", hello", tab[i]);
    // }

    // fclose(fp);

	return (0);
}