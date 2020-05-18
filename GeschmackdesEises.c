#include <stdio.h>
int main(){

int i;
int traube = 113;
int erdbeere =115;
int schokolade=116;

do{

	printf("\n Geben Sie die Geschmacksnummer ein: \n");

	printf("\t (1)...Traube \n");

	printf("\t (2)...Erdbeere \n");

	printf("\t (3)...Schokolade \n");

	scanf ("%d",&i); 

}while((i<1) || (i>3));

	switch(i){
			case 1:

				printf("\t\t Sie haben Traube gewählt und der Kalorienwert ist: %d kcal \n", traube);
				break;

			case 2: 

			printf("\t\t Sie haben Erdbeere gewählt und der Kalorienwert ist:é:%d kcal \n", erdbeere);
				break;

			case 3:
			printf("\t\t Sie haben Schokolade gewählt und der Kalorienwert ist: %d kcal \n", schokolade);
			break;	

	}


	return 0;
}