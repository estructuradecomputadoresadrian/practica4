#include <stdio.h>
int main (){
	int base, exponente, salida;
	int i;
	printf("Escriba el numero base.\n");
	scanf("%i", &base);
	printf("Escriba el exponente.\n");
	scanf("%i", &exponente);
	if (base >= 1 && exponente >= 1){
		salida = 1;
		i = 1;
		while (exponente >= 1){
			salida = salida * base;
			exponente = exponente - 1;
		}
		printf("La potencia es %i\n", salida);
	}
	else{
		printf("La base y el exponente deben ser mayores o iguales a 1.\n");
	
}
		

	return 0;
	}