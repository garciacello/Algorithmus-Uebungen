/*Programm zur Berechnung des Wertes von Kopien.
Eine Kopie kostet 0,25 Cent und über 
100 Kopien 0,20 Cent. Wie viel wird es bezahlt?*/
#include <stdio.h>
#include <math.h>

int main(){
float kopien, meng1, meng2;
float v1=0.25, v2=0.20;

	printf("Wie viel Kopien moechtest du? \n");
	scanf ("%f", &kopien);

	meng1= v1*kopien;
	meng2= v2*kopien;

	if (kopien <=100)
	{
		printf("Du musst bezahlen: %.2f \n", meng1);
	}
	else {

		printf("Der reduzierte Wert wird sein : %.2f \n",meng2 );
	}


	return 0;
}