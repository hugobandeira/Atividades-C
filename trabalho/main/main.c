#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main() {    
    int o;
printf("---- MENU ----"); 
printf("\n\n1.  Atividade 1");  
printf("\n2.  Atividade 2"); 
printf("\n3.  Atividade 3"); 
printf("\n4.  Atividade 4");
printf("\n5.  Atividade 5");
printf("\n6.  Atividdade 6"); 
printf("\n7.  Atividdade 7");
printf("\n8.  Atividdade 8");
printf("\n9.  Atividdade 9");
printf("\n10. Atividdade 10");
printf("\n11. Atividdade 11");
printf("\n12. Atividdade 12");
printf("\n13. Atividdade 13");
printf("\n14. Atividdade 14");
printf("\n15. Atividdade 15");
printf("\n16. Atividdade 16");
printf("\n17. Atividdade 17");





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
            atv3();
            break;
        case 4:
            printf("escolheu a 4 \n");
            break;
        case 5:
            atv5();
            break;
        case 6:
            atv6();
            break;
        case 7:
            atv7();
            break;
        case 8:
            atv8();
            break;
        case 9:
            atv9();
            break;
        case 10:
            atv10();
            break;
        case 11:
            atv11();
            break;
        case 12:
            atv12();
            break;
        case 13:
            atv13();
            break;
        case 14:
            atv14();
            break;
        case 15:
            atv15();
            break;
        case 16:
            atv16();
            break;
        case 17:
            atv17();
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
atv2()
{
    char n[20]; 
    int i;
        
   for(i=0;i<20;i++)
    {
    printf("digite seu nome: \n");
    
     gets(n);    
        
    }
    }
atv3()
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
int atv4(){
    printf("4");
}


int atv5 (){
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
int atv6(){
    printf("6");
}
int atv7(){
    printf("7");
}

int atv8(){
    int j;
    int i;
    int vet[20] = {1,2,3,4,5,6,7};
    
    for(i=0;i<=6;i++)   {        
         vet[i]=i;            
            printf("os numeros do seu vetor %d\n", vet[i]);
            
        }
    
}

int atv9(){
    printf("9");
}
int atv10(){
  printf("10");  
}
int atv11(){
	
int vet[11];
for (int i=10;i<=20;i++)
{
	vet[i]=i;
	printf("%d\n", vet[i]);

        
}
}
int atv12(){
int j,l;

printf ("coloque um valor em metros cubicos: ");
scanf("%d", &j);
l=1000 * j; 
printf("o valor dele em litros e: %d\n", l );

}

int atv13(){
	int j;
	int l;
	float k;

printf ("coloque um valor em massa em libras: ");
scanf("%d", &l);
k=l * 0.45; 
printf("o valor dele em quilogramas e: %f", k );
}
int atv14(){
	int a;
	int r;
	float k;

printf ("coloque um valor altura e o raio de um cilindro circular: ");
scanf("%d", &a);
scanf("%d", &r);
k = 3.141592*(r*r)* a;
printf("o valor dele em quilogramas e: %f", k );
}
int atv15(){
   	int a;
	int r;
	float quantia=780.000,primeiro,segundo,terceiro;
	
	
	primeiro=(quantia*46)/100;
	segundo=(quantia*32)/100;
	
	terceiro = quantia - (primeiro+segundo);
	
	printf("\n %f \n", primeiro);
	printf("\n %f \n", segundo);
	printf("\n %f \n", terceiro);
}

int atv16(){
    atv2();
    atv3();
    atv5();
    atv8();
}
int atv17(){
	int a,c,l,p;
	int r;
	float quantia=780.000,primeiro,segundo,terceiro;
	
	
printf("Ler as dmieções de um terreno\n");
printf("comprimento\n");
scanf("%i",&c);
printf("largura");
scanf("%i",&l);
printf("Digite o preço da tela, para o terreno: \n");
scanf("%i", &p);
a=((c*2)+(l*2)) * p;
printf("o preço da tela para seu terreno é: %i",a);

}