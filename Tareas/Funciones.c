/*Leonardo Daniel Zavala Cuellar Tarea3: Funciones Marzo 26 2025
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x,final,n;
    float ex,es,ec,el,er;
    
printf("Wenas Tardes\n"); 
printf("Asigne valor a x\n");
scanf("%f",&x);
printf("introduzca el valor final\n");
scanf("%f",&final);
printf("Por ultimo introduzca el espaciado\n");  
scanf("%f",&n);

for(x=0;x<=final;x += n ){

ex=exp(x);
el=log(x);
es=sin(x);
ec=cos(x);
er=sqrt(x);
printf("El valor de x es %f\n",x);
printf("El Exponencial de x es %f\n",ex); 
printf("El Logaritmo de x es %f\n",el);    
printf("El Seno de x es %f\n",es); 
printf("El Coseno de x es %f\n",ec); 
printf("La Raiz cuadrada de x es %f\n",er);

}
    return 0;
}









































































































































































