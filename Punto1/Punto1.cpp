/*
Programa: Realize 5 calificaciones por teclado, los muestre y calcule el promedio de ellos
Fecha: 26/08/18
Autor: sletsen duque vargas 
*/

#include <stdio.h>
int main()
{
    float cali[5];
	float prom = 0;
	
	for(int i = 0; 1 < 5; i ++)
	{
		printf("Ingrese la nota %d:\n", i+1);
		scanf("%f", &cali[i]);
		prom += cali[i];
		printf("\n");
		
	}
	
	printf("las notas ingresadas son %f.2f");
	for( int i = 0; 1 < 5; i ++)
	{
		printf("%.2f", cali[i]);
	}
	
     printf("el promedio de las notas es %.2f: ", prom / 5);
	return 0;
}

