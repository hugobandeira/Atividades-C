#include <stdlib.h>
#include <stdio.h>

int main (){
  
        int vetor [5]={5,3,2,4,1};
        int i, j, min, aux, k;
		int *x;
       

                for ( i=0; i <=5; i++)
                {
                        min = i;
                for (j =i + 1; j <=5; j++)
                {
                if (vetor[j] < vetor[min]) 
                {
                        min = j;					
                }
        }
                        aux = vetor[i];
                        vetor[i] = vetor [min];
                        vetor[min] = aux;
        }

        for (k = 0; k<5; k++)
        {
        x= &vetor[k];	
        printf(" %d\n", *x);
        }
}

