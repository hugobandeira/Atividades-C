#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[100];
};

struct pessoa pegar[10];
int main (){
	int i;
	for ( i=0 ; i=<10 ; i++)
	{
	printf("digite 10 nomes: ");
	scanf("%s", &pegar[i].nome);
        return 0;
}	
}
