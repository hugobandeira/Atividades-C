//Preencher um vetor com os numeros pares do número 2 a 20.

#include<stdio.h>

int main () {

int r;
int j;
int n;
int vet[20]; // = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	for (int i=2; i <= 20 ; i++ ) {

		if (i % 2 == 0) {
			vet[i]=i;
			printf ("Os numeros pares %d\n",vet[i]);
		}
		}


}
