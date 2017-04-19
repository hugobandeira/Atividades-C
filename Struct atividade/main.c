#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
struct base {
	char nome[100];
	char end[100];
	char telefone[100];
	
};

struct base pegar;
int main (){

	
        printf("Digite seu nome : ");
	gets(pegar.nome);
 	
	
	
	printf("Digite seu endereço com numero: ");
	gets(pegar.end);
   
        
	
	
	
	printf("Digite seu telefone : ");
	gets(pegar.telefone);
      
	printf("entidade nome %s \n endereço %s \n e telefone %s\n ", pegar.nome, pegar.end, pegar.telefone);
      
}