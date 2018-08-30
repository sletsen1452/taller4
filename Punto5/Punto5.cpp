/*
Programa: Arreglo con los primeros 100 numeros pares y muestre su suma
Fecha: 26/08/18
Autor: sletsen duque vargas
*/
#include <stdio.h>
int main()
{
	int x,cont,sum,i,tabla[100];
	
	i=0;
	sum=0;
	for (x=1;x<=100;x++)
	{
		cont=0;
		if (x%2==0)
		{
			tabla[i]=x;
			i++;
		}
	}
	
	for (x=0;x<i;x++)
	{
		sum=sum+tabla[x];
	}
	
	printf("%d\n",sum);
	
	
	return 0;
}


