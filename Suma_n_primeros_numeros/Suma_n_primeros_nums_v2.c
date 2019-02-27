#include <stdio.h>
int main () {
	int entrada, salida;
	int i; //contador
	printf("Escribe cuantos numeros quieres sumar:\n");
	scanf("%i",&entrada);
	salida = 0;
	i = 1;
	if (entrada >= 1){
		do
		{
			salida = salida + i;
			i++;
		} while (i <= entrada);
		printf("La suma total es %i. \n", salida);
	}
	else {
		printf("Introduce un numero mayor o igual que 1.\n");
	}

	return 0;
}