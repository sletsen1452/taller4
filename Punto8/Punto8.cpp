/*
Programa: Arreglo numerico que contengo 10 elementos ingresados por el usuario y mostrar en pantalla cual de ellos son numeros impares
Fecha: 26/08/18
Autor: sletsen duque vargas
*/

#include <stdio.h>
using namespace std;

int main() {
	
	
	int num[20];
	int i=0;
	
	printf("Ingrese 20 numeros para saber si es par o impar\n");
	
	for (i=0; i<20; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &num[i]);
		if (num[i]%2==1){
			printf("El numero %d es IMPAR\n ",num[i]);
		}
	}
	return 0;
}



