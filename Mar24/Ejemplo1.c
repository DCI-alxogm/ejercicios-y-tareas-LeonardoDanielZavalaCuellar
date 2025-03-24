/**Leonardo Daniel Zavala Cuellar Ejemplo1 While Clase 24 de Marzo 2025
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
float tempC,tempK;
float inicial=100,final=200,delta;
int n=10;
    delta=(final-inicial)/n;
    tempC=inicial;
    while(tempC<=final){
        tempK=tempC+ 273.15;
        printf("%f %f\n",tempC,tempK);
        tempC=tempC+delta;//tempC+=delta;
    }

    return 0;
}







































