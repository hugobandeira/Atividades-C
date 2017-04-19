#include <stdio.h>
#include <strings.h>

struct base1 {
		int num1;
};

struct base2 {
		int num2;
};

struct base1 pegar1[5];
struct base2 pegar2[5];

int main () {

int i,j;

for(i=0;i<5;i++) {

printf("Numero para a base 1[%d]:",i);
scanf("%d",&pegar1[i].num1);	
}

for(j=0;j<5;j++) {

printf("Numero para a base 2[%d]:",j);
scanf("%d",&pegar2[j].num2);	
}

int c;
while(c<i && c<j) {
	
	if(pegar1[c].num1 == pegar2[c].num2) {
				printf("\n Posicao %d, é iqual a outra. \n",c);
			}	
		c++;	
	}
}

