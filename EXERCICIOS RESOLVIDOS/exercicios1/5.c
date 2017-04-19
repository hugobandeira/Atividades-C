#include <stdio.h>
#include <strings.h>

struct base {
		int num;
};

struct base pegar[100];

int main () {
	
int c=1;
int posicao = 0;
	
while(c != 0 ) {
	printf("Numero:");
	scanf("%d",&pegar[posicao].num);

if (pegar[posicao].num < 18) {
		printf("\n Resultado: %d \n",pegar[posicao].num);	
	}

if(pegar[posicao].num == 0 ) {
		c=0; 
		}
		
		posicao++; 
}
int j;

}

