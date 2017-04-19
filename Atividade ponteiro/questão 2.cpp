#include <stdio.h>
#include <stdlib.h>
	int *a, *b, *c, *d;
void pont(int *a, int *b, int *c, int *d);
int main(){
	pont(a, b, c, d);
	
	
}
void pont(int *a, int *b, int *c, int *d){
	int vet[3];
	for (int h=0; h<4; h++){
		printf ("Digite os valores do vetor: \n");
		scanf ("%i", &vet[h]);
	}
	a=&vet[0];
	b=&vet[1];
	c=&vet[2];
	d=&vet[3];
	printf("Valor %i ta na posicao %i\n",vet[0], &a);
	printf("Valor %i ta na posicao %i\n",vet[1], &b);
	printf("Valor %i ta na posicao %i\n",vet[2], &c);
	printf("Valor %i ta na posicao %i\n",vet[3], &d);
	
}
