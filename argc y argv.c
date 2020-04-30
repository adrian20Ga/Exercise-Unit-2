#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char** argv) //iniciaremos con argc y argv


{

	int i;
	for (i=0; i<argc; i++){
		
		
		printf("angv[%d] is  %s /n", i,argv[i]);

	}

return(0);

}
