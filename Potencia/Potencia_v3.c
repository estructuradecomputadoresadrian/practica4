#include <stdio.h>
int main (){
	int base, exponente, salida;
	int i;
	printf("Programa que eleva un numero a otro .\n")
	printf("Escriba el numero base.\n");
	scanf("%i", &base);
	printf("Escriba el exponente.\n");
	scanf("%i", &exponente);
	if (base >= 1 && exponente >= 1){
		salida = 1;
		for (i = 1; i <= exponente; i++)
		{
			salida = salida * base;

		}
		printf("La potencia es %i\n", salida );
		
	}
	else{
		printf("La base y el exponente deben ser mayores o iguales a 1.\n");
	}
		
	
		

	return 0;
	}
