/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022
	Programa que pida 20 numeros y calcule su suma usando el ciclo for
	*/
	
#include <stdio.h>

int main(){
	int numero, suma;
	
	for(int i=0;i<20;i++){
		printf("Ingresa un numero: ");
		scanf("%d",&numero);
		suma=suma+numero;
	}
	
	printf("\nLa suma total es %d",suma);

	return 0;
}
