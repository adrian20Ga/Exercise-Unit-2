#include<stdio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,dx,dy,distancia;

printf("Introduce el punto x1 \n");
scanf("%f",&x1);


printf("Introduce el punto x2 \n");
scanf("%f",&x2);


printf("Introduce el punto y1 \n");
scanf("%f",&y1);

printf("Introduce e punto y2 \n");
scanf("%f",&y2);

getchar();

dx=x2-x1;
dy=y2-y1;

distancia=sqrt((dy*dy)+(dx*dx));
printf("La distancia entre los puntos es %f \n",distancia);
return 0;
}
