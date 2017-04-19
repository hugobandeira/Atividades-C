#include<stdio.h>

int main () {

int r = 1;
int j;
int n;
int aux;
float vet[5];
float cub[5];

	for (int j=0; j < 5 ; j++) {
		printf("Coloca ai.... :");
		scanf("%d",&vet[j]);
	//	vet[j]=rand();

		cub[j] = vet[j]*vet[j]*vet[j];

	}

	for (int i=0; i < 5 ; i++ ) {
			printf ("\nVetor adicionado:  %d\n",vet[i]);

			printf ("\nCubo de cada um:   %d\n",cub[i]);

		}
}
