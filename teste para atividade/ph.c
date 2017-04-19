#include <stdio.h>


int main (){

int vet[8] = {1,2,3,4,5,6,7,8};
int i,ok,pos;
int n;
    printf("temos 8 numeor, digite um para encontrar: ");
             
        scanf("%i",&n);
    i=0;
    while (1<8) {
        if(vet[i] == n){
            ok=1;
            pos=n;
        }
        i++;
    }
    if (ok == 1) {
        printf("seu numero está na lista! na posição vet[%i] \n ", pos);
    } else {
        printf("seu numeor não está na lista!\n");
    }
    
}