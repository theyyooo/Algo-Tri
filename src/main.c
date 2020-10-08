#include <stdio.h>
#include "tri_bulle.h"
#include "tri_selection.h"
#include "tri_insertion.h"
#include "tri_par_tas.h"

void theo(){
	float tab[10] = {10.5, 11.7, 54.1, 45.5, 85.2, 21.5, 34.1, 27.7, 4.9, 54.6};
	int taille = 10;
	tri_bulle(tab, taille);
}

void charles(){
	double tab[10] = {10.5, 11.7, 54.1, 45.5, 85.2, 21.5, 34.1, 27.7, 4.9, 54.6};
}

int main()
{
	theo();
	return (0);
}