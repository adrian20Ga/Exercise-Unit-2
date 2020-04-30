#include<stdio.h>

int main(){
 int num,aux,elbicho,inverso=0;
 
 printf("Ingrese numero");
 scanf("%i",&num);
 
 aux=num;
 
 while(aux>0){
         elbicho=aux%10;
      aux=aux/10;
      inverso=inverso*10+elbicho;
 }
 
 if(inverso==num){
  printf("Numero es capicua");
   }
 else{
  printf("Numero no capicua");  
 }
 
 return 0;
}
