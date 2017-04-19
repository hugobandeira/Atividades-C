#include <stdio.h>
#include <strings.h>

struct base1 {
	float num1;
	float num2;
	float num3;
	float resultado;
};

struct base1 pegar;

int main () {

printf("Numero X : ");
scanf("%f",&pegar.num1);	

printf("Numero Y : ");
scanf("%f",&pegar.num2);	

printf("Numero Z : ");
scanf("%f",&pegar.num3);

pegar.resultado = (pegar.num1*pegar.num1)+pegar.num2+pegar.num3;

	printf("\n Resultado %f : \n",pegar.resultado);

}

