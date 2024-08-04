#include <stdio.h>
 float getsalary(int b,float c)
 {
     
     return b*c;
 }
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b;
    float c;

    scanf("%d %d %f", &a, &b, &c); 
    c=getsalary(b,c);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", a, c); 
    return 0;
}
