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

struct base pegar[2];

int main () {
	
	for(int i=0;i<2;i++) {
	
	printf ("\nNome:");
	scanf("%[^\n]",&pegar[i].nome);
	fflush(stdin);
	getchar(); 
	
	printf ("Endereço:");
	scanf("%[^\n]",&pegar[i].end);
	fflush(stdin);
	getchar(); 

	printf ("Número:");
	scanf("%d",&pegar[i].num);
	fflush(stdin);
	getchar();

	printf ("Bairro:");
	scanf("%[^\n]",&pegar[i].bairro);
	fflush(stdin);
	getchar(); 

	printf ("CEP:");
	scanf("%d",&pegar[i].cep);
	fflush(stdin);
	getchar(); 

	printf ("Referencias:");
	scanf("%[^\n]",&pegar[i].ref);
	fflush(stdin);
	getchar();
	

}

for(int j=0;j<2;j++) {	
	
	printf("\n Os dados fornecidos [%d]: %s, %s, %d, %s, %d, %s. \n",j,pegar[j].nome, pegar[j].end,pegar[j].num,pegar[j].bairro,pegar[j].cep,pegar[j].ref);
	
}
	
}

