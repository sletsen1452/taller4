/*
Programa: Arreglo que realize 10 elementos y con un ciclo for verifique cual es el elemento mayor
Fecha: 26/08/18
Autor:sletsen duque vargas
*/

#include <stdio.h>
using namespace std;

int main()
{
	int n[] = {0, 10, 5, 11, 7, 6};
	int i = 0, j = 0;
	//inicio el arreglo
	for(j = 0; j < 6; j ++)
	{
      if(n[j] > n [i])// define que dato es mayor al anterior
	  {
		  i = j ;
	  }
	}
	
	printf("\n El elemento mayor es %d", n[i]);

	
	return 0;
}

