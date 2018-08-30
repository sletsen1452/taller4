/*
Programa: Que lea 5 numeros por teclado los copie a otro array multiplicados por 2
Fecha: 26/08/18
Autor: sletsen duque vargas
*/

#include <stdio.h>
using namespace std;

int main()
{
	int Arreglo1 [5];
	int Arreglo2 [5];
	int Arreglo3 [5];
	
	for(int i = 0; i < 5; i ++)
	{
	   printf("Ingrese un numero: ");
	   scanf("%d", &Arreglo1[i]);
	   
	   Arreglo2[i]= Arreglo1[i]*2;
	   
	   for(int j=0; j<5; j++)
	   {
	   		if(Arreglo2[j]>Arreglo2[i])
	   		{
	   			Arreglo3[i] = Arreglo2[i];
			}
	   }
	   
	   printf("%d\n", Arreglo3[i]); 
	   
	}
	
	
	return 0;
}
