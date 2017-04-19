#include <stdio.h>
#include <time.h>

int main(void)
{

    int mat[4][4] = {8,7,6,5,4,3,2,1};

    int aux,j,i,k,l;


	for(k=0;k<4;k++){
	for(l=0;l<4;l++){
	  for(i=0;i<4;i++){
	   for(j=0;j<4;j++){
	     if(mat[k][l] < mat[i][j]) {
	       aux = mat[i][j];
	       mat[i][j] = mat[k][l];
	       mat[k][l] = aux;
			}
                    }
                   }
                  }
                 }


for(i=0;i<4;i++){
  for(j=0;j<4;j++){
   printf("%5d",mat[i][j]);
                   }
    printf("\n");
                 }
}
