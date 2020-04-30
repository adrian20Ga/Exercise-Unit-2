#include<stdio.h>

int main(){
   int n, i,suma;   
   
   
   

   do{  
      printf("ingrese el numero\n");
      scanf("%d",&n);
      suma=0;
     		
			  for(i=1;i<n;i++) 
			   
         if(n%i==0) suma+=i;
         
      if(suma==n) printf("%d es perfecto\n",n);
      
      else printf("%d no es perfecto\n",n);
      
   }while(n>0);
   
   return 0;
   
}
