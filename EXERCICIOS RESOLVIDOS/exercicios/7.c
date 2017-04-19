
#include<stdio.h>

int main () {

int r = 1;
int j;
int n;
int aux;
int vet[8] = {1,2,3,4,50,6,70,8};

	for (int j=0; j < 8 ; j++) {
		if (vet[j]>30) {
			printf("Numero maior que 30: %d\n", vet[j]);
			}
	}

	for (int i=0; i < 8 ; i++ ) {
			n+=vet[i];
			printf ("Soma %d\n",n);
		}

}
