/* Girón Knepp Hanna Sofía
ejercicio while*/
#include <stdio.h>

int main() 
{
    int num = 0;
    int suma = 0;
    
    while (suma <= 78500) 
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        suma = suma + num;
    }
    
    printf("La suma total es: %d\n", suma);
    
    return 0;
}
