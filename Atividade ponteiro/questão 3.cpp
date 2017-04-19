#include <stdio.h>
#include <stdlib.h>

int main(){
int *p;
	int ma[100][100];
	int a=1;
	for (int j=0;j<=99; j++){
		for (int k=0; k<=99; k++){
			ma[j][k]=0;
			p=&ma[j][k];
		    printf("posicao %i x %i tem o endereço %i\n", j,k, &p);
		}
	}
	
	for (int g=0;g<=99; g++){
		for (int h=0; h<=99; h++){
		    ma[g][h]=a++;
		    printf("posicao %i x %i tem o elemento %i\n", g,h, ma[g][h]);
		}
	}
}
