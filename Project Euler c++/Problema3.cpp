#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    long long int i, resultado;
    long long int max = 600851475143;
    int num;
 
    for( i = 2; i < max; i++)
    {
       if(max % i == 0)
       {
           max /= i;
           i = 2;
        }
    }
 
    printf("El maximo factor primo de 600851475143 es %d\n\n", max );
 
    system("pause");
    return 0;
}