#include <stdio.h> //Programa propuesto por Toño en clase para multiplicar dos numeros mediante sumas con un bucle for 
int main () {
	int num1, num2, num3, i;
	printf("Introduce el primer numero a multiplicar.\n");
	scanf("%d", &num1);
	printf("Introduce el segundo numero.\n");
	scanf("%d", &num2);
	num3 = 0;
	if (num1 > 0 && num2 > 0){
			for (i = 1; i <= num2; i++)
	{
		num3 = num1 + num3;
	}
	printf("La multiplacion es igual a %d.\n",num3 );
	}
	else{ if (num2 == 0 || num1 == 0){
		printf("La multiplicacion es igual a 0.\n");
	}
	else{
		printf("Los numeros introducidos deben ser mayor o igual que 0\n");
	}
	}


	return 0;
}