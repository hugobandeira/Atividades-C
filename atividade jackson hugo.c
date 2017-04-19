#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct li{
	int item;
	struct li *ant;
	struct li *prox;
};
typedef struct li lista;
lista* list;
int esq, dir;
#define CN 5
int n;
int mat[100][100];
int vet[100];
int ele1, ele2, ele3;
int main(){
	
	void inicio();
	inicio();
	void mostrar();

}
void vetor(){
	int a, b;
    system("cls");
	printf ("Digite o tamanho do vetor: ");
	scanf("%i", &n);
        printf ("\n1 para inserir os valores aleatorios: \n");
        printf ("\n2 para inserir os valores manuais:");
        scanf ("%i", &a);
	if (a==1){
        for(b=0; b<n; b++){
            vet[b]=rand()%100;
	    }
    }else{
        for(b=0; b<n; b++){
            printf("\nDigite o valor %i do vetor: ", b);
            scanf ("%i", &vet[b]);
        }
        
    }
    for (int h=0; h<n; h++){
        printf ("\n%i\n", vet[h]);
    }
    getch();
}
void matriz(){
	int a, b,c;
    system("cls");
	printf ("Digite o tamanho da matriz: ");
	scanf("%i", &n);
    printf ("\n1 para inserir os valores aleatorios: \n");
    printf ("\n2 para inserir os valores manuais:");
    scanf ("%i", &a);
    printf ("%i ss\n", n);
	if (a==1){
        for (a=0; a<n; a++){
			for (b=0; b<n; b++){
				mat[a][b]=rand()%100;
			}
		}
    }else{
        for(b=0; b<n; b++){
            for(c=0; c<n; c++){
            	printf("\nDigite o valor %i X %i do vetor: ", b, c);
                scanf ("%i", &mat[b][c]);
			}
		}
    }
        for (int h=0; h<n; h++){
        	for (int k=0; k<n; k++){
        		printf ("\n%i\n", mat[h][k]);
			}
        } 
    getch();
}
void inicio(){
	int z;
	system("cls");
	printf("\n\tDigite 1 para inserir um vetor.");
	printf("\n\tDigite 2 para inserir uma matriz.");
	printf("\n\tQual opcao?");
	scanf("%i", &z);
	switch(z){
		case 1:
			vetor();
			void ordenar();
			ordenar();
			break;
		case 2:
			matriz();
			void ordenar();
			ordenar();
			break;
	}
}
void ordenar(){
	int o;
	float aux;
	system("cls");
    int j, i;
	printf ("%i ss\n", n);
	printf ("Digite 1 para ordenar o seu vetor com Bolha:\n");
	printf ("Digite 2 para ordenar sua matriz com Bolha:\n");
	printf ("Digite 3 para ordenar o seu vetor com Quick:\n");
	printf ("Qual opcao?");
	scanf("%i", &o);
	switch(o){
		case 1:
				for(i = 0; i < n-1; i++){
			        for(j=i+1; j < n ; j++){
			            if(vet[i] > vet[j]){
			               aux = vet[i];
			               vet[i] = vet[j];
			               vet[j] = aux;
			            }
			        }
		        }
			    for (int h=0; h<n; h++){
			        printf ("\n%i\n", vet[h]);
			    }
			void vetore();
			vetore();
			lista* mostrar();
			mostrar();
			void arquivo();
			arquivo();
			break;
		case 2:
	     	for(int k=0; k<n ;k++){
				for(int l=0; l<n; l++){
	  				for(int i=0; i<n; i++){
	   					for(int j=0; j<n ;j++){
	     					if(mat[k][l] < mat[i][j]){
	      						aux = mat[i][j];
	       						mat[i][j] = mat[k][l];
	        					mat[k][l] = aux;      
							}
	                    }
	                }
	            }
	        }
	        for (int h=0; h<n; h++){
	        	for (int k=0; k<n; k++){
	        		printf ("\n%i\n", mat[h][k]);
				}
	        }
	        void matrize();
	        matrize();
	        lista mostrar2();
	        mostrar2();
	        getch();
	        void arquivo();
	        arquivo();
	        break;
	    case 3:
	        void quick(int vet[], int esq, int dir);
	        quick(vet, esq,dir);
			for (int h=0; h<n; h++){
			        printf ("\n%i\n", vet[h]);
			    }
			void vetore();
			vetore();
			lista* mostrar();
			mostrar();
			getch();
			void arquivo();
			arquivo();
			break;
    }
}
void quick(int vet[], int esq, int dir){
    dir = n-1;
	int pivo = esq, mn,ch,vc;         
    for(mn=esq+1;mn<=dir;mn++){        
        vc = mn;                      
        if(vet[vc] < vet[pivo]){     
         ch = vet[vc];               
         while(vc > pivo){           
            vet[vc] = vet[vc-1];      
            vc--;                   
         }
         vet[vc] = ch;              
         pivo++;                    
        }  
    }
    if(pivo-1 >= esq){              
        quick(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){             
        quick(vet,pivo+1,dir);      
    }
	void vetore();
	vetore();
 }
lista comecalista(){
	lista* aux = (lista*)malloc(sizeof(lista));
	aux->item =ele2;
	aux->ant=NULL;
	aux->prox=NULL;
	list=aux;
}
lista inserirfim(){
	lista* aux1;
	aux1=list;
	while (aux1->prox!=NULL){
		aux1=aux1->prox;
	}
	lista* aux = (lista*)malloc(sizeof(lista));
	aux->item=ele3;
	aux->prox=NULL;
	aux1->prox=aux;
	aux->ant=aux1;
}
void vetore(){
	ele2=vet[0];
	comecalista();
	for (int m=1; m<n; m++){
		ele3=vet[m];
		inserirfim();
	}
}
void matrize(){
	ele2=mat[0][0];
	comecalista();
	for (int d=0; d<n; d++){
		for (int f=0; f<n; f++){
			ele3=mat[d][f];
			inserirfim();
		}
	}
}
lista mostrar(){
	lista* aux;
	aux=list;
	while (aux!=NULL){
		printf ("Valor lista: %i\n", aux->item);
		aux=aux->prox;
	}
}
lista mostrar2(){
	lista* aux;
	aux=list->prox;
	while (aux!=NULL){
		printf ("Valor lista: %i\n", aux->item);
		aux=aux->prox;
	}
}
void arquivo(){
	int vb;
	system ("cls");
	printf ("1... Para guarda o vetor em um Arquivo:\n ");
	printf ("2... Para guarda a matriz em um Arquivo:\n ");
	printf ("3... Para não fazer nada: \n");
	printf ("Qual opção desejada?");
	scanf ("%i",&vb);
	if (vb==1){
		int arquivovet();
		arquivovet();
	}else if (vb==2){
		int arquivomat();
		arquivomat();
	}
}
int arquivovet(){
  FILE *arquivo;
  int i;
  int final;
  arquivo = fopen("PH.txt", "wt");  
  if (arquivo == NULL){
     printf("Arquivo não criado\n");
     return 0;
  }
  for (i = 0; i<n;i++){
	  final = fprintf(arquivo,"Valor %d\n",vet[i]);  					  
      if (final == EOF){
      	printf("Não gravou \n");
	  }
	}
  fclose(arquivo);
  printf ("Arquivo gravado! ");
}
int arquivomat(){
  FILE *arquivo;
  int i,j;
  int final;
  arquivo = fopen("PH MATRIZ.txt", "wt");  
  if (arquivo == NULL){
     printf("Arquivo não criado\n");
     return 0;
  }
  for (i = 0; i<n;i++){
  	for (j=0; j<n; j++){
  		final = fprintf(arquivo,"Valor %d\n",mat[i][j]);  
	}
  }
	if (final == EOF){
      	printf("Não gravou \n");
	}else{
		printf ("Arquivo gravado! ");
	}
  fclose(arquivo);
 
}
