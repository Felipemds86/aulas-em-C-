#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// Revisão 01.1
int main(void) {
	/*	
		CRONOMETRO 01  ( sleep(1); )
	 	Quantos minutos deseja contar: 2
	 	00:00, 00:01, 00:02, 02:00 (2 minutos)
	*/

	int total=0, ciclos=0, seg = 00, min=0;


	printf(" Quantos minutos deseja contar: ");
	scanf("%d", &total);
	total = total * 60;

	while( ciclos <= total){
	
		printf("%02d:%02d\n", min, seg);
		seg++;

		if(seg % 60 == 0){
			min++;
			seg = 0;
		}

		sleep(1);
		ciclos++;
		system("clear");
	}

	printf("Tempo encerrado!!\n");
	return 0;

}