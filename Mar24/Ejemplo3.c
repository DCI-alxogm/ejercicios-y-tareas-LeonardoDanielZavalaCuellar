/**Leonardo Daniel Zavala Cuellar Ejemplo3 While Clase 24 de Marzo 2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
float tempC,tempK;
float inicial=100,final=200,delta;
int n=10;
char op[2];

op[0]= 's';
    delta=(final-inicial)/n;
    while(op[0]=='s'){
        tempK=0.;
        tempC=inicial;
    
    while(tempC<=final){
        tempK=tempC+ 273.15;
        printf("%f %f\n",tempC,tempK);
        tempC=tempC+delta;//tempC+=delta;
    }
    printf("¿Desea hacer otra operacion? (si/no)\n");
    scanf("%s",&op);

}
    return 0;
}
