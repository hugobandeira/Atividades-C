//Preencher um vetor com números inteiros (8 números); solicitar um número do teclado. Pesquisar se
//esse número existe no vetor. Se existir, imprimir em qual posição do vetor e qual a ordem foi digitado.
//Se não existir, imprimir MSG que não existe.

#include<stdio.h>

int vet[8] = {1,2,3,4,5,6,7,8};
int i,ok,pos;

int main () {
	printf("Temos 8 posições com números, quer verificar se o número está lá ?");
		int n;
		scanf ("%d",&n);
	i = 0;
	while (i<8) {
		if (vet[i] == n) {
		ok = 1;
		pos = i;
			}
		i++;
	     }
	if (ok == 1) {
		printf("Seu número está na lista! Na posição vet[%d]\n",pos);
		} else {
		printf("Seu número não está na lista!\n");
			}
}
