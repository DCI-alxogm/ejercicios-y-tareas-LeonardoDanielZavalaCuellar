//Leonardo Daniel Zavala Cuellar 2 Abril 2025 Tarea
#include <stdio.h>
#include <math.h>
int main()
{
//SE de finen las variables a utilizar 
    float x,xq,xe,xl,xs,xc;
    // Las variables de fin y intervalo
    float f,d;
    printf("Wenas tardes\n");
    //solicita a el usuario que asigne valor incial,final y intervalo
    printf ("Asigne un valor final\n");
scanf("%f",&f);
printf ("Asigne un valor de espaciado\n");
scanf("%f",&d);
 printf("Ingrese un valor inicial positivo \n");
scanf("%f",&x);
//Inicio de do para que realize las operaciones al menos una vez
do{
    
xq=sqrt(x);
xe=exp(x);
xl=log(x);
xs=sin(x);
xc=cos(x);
printf("El exponencial de su numero es %f\n",xe);
printf("El logaritmo de su numero es %f\n",xl);
printf("El seno de su numero es %f\n",xs);
printf("El coseno de su numero es %f\n",xc);
printf("La Raiz cuadrada de su numero es %f\n",xq);
x += d;
//Ciclo para repetir el programa hasta el valor final
}while(x <= f);    


    return 0;
} 
