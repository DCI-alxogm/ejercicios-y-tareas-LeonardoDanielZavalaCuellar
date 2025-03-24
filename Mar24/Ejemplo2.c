/**Leonardo Daniel Zavala Cuellar Ejemplo2 While Clase 24 de Marzo 2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
float tempC,tempK;
float inicial=100,final=200,delta;
int n=10;
int op=1;

    delta=(final-inicial)/n;
    while(op==1){
        tempK=0.;
        tempC=inicial;
    
    while(tempC<=final){
        tempK=tempC+ 273.15;
        printf("%f %f\n",tempC,tempK);
        tempC=tempC+delta;//tempC+=delta;
    }
    printf("Desea hacer otra operacion 1=si o 2=no\n");
    scanf("%i",&op);

}
    return 0;
}

























