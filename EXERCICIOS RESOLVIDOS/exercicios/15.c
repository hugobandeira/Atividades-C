
#include<stdio.h>

float quantia = 780.000;
float primeiro;
float segundo;
float terceiro;
float resto;

int main () {

	primeiro = (quantia*46)/100;

	segundo = (quantia*32)/100;

	resto = quantia - (primeiro+segundo);
	
	printf ("\n %f \n",primeiro);
	printf ("\n %f \n",segundo);
	printf ("\n %f \n",resto);
}
