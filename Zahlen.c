/*Welche Zahl ist größer?*/

#include <stdio.h>
#include <math.h>
int main (){

float numm1, numm2; 
	printf("Gib ein Nummmer: \n");
	scanf ("%f", &numm1);

	printf("Gib ein andere Nummer: \n");
	scanf ("%f", &numm2);

		if (numm1 > numm2)
			{
				printf(" Die erste Zahl ist größer als die zweite %.1f \n",numm1);
			}	
		else {
			printf("Die zweite Zahl ist grosse als die erste %.1f \n",numm2);
		}	
return 0;
}
