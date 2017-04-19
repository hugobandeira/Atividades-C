#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int count = 10;
	int *p;
	
	
	p=&count;
	
	
	
	
	printf("o valor so de p: %d\n", p);
	
	
	
	printf("o conteudo apontado po *p : %d \n", *p);
	
	*p=12;
	
	printf("o conteudo apontado depois de receber o valor: %d\n", *p);
	
	

	
	count=20;
	
	printf("o conteudo de count: %d\n", count);
	
		printf("o valor so de *p: %d\n", p);
	
	
	system("PAUSE");
	
	
	
}
