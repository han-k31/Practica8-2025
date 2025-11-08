/* Girón Knepp Hanna Sofía
ejercicio 2 for*/
#include <stdio.h>
int main() 
{
    int cont;
    float n, suma = 0, prom;
    
    for(cont = 1; cont <= 10; cont++) 
    {
        printf("Ingrese el valor %d: ", cont);
        scanf("%f", &n);
        suma = suma + n;
    }
    
    prom = suma / 10;
    
    printf("Suma: %f\n", suma);
    printf("Promedio: %f\n", prom);
    
    return 0;
}
