
#include<stdio.h>

int comprimento;
int largura;
int preco;
int resultado;
int area;

int main () {

	printf ("Coloque o Comprimento:");
	scanf("%d",&comprimento);
	
	printf ("Coloque o Largura:");
	scanf("%d",&largura);
	
	printf ("Coloque o preço por Metro:");
	scanf("%d",&preco);
	
	area = (comprimento*2)+(largura*2);
	resultado = resultado * area;
	
	printf("\nValor para cercar o terreno: R$ %d,00\n",area);
	
}
