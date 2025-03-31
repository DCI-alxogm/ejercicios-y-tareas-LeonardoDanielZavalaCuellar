//Leonardo Daniel Zavala Cuellar 31 Marzo 2025 Ejercicio2
#include <stdio.h>
#include <math.h>
int main()
{
    float x,x1;
    float f,d;
    printf("Wenas tardes\n");
    printf ("Asigne un valor final\n");
scanf("%f",&f);
printf ("Asigne un valor de espaciado\n");
scanf("%f",&d);
 printf("Ingrese un valor inicial positivo \n");
scanf("%f",&x);
do{
x1=pow(x,2);
printf("El exponente cuadrado de su numero es %f\n",x1);
x += d;
}while(x <= f);    


    return 0;
}






















