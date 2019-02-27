#include <stdio.h>
int main(){
	int entrada, salida;
	int i; //contador
	printf("Escribe cuantos numeros quieres sumar.\n");
	scanf("%i", &entrada);
	if (entrada >= 1){
		salida = 0;
		for (i = 1; i <= entrada; i++)
		{
			salida = salida + i;
		}
		printf("La suma es igual a %i\n", salida);

	}
	else{
		printf("El numero introducido tiene que ser mayor o igual que 1\n");
	}
	return 0;
}