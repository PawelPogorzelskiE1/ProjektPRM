//---------------------------BAZA LEKOW--------------------------//
/* Poczatkowo wedlug wymagan program mial skladac sie z dwoch list. Jednak po rozmowie z prowadzacym doszlismy do wniosku, ze
takie rozwiazanie jest bardzo nieoptymalne i nie wnosi zadnych lepszych funkcjonalnosci do programu
*/

#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"
#define MAX_ROZM 20

enum typ{Przeciwbolowe, Antydepresyjne, Immunosupresyjne, Przeciwhistaminowe, Nasercowe};
enum typ kategoria = Przeciwbolowe;

typedef struct ListaLekow{
char kategoria[MAX_ROZM];
char nazwa[MAX_ROZM];
int cena;
int dostepnosc;
struct ListaLekow * nast;
}Lek;




int main()
{
    printf("%d\n", kategoria);
    return 0;
}
