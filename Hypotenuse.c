/*Die hypotenuse berechnen
Wie lange ist die Hypotenuse? */

#include <stdio.h>
#include <math.h>

float wurzel ()
{	
	float kath1, kath2, wurzel,flaeche;
	printf("Geben Sie den Wert einer Kathete 1: \n");
	scanf("%f", &kath1);
	printf("Geben Sie den Wert einer Kathete 2: \n");
	scanf("%f", &kath2);

	flaeche = (kath1 * kath1) + (kath2 * kath2);
	wurzel = sqrt (flaeche);

	return wurzel; 
}

int main(){
	float ergebnis = 0;
	ergebnis = wurzel();

	printf("Der Hypotenuse-Bereich ist: %.1f",ergebnis);

return 0;

}