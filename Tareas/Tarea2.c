//Leonardo Daniel Zavala Cuellar Tarea 2
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
float Tc,Kh,Lg,Kg,x,y,z;
float tta,phi,r,r1,tta1,z1,ft,Tf,Mh,Lb;
char op;
char opc1[2];
char opc[11];
Regreso:
printf("WENAS TARDES\n");
printf("Que desea Calcular Transformacion a unidades del sistema ingles o Coordenadas \n");
printf("Para sistema ingles escriba S\n");
printf("Para sistema Coordenadas C\n");
scanf("%s",&op);
switch(op){
case 'C':
reg:
printf("Escriba el tipo de coordenadas que desea calcular Esfericas o Cilindricas\n");
scanf("%11s",opc);
if (strcmp(opc,"Cilindricas")==0)    
    {
Nuez:
        printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
r1=sqrt((x*x)+(y*y));
tta1= atan(y/x);
z1= z;
printf("Los resultados de sus coordenadas cilindricas es\nr=%f\nThetta=%f\nz=%f\n",r1,tta1,z1);
denuevo1:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Nuez;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo1;
}
//En caso de Esfericas
}else if (strcmp(opc,"Esfericas")==0)
{
Nuez1:
    printf("Introduzca el valor x:\n");
scanf("%f",&x);
printf("Introduzca el valor y:\n");
scanf("%f",&y);
printf("Introduzca el valor z:\n");
scanf("%f",&z);
r= sqrt((x*x)+(y*y)+(z*z));
tta= atan(y/x);
phi= acos(z/r);
printf("Los resultados de sus coordenadas esfericas es\nr=%f\nThetta=%f\nphi=%f\n",r,tta,phi);
denuevo2:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Nuez1;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto denuevo2;
}
// En caso de que no seleccione Esfericas o Cilindricas
} else{
        printf("Solo acepto Cilindricas o Esfericas intente denuevo\n");
    goto reg;
    }
case 'S'
printf("Escriba la medida que desea obtener Longitud,Masa,Velocidad,Temperatura\n");
scanf("%11s",opc);
reg1:
if (strcmp(opc,"Longitud")==0)    
    {
Va:
printf("Introduzca su longitud (en METROS) a pasar a Sistema ingles\n");
scanf("%f",&Lg);
ft=Lg * 3.281;
printf("Su longitud es %f m y en Sistema ingles es %f ft\n",Lg,ft);
fallo:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo;
}
reg2:
if (strcmp(opc,"Masa")==0)    
    {
Va1:
printf("Introduzca su Masa (en Kilogramos) a pasar a Sistema ingles\n");
scanf("%f",&Kg);
Lb=Kg * 2.205;
printf("Su Masa es %f Kg y en Sistema ingles es %f Lb\n",Kg,Lb);
fallo1:
printf("¿Quieres realizar otra operacion?\n si/no\n");
scanf("%2s",opc1);
if (strcmp(opc1,"si")==0)
{
goto Va1;
}else if (strcmp(opc1,"no")==0)
{
    printf("Gracias nos vemos\n");
}else{
    printf("Solo acepto si o no intente denuevo\n");
    goto fallo1;
}





















exit (0);
}
