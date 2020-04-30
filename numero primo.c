#include <stdio.h>

int main(){
int i,j,k=0;

printf("su num para comprobar");
scanf("%i",&j);	

for(i=1;i<=j;i++){
	
	if(j%i==0){
		k++;
	
	}
}
	if(k>2){
		printf("no es primo");
	}else{
		printf("si es primo");
	}




	
	
	
	return 0;
}

