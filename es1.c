#include <stdint.h>
#include <stdio.h>

int main ()
{

int a, b, somma=0, sommassoluti=0;

printf ("Inserisci il numero A:\n");
scanf("%d", &a);

printf ("Inserisci il numero B:\n");
scanf("%d", &b);

if (a>0)
	printf("Il numero A e' POSITIVO\n");
else
	printf("Il numero B e' NEGATIVO\n");

if (b%2==0)
	printf("Il numero B e' PARI\n");
else
	printf("Il numero B e' DISPARI\n");

somma=a+b;

printf("La somma di A + B e': %d\n", somma);


if(a<0) 
   a=-a;
if (b<0)
   b=-b;
sommassoluti=a+b;
printf("Laa somma dei valori assoluti di A + B e': %d\n", sommassoluti);

return 0;
}
