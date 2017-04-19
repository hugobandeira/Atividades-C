#include <stdio.h>
#include <strings.h>

struct base {
	char nome[50];
	char end[50];
	int num;
	char bairro[50];
	int cep;
	char ref[50];
}; 

struct base pegar;

int main (int argc, char** argv) {
	
	printf ("\n Nome:");
	scanf(" %[^\n]",&pegar.nome);
	fflush(stdin);
	getchar(); 
	
	printf ("Endereço:");
	scanf("%[^\n]",&pegar.end);
	fflush(stdin);
	getchar(); 

	printf ("Número:");
	scanf("%d",&pegar.num);
	fflush(stdin);
	getchar();

	printf ("Bairro:");
	scanf("%[^\n]",&pegar.bairro);
	fflush(stdin);
	getchar(); 

	printf ("CEP:");
	scanf("%d",&pegar.cep);
	fflush(stdin);
	getchar(); 

	printf ("Referencias:");
	scanf("%[^\n]",&pegar.ref);
	fflush(stdin);
	getchar();
		
	printf("\n Os dados fornecidos: %s, %s, %d, %s, %d, %s. \n",pegar.nome, pegar.end,pegar.num,pegar.bairro,pegar.cep,pegar.ref);	
}

