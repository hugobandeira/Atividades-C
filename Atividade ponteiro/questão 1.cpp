#include <stdio.h>
#include <stdlib.h>
	int *p, *q;
	
void pont1 (int *p, int *q){
	int a,b;
	printf("entre um valor para duas vairaveis: ");
	scanf("%d%d", &a,&b);
	p=&a;
	q=&b;
	printf(" o daddo entrado de %d e %d", *p,*q);
}	
	
	
	
void pont(int *p, int *q){
	int a,b;
	p=&a;
	q=&b;
	printf ("Endereço %i\n", &q);
	printf ("Endereço %i", &p);
}
int main(){
	
	pont(p,q);
	pont1(p,q);
}

