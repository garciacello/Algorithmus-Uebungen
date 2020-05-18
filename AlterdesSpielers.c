/* Programm, das die Kategorie eines Fußballspielers informiert
in Anbetracht ihres Alters: kindlich (13 Jarhe alt), 
jugendlich (17 Jahre alt),oder Senior (über 17 Jahre) */


#include <stdio.h>
#include <math.h>
int main (){

int alter;
	printf("Gebe Dein Alter ein: \n");
	scanf("%d", &alter);

	if (alter <=13){
		printf("Du bist ein Kinderspieler, weil dein alter %d ist \n",alter );
	}
	else if (alter > 13 && alter <= 17)
	{
		printf("Du bist ein Jugendspieler, weil dein alter %d ist \n",alter );
	}

	else {
		printf("Du bist ein Senior Spieler, weil dein alter %d ist \n",alter);
	}

return 0;
}