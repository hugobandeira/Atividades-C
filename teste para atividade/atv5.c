#include <stdio.h>

int main(){
    int j;
    int i;
    int vet[20];   
    
    for(i=2;i<=20;i++)   {        
        if (i % 2 == 0){
            vet[i]=i;            
            printf("os numeros pares %d\n", vet[i]);
            
        }
    }
        
}