#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>



int main() {    
    int o;
printf("---- MENU ----"); 
printf("\n\n1.Atividade 1"); //o \n é a quebra de linha 
printf("\n2. Atividade 2"); 
printf("\n3. Atividade 3"); 
printf("\n4. Atividade 4"); 
printf("\n5. SAIR"); 
printf("\n\n\n\n\n\n");

printf("Digite a opção desejada da atividade: \n");
     
    scanf("%d", &o);
    switch(o) {
        case 1:
            ativ();
            break;
        case 2:
            atv2();
            break;
        case 3:
            printf("3");
            break;
        }   
    return 0;    
}
void ativ(void){  
    char n[30],s[30];
    printf("Digite um nome de usuario e sobrenome: \n ");
    scanf("%s%s", &n, &s);
    printf("______________________________________\n");    
    printf("o nome que você digitou foi\n");
    printf("%s  %s\n",n,s);
    printf("______________________________________\n"); 
    
    
}
atv2 ()
{
    char n[20]; 
    int i;
        
   for(i=0;i<20;i++)
    {
    printf("digite seu nome: \n");
    
     gets(n);    
        
    }
    }
    
