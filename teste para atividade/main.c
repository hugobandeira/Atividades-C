#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>



int main ()
{
    char n[20],e[20],t[100];    
    printf("digite seu nome,endereço,numero: \n");
    
     gets(n);
     gets(e);
     gets(t); 
     
     
     puts ("nome digitado");
     puts (n);
     puts ("endereço");
     puts(e);
     puts ("telefone");
     puts (t);


}