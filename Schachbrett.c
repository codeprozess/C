#include <stdio.h> 

int main(void) 
{ 
	int brett[8][8] = { 0 };

	brett[0][0] = 2; //Turm
	brett[0][1] = 3; //Springer
	brett[0][2] = 4; //Läufer
	brett[0][3] = 6; //könig
	brett[0][4] = 5; //Dame
	brett[0][5] = 4; //Läufer
	brett[0][6] = 3; //Springer 
	brett[0][7] = 2; //Turm

	brett[1][0] = 1;
	brett[1][1] = 1;
	brett[1][2] = 1;
	brett[1][3] = 1;
	brett[1][4] = 1;
	brett[1][5] = 1;
	brett[1][6] = 1;
	brett[1][7] = 1;
	
	
	brett[6][0] = 1;
	brett[6][1] = 1;
	brett[6][2] = 1;
	brett[6][3] = 1;
	brett[6][4] = 1;
	brett[6][5] = 1;
	brett[6][6] = 1;
	brett[6][7] = 1;
	
		brett[7][0] = 2; //Turm
		brett[7][1] = 3; //Springer
		brett[7][2] = 4; //Läufer
		brett[7][3] = 6; //könig
		brett[7][4] = 5; //Dame
		brett[7][5] = 4; //Läufer
		brett[7][6] = 3; //Springer 
		brett[7][7] = 2; //Turm




	int i, j;

	// Schleife fuer Zeilen, Y-Achse
	for(i=0; i<8; i++) {
		// Schleife fuer Spalten, X-Achse
		for(j=0; j<8; j++) {
			printf("%d ", brett[i][j]);
		}
		printf("\n");
	}
	

}
