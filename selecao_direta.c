#include<stdio.h>
int main()
{
	// Definição das variáveis básicas
	int i, j, aux, menor, trocas, tamanho=10;
	int vetor[tamanho];

	// Inicializa a variavel trocas
	trocas = 0;

	// Preenchimento e exibição do vetor com valores aleatorios entre 0 e 1000
	srand(time(0));
	printf("\nVetor original\n");
	for(i=0;i<tamanho;i++)
		{
		vetor[i]=rand()%1000;
		printf("Elemento %2d: %3d\n",i+1,vetor[i]);
        }
	
	// Ordenacao pelo metodo da seleção direta
	for(i=0;i<tamanho-1;i++)
		{
		menor = i;
		for(j=i+1;j<tamanho;j++)
			{
			if(vetor[j] < vetor[menor]) menor = j;
			}
		aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
		trocas++;
		}

	// Mostra vetor ordenado
	printf("\nVetor ordenado:\n");
	for(i=0;i<tamanho;i++) printf("Elemento %2d: %3d\n",i+1,vetor[i]);
	printf("\nTrocas efetuadas: %2d\n",trocas);	
	system("pause");
}
