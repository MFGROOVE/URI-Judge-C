#include <stdio.h>
#include <math.h>
#define PI 3.14159

double area(double r)
{
   r=pow(r,2);
   return PI*r;
}
int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 double r;
 scanf("%lf",&r);
 printf("A=%.4lf\n",area(r));
    return 0;
}
