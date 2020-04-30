#include <stdio.h>
int main()
{
    int bis;
    printf("Ingresa year\n");
    
    
      scanf("%d",&bis;
     if(bis % 4 == 0 && (bis % 100 != 0 || bis % 400 == 0)){ //aqui use un tipo de condicional con operadores
     printf("year %d Si es bisiesto ",bis);
     }else{
     
	 printf("year %d No es bisiesto ",bis);
     }
    return 0;
}
