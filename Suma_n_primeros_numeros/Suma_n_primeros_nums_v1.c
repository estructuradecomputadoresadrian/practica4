#include <stdio.h>
int main () {
	int entrada, salida;
	int i;//contador
	printf("Escribe cuantos numero quieres sumar:\n");
	scanf("%d",&entrada);
	salida = 0;
	i = 1;
	if (entrada >= 1){
		while (i<=entrada){
			salida = salida + i;
			i = i + 1;
		}
		printf("La suma es %d \n", salida);
	}
	else{
		printf("El numero debe ser mayor o igual que uno.\n");
	}

return 0;
}
