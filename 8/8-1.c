// Zadanie 8.1
// Dana jest następująca struktura:
// struct punkt {
// float x, y;
// };
// Napisz funkcję, która wypełni danymi pobranymi od użytkownika tablicę n punktów. Wskaźnik do tablicy oraz jej rozmiar przekaż jako argumenty funkcji.

#include <stdio.h>
#include <stdlib.h>
struct punkt 
{
   float x, y;
} ;
void fillArray(struct punkt *tab, int n);
void show(struct punkt *tab, int n) {
   int i;
   printf("[ (%1.2f, %1.2f), ", tab[0].x, tab[0].y);
   for ( i = 1; i < n-1; i++) printf("(%1.2f, %1.2f), ", tab[i].x, tab[i].y);
   printf("(%1.2f, %1.2f) ]\n", tab[n-1].x, tab[n-1].y);
   return;
}

int main()
{
   int n = 0;
   while (n <= 0)
   {
      printf("Podaj rozmiar tablicy:\n");
      scanf("%d", &n);
   }
   struct punkt *tab = calloc(n, n*sizeof(struct punkt));
   fillArray(tab, n);
   show(tab, n);
   return 0;
}

void fillArray(struct punkt *tab, int n)
{
   printf("Podaj elementy tablicy:\n");
   for(int i = 0; i < n; i++) scanf("%f\n%f", &tab[i].x, &tab[i].y);
   return;
}