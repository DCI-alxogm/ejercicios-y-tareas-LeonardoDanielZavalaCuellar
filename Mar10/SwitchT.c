/*Programacion basica Ejercicio Uso de Switch Leonardo Daniel Zavala Cuellar 
10/03/2025*/

#include <stdlib.h>
#include <stdio.h>

int main (){

char Temp;
float Tc,Tk;
printf("Wenas Tardes\n");
denuevo:
printf("Introduzca la temperatura que desea calcular de la siguiente manera\n");
printf("Para pasar de Celsius a Kelvin escriba Kelvin\n");
printf("Para pasar de Kelvin a Celsius escriba Celsius\n");
scanf("%s",Temp)
switch(Temp){
case 'Kelvin':
printf("Wenas introduzca la temperatura que desea pasar a Kelvin Recuerde ponerla en Celsius Gracias\n");
scanf("%f",&Tc);
Tk=Tc + 273.15;
printf("Sus temperatura es %fC° a Kelvin son %fK\n",Tc,Tk);
break;
case 'Celsius':
printf("Wenas introduzca la temperatura que desea pasar a Celsius Recuerde ponerla en Kelvin Gracias\n");
scanf("%f",&Tk);
Tc=Tk - 273.15;
printf("Sus temperatura es %fK a Celsius son %fC°\n",Tk,Tc);
break;
default:
printf("Lo siento opcion no valida intente denuevo\n");
goto denuevo;
break;
}
printf("Gracias por usar el programa nos vemos\n");
exit (0);
}

